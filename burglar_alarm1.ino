// C++ code
//
int alarm_on = 0;

void setup()
{
  pinMode(2, INPUT);
  Serial.begin(9600);

}

void loop()
{
  Serial.println(digitalRead(2));
  delay(10); // Delay a little bit to improve simulation performance
}