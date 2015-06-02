void rain1()
{
 
 
  for (int R=0; R<2; R++)
  {
    onLED(R,0);
    onLED(R,2);
    onLED(R,5);
    onLED(R,7);
  
}
}
void rain2()
{
  for (int R=1; R<3; R++)
  {
    onLED(R,0);
    onLED(R,2);
    onLED(R,5);
    onLED(R,7);
  }
  for (int C=1; C<7; C=C+3)
  {
onLED(0,C);
  }
}

void rain3()
{

  
   for (int C=1; C<7; C=C+3)
  {
onLED(0,C);
onLED(1,C);
  }

 for (int R=2; R<4;R++)
 {
   onLED(R,0);
   onLED(R,2);
   onLED(R,5);
   onLED(R,7);
 }


}

void rain4()
{

  
  for (int C=1; C<7; C=C+3)
  {
    onLED(1,C);
    onLED(2,C);
  
  }

 for (int R=3; R<5;R++)
 {

onLED(R,0);
onLED(R,2);
onLED(R,5);
onLED(R,7);
 }
 
 onLED(0,6);

}



void rain5()
{
  

  for (int R=0;R<2;R++)
  {
  

    onLED(R,6);
  }

  for (int R=1; R<3; R++)
  {
    onLED(R,1);
  }

  for (int R=2; R<4; R++)
  {
    onLED(R,4);
  }

 for (int R=4; R<6;R++)
 {

    onLED(R,0);
    onLED(R,2);
    onLED(R,5);
    onLED(R,7);
  }

onLED(0,3);
}


void rain6()
{
  

  for (int R=1; R<3; R++){
  onLED (R,6);
  }



  for (int R=2; R<4;R++){
    onLED(R,1);
    }


  for (int R=0; R<2;R++)
  {
      onLED(R,3);
  }

  for (int R=5; R<8; R++)
  {
  
  onLED(R,0);
  }


  for (int R=3; R<5;R++)
  {

    onLED(R,4);
  }


  for (int C=5; C<8; C=C+2)
  {
  onLED(5,C);
  onLED(6,C);
  }


onLED(0,0);
onLED(6,2);

}

void rain7()
{
  
 
  
  for (int R=0; R<2; R++){
    
    onLED(R,0);
    }

  for (int R=1; R<3; R++){
    
    onLED(R,3);
    }

  for (int R=2; R<4; R++){
    
    onLED(R,6);
    }

  for (int R=3; R<5; R++){
    
    onLED(R,1);
    }



  for (int R=4; R<6; R++){
    
    onLED(R,4);
    }

  for (int R=6; R<8;R++){
    
    onLED(R,0);
    onLED(R,2);
    onLED(R,5);
    onLED(R,7);

  }
  
  
  
  onLED(0,5);

}

void rain8()
{
  
  
  for (int R=2; R<4;R++){
    for (int C=3;C<7;C=C+3){
    onLED(R,C);
    }
  }
  
  
  for (int R=0; R<2; R++)
  {
    onLED(R,5);
  }



 for (int R=1; R<3; R++)
  {
    onLED(R,0);
  }


 for (int R=4; R<6; R++)
  {
    onLED(R,1);
  }

 for (int R=51; R<7; R++)
  {
    onLED(R,4);
  }


  for (int C=0;C<3; C=C+2){
  
  onLED(7,C);
  }


   for (int C=5;C<8; C=C+2){

    onLED(7,C);
  
  
    }

}

void rainANI (){
 
  
  for (int x=0;x<20;x++) {
  rain1();
  delay(1);
  }
  
  for (int x=0;x<20;x++) {
 rain2();
  delay(1);
    } 
  
   for (int x=0;x<20;x++) {
 rain3();
  delay(1);
    } 
  
   for (int x=0;x<20;x++) {
  rain4();
  delay(1);
    } 
    
    
    
  for (int x=0;x<20;x++) {
  rain5();
  delay(1);
    }    
 
    
  for (int x=0;x<20;x++) {
  rain6();
  delay(1);
    }  
 
 
    
  for (int x=0;x<20;x++) {
  rain7();
  delay(1);
    }  
 
    
  for (int x=0;x<20;x++) {
  rain8();
  delay(1);
    }  
 
 
}
