// Keep in mind, only the lEDs with "~" can "Fade" in and out. The Yellow LED (A5) can
// only be either on or off, an not anywhere in between like the other LEDs
int LED = 6;
int switchPin = A9;

void setup() {
  // put your setup code here, to run once:

  pinMode(LED, OUTPUT);
  
  // Initialize the switch pins as an input with pullups.
  // Pullups keep the inputs from "floating" when a switch or button is open / unpressed.
  pinMode(switchPin, INPUT_PULLUP);

}

void loop() {
  
  // Create a new integer variable called brightness:
  int brightness;
 
  // Create variables to store the button and switch input values:
  int switchState;

  // Read and save the states of the switch:
  switchState = digitalRead(switchPin);

  // Check to see if switchState is LOW (switch is on)
  if (switchState == LOW) {
    
    // Start brightness at 0, check to see if it's less than
    // or equal to 255, run the commands after it, then add one to brightness and start over:
    for (brightness = 0; brightness <= 255; brightness = brightness + 1) {
      // Within the loop, we'll use brightnes variable to control the brigthness of the LED:
    
      analogWrite(LED, brightness);
  
      // The delay command controls the speed - if you make the delay larger,
      // it will slow down the loop. Smaller, and it will run faster:
      delay(5);
    }
    
    // What if we want the LED to start at full brightness and fade to black?
    // We can easily set up the for loop to run in reverse:
    for (brightness = 255; brightness >= 0; brightness = brightness - 1) {
      analogWrite(LED, brightness);
      delay(5);
    }
  }  
}
