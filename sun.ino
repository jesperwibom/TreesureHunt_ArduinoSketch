void sun1() {

 onLED(3,3);
 onLED(4,3);
 onLED (3,4);
 onLED (4,4);
 
 
 }


void sun2(){
//kärna
 onLED(3,3);
 onLED(4,3);
 onLED (3,4);
 onLED (4,4);
  //strål
 onLED(1,1);
 onLED(1,6);
 onLED(2,2);
 onLED(2,5);
 onLED(5,2);
 onLED(5,5);
 onLED(6,1);
 onLED(6,6);


 }


void sun3(){
 
 //kärna blir större
 onLED(3,3);
 onLED(4,3);
 onLED (3,4);
 onLED (4,4);
 onLED(2,3);
 onLED(2,4);
 onLED(3,2);
 onLED(3,5);
 onLED(4,2);
 onLED(4,5);
 onLED(5,3);
 onLED(5,4);
 //strål blir större
 onLED(1,1);
 onLED(1,6);
 onLED(2,2);
 onLED(2,5);
 onLED(5,2);
 onLED(5,5);
 onLED(6,1);
 onLED(6,6);//frame 2

 onLED(0,0);
 onLED(0,7);
 onLED(7,0);
 onLED(7,7);
  

  
}

void sun4(){

  //kärna blir större
  onLED(3,3);
  onLED(4,3);
  onLED (3,4);
  onLED (4,4);
  onLED(2,3);
  onLED(2,4);
  onLED(3,2);
  onLED(3,5);
  onLED(4,2);
  onLED(4,5);
  onLED(5,3);
  onLED(5,4);
  //strål blir större
  onLED(1,1);
  onLED(1,6);
  onLED(2,2);
  onLED(2,5);
  onLED(5,2);
  onLED(5,5);
  onLED(6,1);
  onLED(6,6);//frame 2
 
  onLED(0,0);
  onLED(0,7);
  onLED(7,0);
  onLED(7,7);
  onLED(1,3);
  onLED(1,4);
  onLED(3,1);
  onLED(3,6);
  onLED(4,1);
  onLED(4,6);
  onLED(6,3);
  onLED(6,4);
 


  
}

void sunANI (){
 
  
   for (int x=0;x<10;x++) {  //duration of each frame
    sun1();
    delay(1); //all the lights will be on at same time in each frame
    }
  
   for (int x=0;x<10;x++) {
    sun2();
    delay(1);
    } 
  
   for (int x=0;x<10;x++) {
    sun3();
    delay(1);
    } 
  
   for (int x=0;x<10;x++) {
    sun4();
    delay(1);
    } 
  
}
