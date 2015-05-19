void rain1()
{
 
 
onLED(0,0);
onLED(0,2);
onLED(0,5);
onLED(0,7);
onLED(1,0);
onLED(1,2);
onLED(1,5);
onLED(1,7);
}

void rain2()
{
  
  
onLED(0,1);
onLED(0,4);
onLED(1,0);
onLED(1,2);
onLED(1,5);
onLED(1,7);
onLED(2,0);
onLED(2,2);
onLED(2,5);
onLED(2,7);

}

void rain3()
{


onLED(0,1);
onLED(0,4);
onLED(1,1);
onLED(1,4);
onLED(2,0);
onLED(2,2);
onLED(2,5);
onLED(2,7);
onLED(3,0);
onLED(3,2);
onLED(3,5);
onLED(3,7);

}

void rain4()
{

onLED(0,6);
onLED(1,1);
onLED(1,4);
onLED(2,1);
onLED(2,4);
onLED(3,0);
onLED(3,2);
onLED(3,5);
onLED(3,7);
onLED(4,0);
onLED(4,2);
onLED(4,5);
onLED(4,7);

}

void rain5()
{
  
  
onLED(0,3);
onLED(0,6);
onLED(1,1);
onLED(1,6);
onLED(2,1); 
onLED(2,4);
onLED(3,4);
onLED(4,0);
onLED(4,2);
onLED(4,5);
onLED(4,7);
onLED(5,0);
onLED(5,2);
onLED(5,5);
onLED(5,7);

}


void rain6()
{
  
onLED(0,0);
onLED(0,3);
onLED(1,3);
onLED(1,6);
onLED(2,1);
onLED(2,6);
onLED(3,1);
onLED(3,4);
onLED(4,4);
onLED(5,0);
onLED(5,5);
onLED(5,7);
onLED(6,0);
onLED(6,2);
onLED(6,5);
onLED(6,7);
onLED(7,0);

}



void rain7()
{
  
 
onLED(0,0);
onLED(0,5);
onLED(1,0);
onLED(1,3);
onLED(2,3); 
onLED(2,6);
onLED(3,1);
onLED(3,6);
onLED(4,1);
onLED(4,4);
onLED(5,4);
onLED(6,0);
onLED(6,2);
onLED(6,5);
onLED(6,7);
onLED(7,0);
onLED(7,2);
onLED(7,5);
onLED(7,7);

}



void rain8()
{
  
  
  
onLED(0,5);
onLED(1,0);
onLED(1,5);
onLED(2,0);
onLED(2,3);
  
onLED(2,6);
onLED(3,3);
onLED(3,6);
onLED(4,1);
onLED(5,1);
  
onLED(5,4);
onLED(6,4);
onLED(7,0);
onLED(7,2);
onLED(7,5);
onLED(7,7);

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



