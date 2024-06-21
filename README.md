# ESP8266 LED Bar Graph Display Project

#### Project Overview
This project showcases how to create an LED bar graph display using an ESP8266 microcontroller and LEDs. The intensity of the LED bar graph corresponds to an analog sensor input, providing a visual representation of sensor readings.

#### Components Needed
- **ESP8266 Microcontroller**
- **10 LEDs**
- **Resistors (if necessary for LEDs)**
- **Jumper Wires**
- **Optional: Breadboard**

#### Circuit Setup
1. **Connecting LEDs to ESP8266:**
   - Connect each LED's cathode (short leg) to individual GPIO pins on the ESP8266 (e.g., D1 to D10).
   - Connect each LED's anode (long leg) to a current-limiting resistor (if required) and then to ground.

#### Instructions
1. **Setup:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Testing:**
   - After uploading the code, observe the LEDs.
   - The number of LEDs lit up corresponds to the analog sensor value read (0-1023 range).

#### Applications
- **Visual Feedback:** Display sensor data visually using the LED bar graph.
- **Monitoring Systems:** Use in environmental monitoring for quick visual cues.
- **Education:** Demonstrate analog input mapping and visual representation concepts.

#### Notes
- **Analog Sensor:** Connect an analog sensor to A0 on the ESP8266 for input.
- **LED Control:** Adjust the code to match the number of LEDs and their corresponding GPIO pins.
- **Mapping Function:** Customize the mapping function (`map()`) for specific sensor ranges.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 LED Bar Graph Display](https://projectslearner.com/learn/esp8266-led-bar-graph-display)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted for you with ❤️ from ProjectsLearner