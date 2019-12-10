// Create variables for the pins we'll be using:

int lightSensor = A2;

// A simple Light sensor program that turns on increasingly more lights
// as the "room gets darker" or in other words, as the sensor recieves
// less light

int blueLED = 14;

int LEDb = A8;
int LEDg = A7;
int LEDr = 6;

// Threshold for light levels (adjust with the help of serial monitor if LEDs
// are not responding as desired
int threshold1 = 5;
int threshold2 = 15;
int threshold3 = 65;


void setup() {
  // put your setup code here, to run once:
 
  pinMode(lightSensor, INPUT);
  pinMode(blueLED,OUTPUT);

  pinMode(LEDb, OUTPUT);
  pinMode(LEDg, OUTPUT);
  pinMode(LEDr, OUTPUT);

  // Initialize the serial monitor
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int lightLevel;
  
  // Read the sensor value (will be 0 to 255):
  lightLevel = analogRead(lightSensor);
  
  // Print out the sensor reading:
  Serial.print("light level: ");
  Serial.print(lightLevel);

  // If the light level is below the threshold, turn on corresponding LEDs:
  if (lightLevel < threshold3) {
    Serial.println("Blue ON");
    digitalWrite(blueLED,HIGH);
    digitalWrite(LEDb,HIGH);
  } 
  
  if (lightLevel <= threshold2) {
    Serial.println("Green ON");
    digitalWrite(blueLED,HIGH);
    digitalWrite(LEDb,HIGH);
    digitalWrite(LEDg,HIGH);
  } 
  
  if (lightLevel <= threshold1) {
    Serial.println("Red ON");
    digitalWrite(blueLED,HIGH);
    digitalWrite(LEDb,HIGH);
    digitalWrite(LEDg,HIGH);
    digitalWrite(LEDr,HIGH);
  } else {
    Serial.println("off");
  }

 // Reset the LEDs
 delay(200);
 digitalWrite(blueLED,LOW);
 digitalWrite(LEDb,LOW);
 digitalWrite(LEDg,LOW);
 digitalWrite(LEDr,LOW);
}
