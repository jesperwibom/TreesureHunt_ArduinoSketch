//Test serial sketch

char animation = '0';
boolean animationActive = false;
int delayPin = 1;                         // delay before it turns the LED off
int row[] = {10,11,12,13,A5,A4,A3,A0};   // These are the  Cathodes - Send LOW to turn on LED
int col[] = {2,3,4,5,6,7,8,9};          // These are the Anodes - Send HIGH to turn on LED

void setup() {
 setPins();
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

//play the animation twice

rainANI();
delay(100) ;
rainANI();
}

void animation2(){
 
 //play the animation twice
  windANI();
  delay(100);
  windANI();
}

void animation3(){
 //play the animation twice
  sunANI();
  delay(100);
  sunANI();
}


