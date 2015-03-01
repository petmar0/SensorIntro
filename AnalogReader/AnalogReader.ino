const int analog0=A0;  //Pin for analog input 0.
const int analog1=A1;  //Pin for analog input 1.
const int analog2=A2;  //Pin for analog input 2.
const int analog3=A3;  //Pin for analog input 3.
const int indicator=13;  //Pin for the included LED (usually 13).

const int period=1000;  //Sample period in milliseconds.

void setup(){
  Serial.begin(9600);  //Start serial communications.
  pinMode(indicator, OUTPUT);  //Set up the indicator as an output.
}

void loop(){
  Serial.print(millis());  //Send the number of msec since power up.
  Serial.print(",");  //Send a comma separator.
  Serial.print(analogRead(analog0));  //Send the first analog value.
  Serial.print(",");  //Send a comma separator.
  Serial.print(analogRead(analog1));  //Send the second analog value.
  Serial.print(",");  //Send a comma separator.
  Serial.print(analogRead(analog0));  //Send the third analog value.
  Serial.print(",");  //Send a comma separator.
  Serial.print(analogRead(analog0));  //Send the fourth analog value.
  Serial.println();  //Add a line space.
  digitalWrite(indicator, HIGH);  //Turn on the indicator LED.
  delay(period);  //Delay by the sample period.
  digitalWrite(indicator, LOW);  //Turn off the indicator LED.
}
