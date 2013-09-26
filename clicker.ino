int potPin = 2;   // hook up a potentiometer to analog 2
int ledPin = 9;   // hook up an LED to digital 9 (PWM)
int delaySetting = 0;
int swiftness = 50000; // tweak this number for speed

void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  delaySetting = swiftness/analogRead(potPin); 

if (analogRead(potPin) > 100) { // sets a safe 'off' zone
    analogWrite(ledPin, 20);
    Mouse.click();
    delay(delaySetting);
    analogWrite(ledPin, 0);
    delay(delaySetting); 
  }
}
