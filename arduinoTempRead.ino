#define buzz 2 //Digitalpin 2 attached to buzzer
#define tempPin A1 //Analogpin A1 attached to LM35 temp sensor
void setup()
{
  Serial.begin(9600);
  pinMode(buzz,OUTPUT);
}

void loop()
{
  int reading = analogRead(tempPin);
  float voltage = ( reading/1024.0)*5000;
  float temp = voltage/10; // temperature in deg celcius 
  Serial.println(temp);
  buzzBeep(); // creates a small beep sound after printing temparature
  delay(5000);
}

void buzzBeep(){
  digitalWrite(buzz,1);
  delay(100);
  digitalWrite(buzz,0);
}
