
# AI-Powered Automated Waste Segregator

## Overview
The **AI-Powered Automated Waste Segregator** is an intelligent dustbin system that automatically identifies and separates different types of waste using machine learning and sensor-based classification. The system combines computer vision with multiple sensors to determine whether waste is wet, metallic, or dry, and then sorts it into the appropriate compartment.

## Key Features
- AI-based waste classification using image recognition
- Moisture detection for wet waste
- Capacitive sensing for metal detection
- Automated lid and sorting mechanism using servo and stepper motors
- Ultrasonic sensor for object detection
- ESP32-CAM for image capture
- Arduino UNO for hardware control

## Hardware Components
- Arduino UNO
- ESP32-CAM
- Servo Motor
- Stepper Motor
- Ultrasonic Sensor
- Capacitive Sensor (Metal Detection)
- Moisture Sensor
- Li-ion Battery Power Supply
- Dustbin with mechanical sorting compartments

## System Architecture
1. Waste object detected using ultrasonic sensor.
2. ESP32-CAM captures an image of the object.
3. Image is processed by the ML classification model.
4. Sensors detect moisture and metal presence.
5. Final classification decision is made.
6. Stepper/servo motor rotates the sorting mechanism.
7. Waste is dropped into the correct compartment.

## Waste Categories
- Wet Waste
- Metal Waste
- Dry Waste

## Project Structure
```
AI-Waste-Segregator
│
├── arduino/
├── esp32_cam/
├── ml_model/
├── dataset/
├── hardware/
├── docs/
├── requirements.txt
└── README.md
```

## Machine Learning Model
The classification model is built using **Python, TensorFlow/Keras and OpenCV** for image classification.

## Installation

```bash
git clone https://github.com/yourusername/AI-Waste-Segregator.git
cd AI-Waste-Segregator
pip install -r requirements.txt
```

## Running the Model
```bash
python ml_model/inference/predict.py
```

## Future Improvements
- Cloud monitoring dashboard
- Mobile app integration
- Larger waste classification dataset
- Edge AI deployment

## License
MIT License
