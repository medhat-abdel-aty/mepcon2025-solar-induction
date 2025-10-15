*/
  Appendix A — Software PWM (Experimental)
  MEPCON2025: Solar-Ready Induction Heating — Medhat A. Abdel-Kawy et al.
  Purpose: Simple software-based 3-phase PWM used in experiments.
  Notes: Uses delayMicroseconds(); safe deadtime and safetyCheck() implemented.
*/
uint16_t delaypd;   // Pulse duration (µs) – controls switching frequency (~5 kHz)
uint16_t deadtime;  // Dead time (µs) – prevents shoot-through

// ===== Function: Safety Check =====
// Ensures that no upper and lower switch of the same phase are ON simultaneously.
// If a fault is detected, both switches are shut down immediately.
void safetyCheck() {
  // Phase A protection (AH = 2, AL = 3)
  if (digitalRead(2) == HIGH && digitalRead(3) == HIGH) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
  }
  // Phase B protection (BH = 4, BL = 5)
  if (digitalRead(4) == HIGH && digitalRead(5) == HIGH) {
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  // Phase C protection (CH = 6, CL = 7)
  if (digitalRead(6) == HIGH && digitalRead(7) == HIGH) {
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  }
}

void setup() {
  // Configure output pins for each inverter switch
  pinMode(2, OUTPUT); pinMode(3, OUTPUT);
  pinMode(4, OUTPUT); pinMode(5, OUTPUT);
  pinMode(6, OUTPUT); pinMode(7, OUTPUT);

  // Initialize all switches OFF
  digitalWrite(2, LOW); digitalWrite(3, LOW);
  digitalWrite(4, LOW); digitalWrite(5, LOW);
  digitalWrite(6, LOW); digitalWrite(7, LOW);

  // Define timing parameters
  delaypd  = 200;  // Adjust for desired switching period (~5 kHz)
  deadtime = 2;    // Safe switching dead-time (µs)
}

void loop() {
  digitalWrite(2, HIGH); digitalWrite(5, HIGH); digitalWrite(6, HIGH);
  safetyCheck(); delayMicroseconds(delaypd);

  digitalWrite(6, LOW); safetyCheck(); delayMicroseconds(deadtime);

  digitalWrite(7, HIGH); safetyCheck(); delayMicroseconds(delaypd);

  digitalWrite(5, LOW); safetyCheck(); delayMicroseconds(deadtime);

  digitalWrite(4, HIGH); safetyCheck(); delayMicroseconds(delaypd);

  digitalWrite(2, LOW); safetyCheck(); delayMicroseconds(deadtime);

  digitalWrite(3, HIGH); safetyCheck(); delayMicroseconds(delaypd);

  digitalWrite(7, LOW); safetyCheck(); delayMicroseconds(deadtime);

  digitalWrite(6, HIGH); safetyCheck(); delayMicroseconds(delaypd);

  digitalWrite(4, LOW); safetyCheck(); delayMicroseconds(deadtime);

  digitalWrite(5, HIGH); safetyCheck(); delayMicroseconds(delaypd);

  digitalWrite(3, LOW); safetyCheck(); delayMicroseconds(deadtime);
}
