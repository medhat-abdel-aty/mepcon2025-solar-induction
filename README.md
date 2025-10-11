## MEPCON2025 — Solar-Ready Induction Heating  
**Logic- vs Arduino-Controlled Dual-Mode PWM Three-Phase Inverter**  
**Author:** Medhat A. Abdel-Kawy et al.  
**Conference:** MEPCON 2025, Egypt  

---

## 🔹 Overview
This repository accompanies the MEPCON 2025 paper:  
**"Solar-Ready Induction Heating in the Egyptian Desert: Logic- vs Arduino-Controlled Dual-Mode PWM Three-Phase Inverter."**

It provides the Arduino firmware used in the reported experiments (Appendix A) and a suggested timer-based enhancement (Appendix B) for academic reproducibility and educational use.

---

## 🔹 Contents

| File | Description |
|------|--------------|
| `appendix_a_software_pwm.ino` | **Experimental firmware actually used** in the 5 kHz tests. Implements software-based complementary three-phase PWM using `delayMicroseconds()` with programmable dead-time and safety checks. |
| `appendix_b_timer_pwm.ino` | **Suggested enhancement** using hardware Timer1 for a 20 kHz PWM. Provided for demonstration of higher-frequency, hardware-timed control (not used in reported measurements). |
| `eagle_logic_controller.sch / .brd` | **EAGLE schematic and PCB layout** of the logic-based PWM controller corresponding to Fig. 2 in the paper. Provided for controlled academic review. |
| `README.md` | This documentation file. |

---

## 🔹 Experimental Notes
- **Microcontroller:** ATmega328P (Arduino UNO)  
- **PWM Frequencies:** 5 kHz (software) and 20 kHz (hardware timer example)  
- **Dead-time:** 1–3 µs (programmable)  
- **Supply:** 12 V / 90 Ah deep-cycle battery  
- **Load:** 1.5 kW, 4-pole, three-phase induction motor  

The setup enables comparison between logic-based and Arduino-based PWM control for off-grid, solar-ready induction heating applications.

---

## 🔹 Hardware Schematics Notice
For confidentiality and intellectual-property protection,  
only **simplified block diagrams** are presented in the MEPCON 2025 paper (Fig. 1–2).  
The **complete EAGLE schematic and PCB layout** used to generate the hardware logic controller (corresponding to Fig. 2) have been **archived privately** within this repository and may be shared **upon reasonable academic request** to the author or MEPCON 2025 committee reviewers.  
Detailed COMSOL simulation files remain restricted under research license agreements.

---

## 🔹 Citation
If you reference this work, please cite:

> Medhat A. Abdel-Kawy et al.,  
> *"Solar-Ready Induction Heating in the Egyptian Desert: Logic- vs Arduino-Controlled Dual-Mode PWM Three-Phase Inverter,"*  
> in **Proc. MEPCON 2025**, Egypt, 2025.

---

## 🔹 License & Intellectual Property
This repository and its contents are provided **for academic reference only**.  
Unauthorized redistribution, modification, or commercial use of any part of the circuits or firmware is prohibited without prior written permission from the author.  
© **Medhat A. Abdel-Kawy, 2025. All rights reserved.**

---

## 🔹 Access and Contact
The repository is available under controlled academic access:  
**[https://github.com/medhat-abdel-aty/mepcon2025-solar-induction](https://github.com/medhat-abdel-aty/mepcon2025-solar-induction)**  

For academic collaboration or inquiries:  
**Eng. Medhat A. Abdel-Kawy**  
Email: *[add email if desired]*  
GitHub: [https://github.com/medhat-abdel-aty](https://github.com/medhat-abdel-aty) mepcon2025-solar-induction
Dual-mode PWM three-phase inverter for solar-ready induction heating (MEPCON2025).
# MEPCON2025 — Solar-Ready Induction Heating  
**Logic- vs Arduino-Controlled Dual-Mode PWM Three-Phase Inverter**  
**Author:** Medhat A. Abdel-Kawy et al.  
**Conference:** MEPCON 2025, Egypt  

---

## 🔹 Overview
This repository accompanies the MEPCON 2025 paper:  
**"Solar-Ready Induction Heating in the Egyptian Desert: Logic- vs Arduino-Controlled Dual-Mode PWM Three-Phase Inverter."**

It provides the Arduino firmware used in the reported experiments (Appendix A) and a suggested timer-based enhancement (Appendix B) for academic reproducibility and educational use.

---

## 🔹 Contents

| File | Description |
|------|--------------|
| `appendix_a_software_pwm.ino` | **Experimental firmware actually used** in the 5 kHz tests. Implements software-based complementary three-phase PWM using `delayMicroseconds()` with programmable dead-time and safety checks. |
| `appendix_b_timer_pwm.ino` | **Suggested enhancement** using hardware Timer1 for a 20 kHz PWM. Provided for demonstration of higher-frequency, hardware-timed control (not used in reported measurements). |
| `README.md` | This documentation file. |

---

## 🔹 Experimental Notes
- **Microcontroller:** ATmega328P (Arduino UNO)  
- **PWM Frequencies:** 5 kHz (software) and 20 kHz (hardware timer example)  
- **Dead-time:** 1–3 µs (programmable)  
- **Supply:** 12 V / 90 Ah deep-cycle battery  
- **Load:** 1.5 kW, 4-pole, three-phase induction motor  

The setup enables comparison between logic-based and Arduino-based PWM control for off-grid, solar-ready induction heating applications.

---

## 🔹 Hardware Schematics Notice
For confidentiality and intellectual-property protection,  
only **simplified block diagrams** are presented in the MEPCON 2025 paper (Fig. 1–2).  
Detailed schematics, PCB layouts, and COMSOL models are **not publicly released** but may be shared **upon reasonable academic request** to the author.

---

## 🔹 Citation
If you reference this work, please cite:

> Medhat A. Abdel-Kawy et al.,  
> *"Solar-Ready Induction Heating in the Egyptian Desert: Logic- vs Arduino-Controlled Dual-Mode PWM Three-Phase Inverter,"*  
> in **Proc. MEPCON 2025**, Egypt, 2025.

---

## 🔹 License & Intellectual Property
This repository and its contents are provided **for academic reference only**.  
Unauthorized redistribution, modification, or commercial use of any part of the circuits or firmware is prohibited without prior written permission from the author.  
© **Medhat A. Abdel-Kawy, 2025. All rights reserved.**

---

## 🔹 Access and Contact
The repository is available under controlled academic access:  
**[https://github.com/medhat-abdel-aty/mepcon2025-solar-induction](https://github.com/medhat-abdel-aty/mepcon2025-solar-induction)**  

For academic collaboration or inquiries:  
**Eng. Medhat A. Abdel-Kawy**  
Email: *[add email if desired]*  
GitHub: [https://github.com/medhat-abdel-aty](https://github.com/medhat-abdel-aty)
