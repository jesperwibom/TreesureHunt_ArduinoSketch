void resetLEDS() {
 for (int thisPin = 0; thisPin < 8; thisPin++) {
  digitalWrite(row[thisPin], HIGH);     // Set all cathodes to have positive voltage at them. Hence LED will not light up irrespective of what the anode is set to
  digitalWrite(col[thisPin], LOW); 

 }
} 
  
 void onLED(int colnum,int rownum) {
  digitalWrite(col[colnum], HIGH);
  digitalWrite(row[rownum], LOW);
  delay(delayPin);
  digitalWrite(col[colnum], LOW);
  digitalWrite(row[rownum], HIGH);
}

void setPins()
{
   for (int thisPin = 0; thisPin < 8; thisPin++) {
     pinMode(col[thisPin], OUTPUT);      // Set selected pin to be an output rather then an input pin
     pinMode(row[thisPin], OUTPUT);       // this is so we cna provide +5v or GND at any pin
     digitalWrite(row[thisPin], HIGH);     // Set all cathodes to have positive voltage at them. Hence LED will not light up irrespective of what the anode is set to
   }
}
