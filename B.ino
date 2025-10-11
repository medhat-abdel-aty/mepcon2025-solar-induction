/* 
  Appendix B — Hardware Timer PWM (Suggested enhancement, 20 kHz)
  MEPCON2025: Solar-Ready Induction Heating — Medhat A. Abdel-Kawy.
  Purpose: Example using Timer1 (ATmega328P) for stable PWM on OC1A/OC1B at 20 kHz.
  Note: Demonstration only — not used in reported experiments.
*/

const uint32_t F_CPU_HZ   = 16000000UL; // Arduino UNO clock
const uint32_t PWM_FREQ   = 20000UL;    // Desired switching frequency = 20 kHz
const uint16_t DEADTIME_US = 2;         // Dead-time in microseconds (~32 timer counts)

void setup() {
  // Configure OC1A (Pin 9) and OC1B (Pin 10) as PWM outputs
  pinMode(9, OUTPUT);  
  pinMode(10, OUTPUT); 

  // Stop Timer1 and clear settings
  TCCR1A = 0;
  TCCR1B = 0;

  // Calculate TOP for Fast PWM mode (Mode 14, ICR1 is TOP)
  uint32_t top = (F_CPU_HZ / PWM_FREQ) - 1; // prescaler = 1 → top ≈ 799 for 20 kHz
  if (top > 0xFFFF) top = 0xFFFF;
  ICR1 = (uint16_t)top;  // Set TOP value

  // Configure Fast PWM mode, non-inverting on both outputs
  TCCR1A = (1 << COM1A1) | (1 << COM1B1) | (1 << WGM11);
  TCCR1B = (1 << WGM13) | (1 << WGM12) | (1 << CS10); // prescaler = 1

  // Set 50% duty on OC1A
  OCR1A = (uint16_t)(top / 2); // ≈ 400 counts

  // Compute dead-time in timer counts
  uint32_t dt_counts = DEADTIME_US * (F_CPU_HZ / 1000000UL); // 2 µs × 16 MHz = 32 counts

  // Apply dead-time offset to OC1B
  OCR1B = (uint16_t)((OCR1A > dt_counts) ? (OCR1A - dt_counts) : 0);
}

void loop() {
  // Maintains fixed 20 kHz PWM @ 50% duty.
  // Update OCR1A/OCR1B if modulation or phase shift is required.
}
