void sun1() {

onLED(3,3);
onLED (3,4);
onLED(4,3);
onLED (4,4);
 
 
 }


void sun2(){
onLED(2,2);
onLED(2,3);
onLED(2,4);
onLED(2,5);
onLED(3,2);
onLED(3,3);
onLED(3,4);
onLED(3,5);
onLED(4,2);
onLED(4,3);
onLED(4,4);
onLED(4,5);
onLED(5,2);
onLED(5,3);
onLED(5,4);
onLED(5,5);

 }


void sun3(){
 
onLED(1,1);
onLED(1,2);
onLED(1,3);
onLED(1,4);
onLED(1,5);
onLED(1,6);
onLED(2,1);
onLED(2,2);
onLED(2,3);
onLED(2,4);
onLED(2,5);
onLED(2,6);
onLED(3,1);
onLED(3,2);
onLED(3,3);
onLED(3,4);
onLED(3,5);
onLED(3,6);
onLED(4,1);
onLED(4,2);
onLED(4,3);
onLED(4,4);
onLED(4,5);
onLED(4,6);
onLED(5,1);
onLED(5,2);
onLED(5,3);
onLED(5,4);
onLED(5,5);
onLED(5,6);
onLED(6,1);
onLED(6,2);
onLED(6,3);
onLED(6,4);
onLED(6,5);
onLED(6,6);




  
}

void sun4(){

  for (int r=0;r<8;r++)
  {
    for (int c=0; c<8;c++)
    {
  onLED(r,c);
    }

  }
}

void sunANI (){
 
  
   for (int x=0;x<10;x++) {  //duration of each frame
  sun1();
  delay(1); //all the lights will be on at same time in each frame
  }
  
  for (int x=0;x<5;x++) {
  sun2();
  delay(1);
    } 
  
   for (int x=0;x<5;x++) {
  sun3();
  delay(1);
    } 
  
   for (int x=0;x<5;x++) {
  sun4();
  delay(1);
    } 
  
}

