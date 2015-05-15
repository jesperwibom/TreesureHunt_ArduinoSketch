//Test serial sketch

char animation = '0';
boolean animationActive = false;

int ledPin = 13;

void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
  if(!animationActive){ 
    animation = Serial.read();
  }
  
  lightControl();
  
}


void lightControl(){
  switch (animation) {    
    case '1':
      animation1(); 
      animation = '0';
      break;
    case '2':
      animation2();
      animation = '0';
      break;
    case '3':
      animation3();
      animation = '0';
      break;
    default:
      animation = '0';
      break;
  }
}

void animation1(){
  blinkLed(1);
}

void animation2(){
  blinkLed(2);
}

void animation3(){
  blinkLed(3);
}

void blinkLed(int nbr){
  for(int i = 0; i < nbr; i++){
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
  }
}
