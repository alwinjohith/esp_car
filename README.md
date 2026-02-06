# 🚗 ESP32 Wi‑Fi Controlled RC Car

This project builds a **Wi‑Fi controlled RC car** using an **ESP32**, **L298N motor driver**, and **DC BO motors**.  
You can control the car from your **mobile browser** without installing any app.

---

## 📦 Components Required

### Hardware
- ESP32 Development Board  
- L298N Motor Driver  
- 2 × DC BO Motors  
- RC Car Chassis  
- External Battery (6V–12V)  
- Jumper Wires  
- USB Data Cable  

### Software
- Raspberry Pi OS / Linux
- ESP-IDF
- Terminal

---

## Pin Connections

### ESP32 → L298N

| ESP32 GPIO | L298N Pin | Function |
|-----------|-----------|----------|
| GPIO 26 | IN1 | Motor A Forward |
| GPIO 27 | IN2 | Motor A Backward |
| GPIO 14 | IN3 | Motor B Forward |
| GPIO 12 | IN4 | Motor B Backward |
| GND | GND | Common Ground |

⚠️ Important:
- Use **external battery** for motors
- Do NOT power motors from ESP32
- Connect all GND together

---

##  Project Structure

```
rc_car/
├── CMakeLists.txt
├── sdkconfig
└── main/
├── CMakeLists.txt
└── main.c
```


---

##  Setup ESP‑IDF

Run this in terminal every time:
```bash
. ~/esp-idf/export.sh
```

Go to project folder:
```
cd ~/rc_car
```

## Build Project 
```
idf.py fullclean
idf.py build
```
If no errors appear, continue.

## Flash to ESP32

Connect ESP32 and run:
```
idf.py -p /dev/ttyACM0 flash monitor
```
(Replace port if needed)

## Wi‑Fi Details

After flashing, ESP32 creates Wi‑Fi:

    SSID: ESP32_RC_CAR

    Password: 12345678

## Control Using Phone

    Connect phone to ESP32_RC_CAR

    Open browser

    Enter:
        http://192.168.4.1/cmd?go=f

  ##  Control Commands   

Action       	URL
Forward	        /cmd?go=f
Backward      	/cmd?go=b
Left	        /cmd?go=l
Right	        /cmd?go=r
Stop         	/cmd?go=s

Example:
       http://192.168.4.1/cmd?go=l
       
-----
 ## Motor Safety

If motors run too fast or heat up:

    Reduce battery voltage

    Add PWM speed control

    Stop immediately if smell occurs

## Troubleshooting
ESP32 not flashing

    Use data cable

    Hold BOOT button

## Motors not moving

    Check GND

    Check battery

    Check wiring

## Wi‑Fi not visible

    Restart ESP32

    Re‑flash firmware
    




