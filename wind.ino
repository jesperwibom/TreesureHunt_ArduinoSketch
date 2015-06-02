int R;
void wind1() {

  
  for (R=0;R<8;R++)
  {
 onLED(R,0);

 }
 
}

void wind2(){
    for (R=0;R<8;R++)
  {
 onLED(R,1);
 
}
}

void wind3(){
    for (R=0;R<8;R++)
  {

 onLED(R,2);

 //second line
 onLED(R,0);

}
}


void wind4(){
  
    for (R=0;R<8;R++)
  {
 onLED(R,3);

  
   //second line
onLED(R,1);

  }

 }


 void wind5(){
  for (R=0;R<8;R++)
  {

 onLED(R,4);

  
   //second line
 onLED(R,2);
 
 //third line
 onLED(R,0);

  }

 }

void wind6(){
    for (R=0;R<8;R++)
  {
 onLED(R,5);



//second line

onLED(R,3);

 
 
 //third line
 
 onLED(R,1);

}

}

void wind7(){
  for (R=0;R<8;R++)
  {
  
onLED(R,6);
 
 //second line
 onLED(R,4);
 //third line
 onLED(R,2);
 //fourth line
  onLED(R,0);

  }
 
}

void wind8(){
    for (R=0;R<8;R++)
  {
    
onLED(R,7);

 //second line
  onLED(R,5);

 //third line
 onLED(R,3);
 //fourth line
  onLED(R,1);

  }
 }



void windANI (){
 
  
   for (int x=0;x<10;x++) {
  wind1();
  delay(1);
  }
 
  for (int x=0;x<10;x++) {
 wind2();
  delay(1);
    } 
  
   for (int x=0;x<10;x++) {
 wind3();
  delay(1);
    } 
  
   for (int x=0;x<10;x++) {
  wind4();
  delay(1);
    } 
    
    
    
  for (int x=0;x<10;x++) {
  wind5();
  delay(1);
    }    
    
  
   for (int x=0;x<10;x++) {
  wind6();
  delay(1);
    }    
  
   for (int x=0;x<10;x++) {
  wind7();
  delay(1);
    }    
    
     for (int x=0;x<10;x++) {
  wind8();
  delay(1);
    }    
  

    
  
}

