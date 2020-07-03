int ledPin1=11;
int ledPin2=6;
int ledPin3=5;
int ledPin4=3;

void setup(){
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
}
void loop()
{
for (int i=0; i<=255; i+=1)
{
analogWrite(ledPin1, i);
delay(15);
}
for (int i=255; i>=0; i-=1)
{
analogWrite(ledPin1, i);
delay(15);
}
  delay(1000);
  for (int i=0; i<=255; i+=1)
{
analogWrite(ledPin2, i);
delay(15);
}
for (int i=255; i>=0; i-=1)
{
analogWrite(ledPin2, i);
delay(15);
}
  delay(1000);
    for (int i=0; i<=255; i+=1)
{
analogWrite(ledPin3, i);
delay(15);
}
for (int i=255; i>=0; i-=1)
{
analogWrite(ledPin3, i);
delay(15);
}
  delay(1000);
    for (int i=0; i<=255; i+=1)
{
analogWrite(ledPin4, i);
delay(15);
}
for (int i=255; i>=0; i-=1)
{
analogWrite(ledPin4, i);
delay(15);
}
  delay(1000);
}