#include "Arduino.h"
#include "Codeshield.h"

/*
 * Plain Jane LED (Not the RGB led)
 * 
 * Typical Use:
 * 
 * pinMode(LED, OUTPUT);
 * digitalWrite(LED, HIGH);
 */
const int LED = 6;

/*
 * RGB LED
 * 
 * Typical Use:
 * 
 * pinMode(RGB_LED_RED, OUTPUT);
 * pinMode(RGB_LED_GREEN, OUTPUT);
 * pinMode(RGB_LED_BLUE, OUTPUT);
 * 
 * digitalWrite(RGB_LED_RED, HIGH);
 * digitalWrite(RGB_LED_GREEN, HIGH);
 * digitalWrite(RGB_LED_BLUE, HIGH);
 */
const int RGB_LED_RED = 11;
const int RGB_LED_GREEN = 10;
const int RGB_LED_BLUE = 9;

/*
 * Switch
 * 
 * Typical Use:
 * 
 * pinMode(SWITCH, INPUT);
 * buttonState = digitalWrite(SWITCH);
 * 
 * For more information on how to use switches,
 * http://arduino.cc/en/Tutorial/Switch
 */
const int SWITCH = 13;

/*
 * Push Button
 * 
 * Typical Use:
 * 
 * pinMode(BUTTON, INPUT);
 * buttonState = digitalWrite(BUTTON);
 * 
 * For more information on how to use buttons,
 * http://arduino.cc/en/Tutorial/Button
 */
const int BUTTON = 12;

/*
 * Servo
 * 
 * Typical Use:
 * 
 * #include <SoftwareServo.h>
 * 
 * SoftwareServo myservo;
 * myservo.attach(SERVO);
 * myservo.write(0);
 * 
 * For more information on how to use servos,
 * http://arduino.cc/en/Reference/Servo
 */
const int SERVO = 5;

/*
 * Piezo Speaker
 * 
 * Typical Use:
 * 
 * tone(PIEZO, 440, 1000L);
 * 
 * For more information on how to use piezo speakers,
 * http://arduino.cc/en/Reference/Tone
 */
const int PIEZO = 3;

/*
 * Relay
 * 
 * Typical Use:
 * 
 * pinMode(RELAY, OUTPUT);
 * digitalWrite(RELAY, OUTPUT);
 * 
 */
const int RELAY = 2;

/*
 * Rotary Encoder
 * 
 * Typical Use:
 * 
 * pinMode(ROTENC_A, INPUT);
 * pinMode(ROTENC_B, INPUT);
 * 
 * ...
 * 
 * For more information on how to use a rotary encoder,
 * http://arduino.cc/playground/Main/RotaryEncoders
 */
const int ROTENC_A = A0;
const int ROTENC_B = A1;

/*
 * Potentiometer
 * 
 * Typical Use:
 * 
 * pinMode(POT, INPUT);
 *
 * val = analogRead(POT);
 * 
 * For more information on how to use a potentiometer,
 * http://www.arduino.cc/en/Tutorial/Potentiometer
 */
const int POT = A2;

/*
 * Hall Sensor
 * 
 * Typical Use:
 * 
 * pinMode(HALL, INPUT);
 *
 * raw = analogRead(HALL);
 * 
 * For more information on how to use a hall effect sensor,
 * http://arduino.cc/playground/Code/HallEffect
 */
const int HALL = A3;

/*
 * Thermistor
 * 
 * Typical Use:
 * 
 * pinMode(THERM, INPUT);
 *
 * val = analogRead(THERM) - 238;
 * 
 * For more information on how to use a thermistor,
 * http://arduino.cc/playground/ComponentLib/Thermistor
 */
const int THERM = A4;

/*
 * Photocell
 * 
 * Typical Use:
 * 
 * pinMode(PHOTO, INPUT);
 *
 * val = analogRead(PHOTO);
 * 
 * For more information on how to use photocell,
 * http://learn.adafruit.com/photocells
 */
const int PHOTO = A5;