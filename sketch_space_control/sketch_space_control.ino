int switchState = 0;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);

}

void loop() {
  switchState = digitalRead(2);
  
  if (switchState == LOW) {
    digitalWrite(3, HIGH); // green led
    digitalWrite(4, LOW); // red led
    digitalWrite(5, LOW); // red led
  } else {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);

    for (int i = 0; i < 10; i++) {
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      delay(250);

      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      delay(250);
    }
  }
}
