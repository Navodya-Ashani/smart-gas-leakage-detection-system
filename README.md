# Smart Gas Leakage Detection and Automatic Ventilation System using Arduino

## Project Overview

This project presents a **Smart Gas Leakage Detection and Automatic Ventilation System using Arduino**, developed and tested using the **Wokwi simulation platform**. The main purpose of this system is to improve safety by detecting gas leakage at an early stage and providing an immediate warning to the user. Gas leakage is a serious issue in homes, laboratories, restaurants, and industrial environments because it can lead to fire accidents, explosions, and health hazards. Therefore, having an automatic detection and alert system is very important.

In this project, a **potentiometer** is used in Wokwi to simulate the gas sensor output. The Arduino continuously reads the analog gas level value from the potentiometer and compares it with a predefined threshold. If the gas value remains below the threshold, the system operates in **safe mode**. In this condition, the **green LED** turns ON, the **red LED** remains OFF, the **buzzer stays silent**, the **fan indicator remains OFF**, and the **LCD display shows a safe system status**.

When the gas value exceeds the threshold, the system enters **gas leak detection mode**. At this point, the **red LED turns ON** to indicate danger, the **buzzer activates as an alarm**, and a **yellow LED is used to simulate the operation of an exhaust fan**. At the same time, the **16×2 I2C LCD** displays a warning message such as **“WARNING! GAS LEAK”** to inform the user about the hazardous condition. Once the gas level falls below the threshold again, the system automatically returns to normal safe mode.

This project demonstrates the practical use of **Arduino programming, analog sensor monitoring, threshold-based decision making, alarm systems, visual indication, and LCD interfacing**. Although the current design is simulated in Wokwi, it can be easily upgraded into a real hardware system by replacing the potentiometer with an actual **MQ-2 gas sensor** and the yellow LED with a **relay-controlled exhaust fan**. Additional future improvements may include **IoT monitoring using Blynk, mobile alerts, and real-time gas concentration display**, making the system more suitable for modern smart safety applications.

---

## Features

* Gas leakage detection using analog sensor input simulation
* Safe and danger indication using LEDs
* Audible warning using buzzer
* Fan operation indication using yellow LED
* Real-time system status display using 16×2 I2C LCD
* Automatic switching between safe mode and warning mode
* Suitable for smart home and industrial safety applications

---

## Components Used

* Arduino Uno
* Potentiometer (used to simulate gas sensor values in Wokwi)
* Green LED
* Red LED
* Yellow LED
* Buzzer
* 16×2 I2C LCD Display
* Jumper wires

---

## Pin Connections

| Component            | Arduino Pin |
| -------------------- | ----------- |
| Potentiometer Output | A0          |
| Green LED            | D2          |
| Red LED              | D3          |
| Buzzer               | D4          |
| Fan Indicator LED    | D5          |
| LCD SDA              | A4          |
| LCD SCL              | A5          |

---

## System Operation

### Safe Condition

* Green LED turns ON
* Red LED remains OFF
* Buzzer remains OFF
* Fan indicator remains OFF
* LCD displays **SAFE / System Normal**

### Gas Leak Detected

* Red LED turns ON
* Green LED turns OFF
* Buzzer alarm activates
* Fan indicator turns ON
* LCD displays **WARNING! GAS LEAK**

### Return to Safe Condition

* Green LED turns ON
* Red LED turns OFF
* Buzzer turns OFF
* Fan indicator turns OFF
* LCD displays **System Normal**

---

## Simulation

This project was developed and tested using **Wokwi**.

**Wokwi Project Link:**
Paste your Wokwi project link here

---

## Applications

* Home kitchen gas leak monitoring
* Industrial gas safety systems
* Laboratory gas leakage detection
* Smart home safety automation
* Early warning and ventilation control systems

---

## Future Improvements

* Replace potentiometer with a real **MQ-2 gas sensor**
* Replace yellow LED with a **relay-controlled exhaust fan**
* Add **Blynk IoT monitoring**
* Send **mobile notifications** during gas leakage
* Display **real-time gas concentration values**
* Add **data logging** and cloud monitoring

---

## Author

**Navodya Ashani**
