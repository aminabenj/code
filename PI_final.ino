#include <Wire.h>
#include <BH1750.h>

//Un éclairage principal pour un séjour, une salle à manger, un couloir requiert environ 100 lm/m².    200 lumen/mètre² = 200 lux

// avec cette position de led, elle est capable de me donner 200 lux : inclié à coté du capteur 

// dans chaque 1m² la led fourmi 200 lux alors pour une salle de 20m² il me faut 4000lux cad 20led

BH1750 lightMeter;
const int ledPin = 3;
const int presencePin = 9; 
const double setpoint = 150; // Consigne de luminosité de 150 lux
double input, output;
const double kp = 1.2; //kp=1.2
const double ki = 1.5;   // ki=1.5 très grand donne des oscillations de lumière autour de la consigne  désiré
double integral = 0.0;
//unsigned long lastTime;

const int minPWM = 0; // Minimum PWM pour commencer à allumer la LED
const int maxPWM = 255; // Maximum PWM pour la pleine luminosité


void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(presencePin, INPUT);
  Wire.begin();
  lightMeter.begin();
  //lastTime = millis();
  
}

void loop() {
  //unsigned long now = millis();
  //unsigned long timeChange = (now - lastTime);
  bool presence = digitalRead(presencePin);

  if (presence==0) {
    //Serial.print(" | LED: ");
    if (lightMeter.measurementReady()) {
      input = lightMeter.readLightLevel();

      double error = setpoint - input;
      //integral += (error * (timeChange / 1000.0));
      integral += (error * (100.0 / 1000.0));
      integral = constrain(integral, minPWM - maxPWM, maxPWM - minPWM); // Anti-windup

      output = (kp * error) + (ki * integral);   
      output = constrain(output, minPWM, maxPWM); 
       analogWrite(ledPin, output);  // a revoir 

      analogWrite(ledPin, (int)output);

      Serial.print("Lux: "); Serial.print(input);
      Serial.print(" | LED PWM: "); Serial.println((int)output);
    }
  } else {
    analogWrite(ledPin, 0);
    Serial.println("No presence detected, LED off.");
  }

  //lastTime = now;
  //delay(1000);
}

