int outputpin=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int rawvoltage=analogRead(outputpin);
float millivolts=(rawvoltage/1024.0)*5000;
float celsius=millivolts/10;
Serial.print(celsius);
Serial.print("degrees Celsius");
Serial.print((celsius*9)/5+32);
Serial.print("degrees fahrenheit");
delay(1000);
}
