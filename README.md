# 🔐 Embedded Keypad Lock System

A password-based electronic access control system built using a microcontroller, a 4×4 matrix keypad, and a 16×2 LCD display.

The system allows users to enter a password through the keypad and displays authentication feedback on the LCD. This project demonstrates fundamental embedded systems concepts, including digital input/output, keypad interfacing, LCD communication, and password validation.

## ✨ Features

- 🔢 Password entry using a 4×4 matrix keypad.
- 🖥️ Real-time user feedback on a 16×2 LCD.
- 🔐 Password-based access control.
- ✅ Authentication success and failure feedback.
- 🔄 Microcontroller-based input processing and control logic.

## 🛠️ Hardware Components

- Microcontroller development board (Arduino-compatible).
- 4×4 matrix keypad.
- 16×2 LCD display.
- Jumper wires.
- Breadboard.
- Power supply.
- Optional: Servo motor or electronic lock actuator.

## ⚙️ Technologies

- Embedded C/C++.
- Digital input/output.
- Matrix keypad interfacing.
- LCD interfacing.
- Password validation logic.
- Arduino IDE or compatible development environment.

## 🔌 Hardware Connections

The following pin assignments are based on the current prototype configuration.

### LCD (16×2)

| LCD Signal | Microcontroller Pin |
|---|---|
| RS | 12 |
| Enable | 11 |
| D4 | 10 |
| D5 | 9 |
| D6 | 8 |
| D7 | 7 |

### 4×4 Keypad

| Keypad Pins | Microcontroller Pins |
|---|---|
| Rows | 13, 6, 5, 4 |
| Columns | 3, 2, 1, 0 |

**Note:** Verify the keypad's row and column order against your specific hardware. Pins 0 and 1 are used by the hardware serial interface on many Arduino boards, so alternative pins may be preferable if serial communication is needed.

## 🚀 How It Works

1. The system initializes the LCD and keypad.
2. The LCD prompts the user to enter a password.
3. The microcontroller reads the keypad input.
4. The entered password is checked against the configured password.
5. The LCD displays the authentication result.
6. If an actuator is installed and configured, successful authentication can trigger the unlocking mechanism.

## 📁 Project Structure

```text
Embedded-Keypad-Lock/
├── src/
│   └── main.cpp
├── README.md
└── diagram.json
```

*The directory structure is illustrative and should be adjusted to match the actual repository.*

## 🔧 Getting Started

1. Clone the repository.
2. Open the source code in the Arduino IDE or your configured embedded development environment.
3. Connect the keypad and LCD according to the wiring configuration.
4. Select the correct board and port.
5. Compile and upload the firmware.
6. Enter the configured password using the keypad and observe the LCD feedback.

If you're using Wokwi, import the project files into a compatible simulation project and verify the wiring before running it.

## 🎯 Learning Objectives

- Understand matrix keypad scanning and input handling.
- Interface a character LCD with a microcontroller.
- Implement password validation logic.
- Work with digital signals and GPIO pins.
- Develop a foundation for embedded access control systems.

## 🔮 Future Improvements

- Add a servo motor or electronic lock.
- Implement password changing.
- Add an incorrect-attempt limit and lockout period.
- Add a buzzer and status LEDs.
- Store credentials in non-volatile memory.
- Improve password handling and physical security.

## ⚠️ Security Note

This project is intended for educational purposes. A basic keypad password system should not be used as the sole security mechanism for protecting valuable property without additional security measures.

## 📄 License

Choose an appropriate open-source license before distributing or reusing this project.

---

**Built as a hands-on embedded systems learning project.**
