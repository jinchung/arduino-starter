int ledRed1 = 5;
int ledRed2 = 4;
int ledGreen = 3;
int button = 2;
int switchState = LOW;

void setup() {
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed1, OUTPUT);
  pinMode(ledRed2, OUTPUT);  
  pinMode(button, INPUT);
}

void loop() {
  switchState = digitalRead(button);
  if (switchState == HIGH) {
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed2, LOW);
    digitalWrite(ledRed1, HIGH);
    delay(20);
    digitalWrite(ledRed1, LOW);
    digitalWrite(ledRed2, HIGH);
    delay(20);
  } else {
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed1, LOW);
    digitalWrite(ledRed2, LOW);
    
  }
}
