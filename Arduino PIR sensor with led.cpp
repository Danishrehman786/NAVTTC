void setup()
{
  pinMode(7, INPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int a =digitalRead(7);
  Serial.println(a);
  delay(1000);
  if(a == 1)
  {
    
  digitalWrite(2, HIGH);
  Serial.println("LED IS ON");
  }
  else
  {
  digitalWrite(2, LOW);
  Serial.println("LED IS OFF");
}
}
