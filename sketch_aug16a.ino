const int SOUND_SENSOR_PIN1 = A0;
const int SOUND_SENSOR_PIN2 = A1;
const int SOUND_SENSOR_PIN3 = A2;
const int SOUND_SENSOR_PIN4 = A3;


int sensorValue1;
int sensorValue2;
int sensorValue3;
int sensorValue4;

void setup() {
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);

}
void loop() {
  sensorValue1 = analogRead(SOUND_SENSOR_PIN1);
  sensorValue2 = analogRead(SOUND_SENSOR_PIN2);
  sensorValue3 = analogRead(SOUND_SENSOR_PIN3);
  sensorValue4 = analogRead(SOUND_SENSOR_PIN4);
  delay(20);
  {
  Serial.println(sensorValue1);
  Serial.println(sensorValue2);
  Serial.println(sensorValue3);
  Serial.println(sensorValue4);
  Serial.println("===========================");
  delay(20);
  }
  if(sensorValue1>=650) {
   digitalWrite(5,HIGH);
   delay(1000);
   digitalWrite(5,LOW);
   delay(10);
  }
  {
  if(sensorValue2>=650) {
   digitalWrite(6,HIGH);
   delay(1000);
   digitalWrite(6,LOW);
   delay(10);
  }if(sensorValue3>=650) {
   digitalWrite(7,HIGH);
   delay(1000);
   digitalWrite(7,LOW);
   delay(10);
  }if(sensorValue4>=650) {
   digitalWrite(8,HIGH);
   delay(1000);
   digitalWrite(8,LOW);
   delay(10);
  }

  }

}

