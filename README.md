# LED Button Control using PIC18F4580

## 📌 Project Overview
This project demonstrates basic GPIO interfacing using the PIC18F4580 microcontroller. An LED is controlled using a push button. When the button is pressed, the LED toggles between ON and OFF states.

---

## 🧰 Components Used
- PIC18F4580 Microcontroller
- LED
- Push Button
- 220Ω Resistor
- Breadboard and connecting wires

---

## ⚙️ Hardware Connections
- LED connected to PORTB (RB0)
- Push Button connected to PORTB (RB1)

---

## 🔄 Working Principle
- The LED pin (RB0) is configured as output.
- The button pin (RB1) is configured as input.
- Initially, the LED is OFF.
- When the button is pressed:
  - A small delay is applied for debouncing.
  - The button state is rechecked to confirm the press.
  - The LED toggles its state.
  - The system waits until the button is released to avoid multiple toggles.

---

## 💡 Concepts Used
- GPIO (General Purpose Input/Output)
- Embedded C Programming
- Polling Technique
- Software Debouncing
- Bit Manipulation

---

## 🛠️ Tools Used
- MPLAB X IDE
- XC8 Compiler

---

## ▶️ Output
- LED turns ON when button is pressed once.
- LED turns OFF when button is pressed again.

---

## 🚀 Future Improvements
- Implement interrupt-based button handling
- Add multiple LEDs with different patterns
- Interface LCD to display LED status

---

## 👨‍💻 Author
Tulsi Ram Reddy
