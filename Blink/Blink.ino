void setup() {
  // Where the output will start on board:
  pinMode(7,OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // This code controls the amount of voltage looping through the pin.
  // "HIGH" means 5v /on
  // "LOW" means 0v  /off
  // "delay" pauses it with parameter in ms (here one second):

  // Green:
  digitalWrite(7, HIGH);
  delay(5000);
  digitalWrite(7, LOW);

  // Yellow:
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);

  // Red: 
  digitalWrite(11, HIGH);
  delay(5000);
  digitalWrite(11, LOW);
}
