int buttonPin = A4;

// Create an integer variable naming the pin we'll use for the buzzer.
// On the ProtoSnap Plus, it's on A3.
int buzzer = A3;

// Map musical notes to their frequencies by creating variables for them.
// You can find the frequencies for higher and lower notes at: https://www.arduino.cc/en/Tutorial/toneMelody
int NOTE_C5 = 523;
int NOTE_CS5 = 554;
int NOTE_D5 = 587;
int NOTE_DS5 = 622;
int NOTE_E5 = 659;
int NOTE_F5 = 698;
int NOTE_FS5 = 740;
int NOTE_G5 = 784;
int NOTE_GS5 = 831;
int NOTE_A5 = 880;
int NOTE_AS5 = 932;
int NOTE_B5 = 988;
int NOTE_C6 = 1047;

// We'll also create a variable for how long to play each note in milliseconds.
// If you make this smaller, the notes will play faster.
int tempo = 500;

void setup() {
  // Initialize the switch pins as an input with pullups.
  // Pullups keep the inputs from "floating" when a switch or button is open / unpressed.
  pinMode(buttonPin, INPUT_PULLUP);

  // Set the buzzer pin to be an output:
  pinMode(buzzer, OUTPUT);

}

void loop() {

  // Check to see if switchState is LOW (switch is on)
  if (digitalRead(buttonPin) == LOW) {
      // This code will play a simple scale from C5 to C6.
    
      // The tone command takes two parameters: a pin number and a frequency.
      // The tone will play until we stop it with the noTone command.
      // Each of the below blocks plays one note; the note plays during the delay command.
      tone(buzzer,NOTE_C5);
      delay(tempo);
    
      tone(buzzer,NOTE_D5);
      delay(tempo);
    
      tone(buzzer,NOTE_E5);
      delay(tempo);
    
      tone(buzzer,NOTE_F5);
      delay(tempo);
    
      tone(buzzer,NOTE_G5);
      delay(tempo);
    
      tone(buzzer,NOTE_A5);
      delay(tempo);
    
      tone(buzzer,NOTE_B5);
      delay(tempo);
    
      tone(buzzer,NOTE_C6);
      delay(tempo);

  } else {
    noTone(buzzer);
  }
}
