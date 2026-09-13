# 🚗 4WD Line Following Robot (Arduino)

A 4-wheel drive autonomous line following robot built using Arduino and L298N motor driver.  
The robot uses proportional control for smooth tracking of a high-contrast path.

---

## 📖 Project Overview

This project implements a closed-loop line tracking system using two IR sensors and PWM-based motor control.

Unlike basic ON-OFF control, this robot uses proportional correction to reduce oscillation and improve stability.

---

## 🧠 Concepts Implemented

- Closed Loop Control System
- Proportional (P) Control
- Differential Drive Steering
- PWM Speed Control
- Embedded Systems Programming (Arduino C++)

---

## 🛠 Hardware Components

- Arduino Uno / Nano
- 4WD Chassis with DC Gear Motors
- L298N Motor Driver
- 2x IR Line Sensors
- 11V Li-ion Battery Pack

---

## 🔌 Pin Configuration

| Component | Arduino Pin |
|------------|------------|
| Left IR Sensor | D2 |
| Right IR Sensor | D3 |
| ENA | D5 |
| ENB | D6 |
| IN1 | D8 |
| IN2 | D9 |
| IN3 | D10 |
| IN4 | D11 |

---

## ⚙️ Working Principle

1. IR sensors detect contrast between line and background.
2. Error is calculated using sensor difference.
3. Proportional control adjusts left and right motor speeds.
4. Robot continuously corrects its path in real time.

---

## 📊 Control Logic

Error Calculation:

error = rightSensor - leftSensor

Correction:

correction = Kp × error

Motor Speeds:

leftSpeed  = baseSpeed - correction  
rightSpeed = baseSpeed + correction  

---

## 🚀 Features

✔ Smooth line tracking  
✔ Reduced zig-zag motion  
✔ PWM motor speed control  
✔ Structured and scalable code  

---

## 🔜 Planned Improvements

- Add ultrasonic obstacle avoidance
- Upgrade to full PID control
- Implement non-blocking control using millis()
- Add encoder feedback

---

## 👨‍💻 Author

Sudeep T Gotur  
Electronics & Communication Engineering  
Interested in Robotics, Embedded Systems, VLSI and PCB design.
