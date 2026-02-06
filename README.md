# 🚗 ESP32 Wi‑Fi RC Car (ESP‑IDF)

This project builds a **Wi‑Fi controlled RC car** using an **ESP32**, **L298N motor driver**, and **DC motors**.  
You control the car from your **phone browser** — no app required.

---

## 🧰 Requirements

### Hardware
- ESP32 development board  
- L298N motor driver  
- 2 × DC motors  
- Battery (7–12V for motors)  
- Jumper wires  
- Raspberry Pi (Raspberry Pi OS)  
- USB **data** cable  

### Software
- Raspberry Pi OS (with desktop)
- ESP‑IDF installed

---

## 🔌 Wiring

### ESP32 → L298N

| ESP32 GPIO | L298N |
|-----------|------|
| GPIO 26 | IN1 |
| GPIO 27 | IN2 |
| GPIO 14 | IN3 |
| GPIO 12 | IN4 |
| GND | GND |

⚠️ Notes:
- Power motors using a **battery**, NOT ESP32 5V  
- **Common GND is mandatory**

---

## 📁 Project Structure

```
rc_car/
├── main/
│ └── main.c
├── CMakeLists.txt
└── sdkconfig
```


---

## 📝 Step 1: Edit the Code

Open `main.c` using Raspberry Pi OS built‑in text editor:

```bash
xdg-open ~/rc_car/main/main.c
```

Paste the Wi‑Fi RC car code and save the file.


