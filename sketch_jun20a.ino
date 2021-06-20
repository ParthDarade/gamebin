bool switchState;
void setup() {
  Serial.begin(9600);
  pinMode(7,INPUT);
}

void loop() {
 if(digitalRead(7)==LOW){
  if(switchState=true){
  Serial.print("Y");
  }
  switchState=false;
  }
  if(digitalRead(7)== HIGH){
    switchState=true;
  }
}
