
void sun1() {

  for (int C=3; C<5; C++){
    for (int R=3;R<5; R++){
  
  
  
onLED(R,C);

    }
  }
 
 }


void sun2(){
  
  
  //smarter code
  for (int C1=2; C1<6;C1++)
  {
    onLED(2,C1);
    onLED(5,C1);
  }
  for (int C2=2;C2<6;C2=C2+3)
  {
    onLED(3,C2);
    onLED(4,C2);
  }

 }


void sun3(){
  
  //smarter code, hopefully working 
 for (int C1=1;C1<7;C1++){
   onLED(1,C1);
   onLED(6,C1);
 }

 for (int C2=1;C2<7;C2=C2+5)
 {
   for (int R2=2; R2<6; R2++)
   {
   
   
   
   
   onLED(R2,C2);
   }
 }

   

//part 2
sun1();


  
}

void sun4(){

  for(int C=0; C<8;C++)
  {
    onLED(0,C);
    onLED(7,C);
  }
  
  for (int R=0; R<8;R++)
  {
    onLED(R,0);
    onLED(R,7);
  }
  



//part 2

sun2();
 
}




void sun5() {
sun1();
 
 
 }


void sun6(){
sun2();

 }


void sun7(){
 
sun3();

  
}

void sun8(){

 sun4();
 
}



void sunANI (){
 
  
   for (int x=0;x<30;x++) {  //duration of each frame
  sun1();
  delay(1); //all the lights will be on at same time in each frame
  }
  
  for (int x=0;x<30;x++) {
  sun2();
  delay(1);
    } 
  
   for (int x=0;x<30;x++) {
  sun3();
  delay(1);
    } 
  
   for (int x=0;x<10;x++) {
  sun4();
  delay(1);
    } 
    
    for (int x=0;x<30;x++) {
  sun5();
  delay(1);
    }  
    
    for (int x=0;x<30;x++) {
  sun6();
  delay(1);
    } 
    
     for (int x=0;x<30;x++) {
  sun7();
  delay(1);
    } 
    
     for (int x=0;x<10;x++) {
  sun8();
  delay(1);
    } 
    
}

