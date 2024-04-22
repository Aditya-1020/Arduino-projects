const int LED = 9;
const int LDR = 0;
int val = 0;

void setup()  {  
  Serial.begin(9600);  
  pinMode(LED, OUTPUT);  
  //pinMode(LDR, INPUT);  
  
}

void loop() {
  Serial.println(analogRead(LDR));  

  if (analogRead(LDR) > 300){
    
    Serial.println("LIGHT ON");
    digitalWrite(LED, HIGH);

  } else {
    
    Serial.println("LIGHT OFF");
    digitalWrite(LED, LOW);
  
  }
  delay(100);
}