
int trigpin = 9;
int echopin = 10;
long duration;
int distance;
int buzzer = 11;

void setup() {
Serial.begin(9600);
pinMode(trigpin, OUTPUT);
pinMode(echopin, INPUT);
}


void loop() {

digitalWrite(trigpin, LOW);  //making sure the pin is at low state at first
delayMicroseconds(2);

digitalWrite(trigpin, HIGH);//realising ultrasonic wave
delayMicroseconds(10);
digitalWrite(trigpin, LOW);

duration = pulseIn(echopin, HIGH);
distance = duration*0.034/2;
Serial.println(distance);
if(distance>50){
 
  noTone(buzzer);}


if(distance<50 && distance>30){
 
  tone(buzzer, 700);}

if(distance<30 && distance>20){
  tone(buzzer, 800);}
   
if(distance<20 && distance>10){
  tone(buzzer, 900);}

if(distance<20){
  tone(buzzer, 1000);}
  }
