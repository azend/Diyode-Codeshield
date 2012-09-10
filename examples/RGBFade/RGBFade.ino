/*
 RGBFade
 
 This example shows how to fade an LED on the Codeshield RGB led
 using the analogWrite() function.
 
 This example code is in the public domain.
 */

int redLed = 11;           // the pin that the LED is attached to
int blueLed = 9;
int greenLed = 10;
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup()  { 
  // declare the RGB led to be an output:
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  for (int x = 0; x <= 1; x++) {
    for (int y = 0; y <= 255; y++) {
      // Fade in
      if (x == 0) brightness += fadeAmount;
      //Fade out
      else brightness -= fadeAmount;
      
      analogWrite(redLed, y);
      delay(30);
    } 
  }

  for (int x = 0; x <= 1; x++) {
    for (int y = 0; y <= 255; y++) {
      // Fade in
      if (x == 0) brightness += fadeAmount;
      //Fade out
      else brightness -= fadeAmount;
      
      analogWrite(greenLed, y);
      delay(30);
    } 
  }

  for (int x = 0; x <= 1; x++) {
    for (int y = 0; y <= 255; y++) {
      // Fade in
      if (x == 0) brightness += fadeAmount;
      //Fade out
      else brightness -= fadeAmount;
      
      analogWrite(blueLed, y);
      delay(30);
    } 
  }  
}

