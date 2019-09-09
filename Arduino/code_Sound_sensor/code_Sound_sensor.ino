int motor = 10; //The negative pole of the motor is connected to the drive plate in4, and the in4 is connected to the port 10 of Arduino UNO
int voice = 11;

void setup()
{
  pinMode(motor, OUTPUT);
  pinMode(voice, INPUT);
}

void loop()
{
  if (!digitalRead(voice)) //Determines whether the received data values conform to the range
  {
    digitalWrite(motor, HIGH);
   delay(10); 
  }
  else
  {
    digitalWrite(motor, LOW); 
  }
}


