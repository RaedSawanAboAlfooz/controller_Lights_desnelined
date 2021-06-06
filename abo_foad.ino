
int D = 200;
void setup() {
  pinMode (0, OUTPUT);
  pinMode (1, OUTPUT);
  pinMode (2, OUTPUT);
  pinMode (A0, OUTPUT);
  pinMode (A5, OUTPUT);


  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);
  for (int i = 0 ; i <= 13; i++) {
    digitalWrite(i, LOW);
  }
  digitalWrite(A0, LOW);
  digitalWrite(A5, LOW);

  // put your setup code here, to run once:
}

void loop() {

  D = 150;

  one(0, 1, 2, 3, 4, 10, D);
  delay(D);
  tow(0, 1, 2, 3, 4, 10, D);
  delay(D);
  midInsideToOut(0, 1, 2, 3, 4, 10, D);
  delay(D);
  midOutToInside(0, 1, 2, 3, 4, 10, D);
  delay(D);
  incrmentIncideToOut(0, 1, 2, 3, 4, 10, D);
  delay(D);




  one(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  tow(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  midInsideToOut(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  midOutToInside(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  incrmentIncideToOut(5, 6, 7, 8, 9 , 10, D);
  delay(D);




  one(A5, 11, A0, 12, 13, 10, D);
  delay(D);
  tow(A5, 11, A0, 12, 13, 10, D);
  delay(D);
  midInsideToOut(A5, 11, A0, 12, 13, 10, D);
  delay(D);
  midOutToInside(A5, 11, A0, 12, 13, 10, D);
  delay(D);
  incrmentIncideToOut(A5, 11, A0, 12, 13, 10, D);
  delay(D);


  one2Colors(A5, 11, A0, 12, 13 , 0, 1, 2, 3, 4,  10, D);
  delay(D);
  tow2Colors(A5, 11, A0, 12, 13 , 0, 1, 2, 3, 4,  10, D);
  delay(D);

   one2Colors(5, 6, 7, 8, 9 , A5, 11, A0, 12, 13 ,  10, D);
  delay(D);
  tow2Colors(5, 6, 7, 8, 9 , A5, 11, A0, 12, 13 ,  10, D);
  delay(D);

   one2Colors(5, 6, 7, 8, 9 , 0, 1, 2, 3, 4,  10, D);
  delay(D);
  tow2Colors(5, 6, 7, 8, 9 , 0, 1, 2, 3, 4,  10, D);
  delay(D);
  midInsideToOut2Colors(5, 6, 7, 8, 9 , 0, 1, 2, 3, 4,  10, D);
  delay(D);
  midOutToInside2Colors(5, 6, 7, 8, 9 , 0, 1, 2, 3, 4,  10, D);
  delay(D);
  tow3Colors(5, 6, 7, 8, 9 , 0, 1, 2, 3, 4, A5, 11, A0, 12, 13 , 10, D);
  delay(D);
  


















  one(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  one(0, 1, 2, 3, 4, 10, D);
  delay(D);
  one(A5, 11, A0, 12, 13, 10, D);
  delay(D);

  tow(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  tow(0, 1, 2, 3, 4, 10, D);
  delay(D);
  tow( A5, 11, A0, 12, 13, 10, D);
  delay(D);

  midInsideToOut(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  midInsideToOut(0, 1, 2, 3, 4, 10, D);
  delay(D);
  midInsideToOut( A5, 11, A0, 12, 13, 10, D);
  delay(D);

  midOutToInside(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  midOutToInside(0, 1, 2, 3, 4, 10, D);
  delay(D);
  midOutToInside( A5, 11, A0, 12, 13, 10, D);
  delay(D);

  incrmentIncideToOut(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  incrmentIncideToOut(0, 1, 2, 3, 4, 10, D);
  delay(D);
  incrmentIncideToOut( A5, 11, A0, 12, 13, 10, D);
  delay(D);











  one(0, 1, 2, 3, 4, 10, D);
  delay(D);
  one(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  one(A5, 11, A0, 12, 13, 10, D);
  delay(D);

  tow(0, 1, 2, 3, 4, 10, D);
  delay(D);
  tow(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  tow( A5, 11, A0, 12, 13, 10, D);
  delay(D);

  midInsideToOut(0, 1, 2, 3, 4, 10, D);
  delay(D);
  midInsideToOut(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  midInsideToOut( A5, 11, A0, 12, 13, 10, D);
  delay(D);

  midOutToInside(0, 1, 2, 3, 4, 10, D);
  delay(D);
  midOutToInside(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  midOutToInside( A5, 11, A0, 12, 13, 10, D);
  delay(D);

  incrmentIncideToOut(0, 1, 2, 3, 4, 10, D);
  delay(D);
  incrmentIncideToOut(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  incrmentIncideToOut( A5, 11, A0, 12, 13, 10, D);
  delay(D);







  one(A5, 11, A0, 12, 13, 10, D);
  delay(D);
  one(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  one(0, 1, 2, 3, 4, 10, D);
  delay(D);

  tow(A5, 11, A0, 12, 13, 10, D);
  delay(D);
  tow(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  tow(0, 1, 2, 3, 4, 10, D);
  delay(D);

  midInsideToOut(A5, 11, A0, 12, 13, 10, D);
  delay(D);
  midInsideToOut(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  midInsideToOut(0, 1, 2, 3, 4, 10, D);
  delay(D);

  midOutToInside(A5, 11, A0, 12, 13, 10, D);
  delay(D);
  midOutToInside(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  midOutToInside(0, 1, 2, 3, 4, 10, D);
  delay(D);

  incrmentIncideToOut(A5, 11, A0, 12, 13, 10, D);
  delay(D);
  incrmentIncideToOut(5, 6, 7, 8, 9 , 10, D);
  delay(D);
  incrmentIncideToOut(0, 1, 2, 3, 4, 10, D);
  delay(D);






  midInsideToOut2Colors(5, 6, 7, 8, 9 , 0, 1, 2, 3, 4,  10, D);
  delay(D);
  midOutToInside2Colors(5, 6, 7, 8, 9 , 0, 1, 2, 3, 4,  10, D);
  delay(D);

  tow3Colors(5, 6, 7, 8, 9 , 0, 1, 2, 3, 4, A5, 11, A0, 12, 13 , 10, D);
  delay(D);


  midInsideToOut2Colors(5, 6, 7, 8, 9 , A5, 11, A0, 12, 13  , 10, D);
  delay(D);
  midOutToInside2Colors(5, 6, 7, 8, 9 , A5, 11, A0, 12, 13 , 10, D);
  delay(D);

  tow3Colors(5, 6, 7, 8, 9 , 0, 1, 2, 3, 4, A5, 11, A0, 12, 13 , 10, D);
  delay(D);

  midInsideToOut2Colors( 0, 1, 2, 3, 4, A5, 11, A0, 12, 13  , 10, D);
  delay(D);
  midOutToInside2Colors( 0, 1, 2, 3, 4, A5, 11, A0, 12, 13 , 10, D);

  tow3Colors(5, 6, 7, 8, 9 , 0, 1, 2, 3, 4, A5, 11, A0, 12, 13 , 10, D);
  delay(D);

  one3Colors(5, 6, 7, 8, 9 , 0, 1, 2, 3, 4, A5, 11, A0, 12, 13 , 10, D);
  delay(D);
  tow3Colors(5, 6, 7, 8, 9 , 0, 1, 2, 3, 4, A5, 11, A0, 12, 13 , 10, D);
  delay(D);
  midInsideToOut3Colors(5, 6, 7, 8, 9 , 0, 1, 2, 3, 4, A5, 11, A0, 12, 13 , 10, D);
  delay(D);
  midOutToInside3Colors(5, 6, 7, 8, 9 , 0, 1, 2, 3, 4, A5, 11, A0, 12, 13 , 10, D);
  delay(D);
  incrmentIncideToOut3Colors(5, 6, 7, 8, 9 , 0, 1, 2, 3, 4, A5, 11, A0, 12, 13 , 10, D);
  delay(D * 3);

  endColor (5, 6, 7, 8, 9, 10, 500);
  delay(D * 3);
  endColor (5, 6, 7, 8, 9, 10, 500);
  delay(D * 3);
  endColor (5, 6, 7, 8, 9, 10, 500);
  delay(D * 3);


  endColor (A5, 11, A0, 12, 13 , 10, 500);
  delay(D * 3);
  endColor (A5, 11, A0, 12, 13 , 10, 500);
  delay(D * 3);
  endColor (A5, 11, A0, 12, 13 , 10, 500);
  delay(D * 3);


  endColor (0, 1, 2, 3, 4, 10, 500);
  delay(D * 3);
  endColor (0, 1, 2, 3, 4, 10, 500);
  delay(D * 3);
  endColor (0, 1, 2, 3, 4, 10, 500);
  delay(D * 3);
 
    end2Color (0, 1, 2, 3, 4, A5, 11, A0, 12, 13 ,  10,500);
  delay(D * 3);
    end2Color (5, 6, 7, 8, 9 , A5, 11, A0, 12, 13 ,  10, 500);
  delay(D * 3);
    end2Color (5, 6, 7, 8, 9 , 0, 1, 2, 3, 4,  10 , 500);
  delay(D * 3);



  end3Color(5, 6, 7, 8, 9 , 0, 1, 2, 3, 4, A5, 11, A0, 12, 13 , 10 , 500);
  delay(D * 3);
  end3Color(5, 6, 7, 8, 9 , 0, 1, 2, 3, 4, A5, 11, A0, 12, 13 , 10, 500);
  delay(D * 3);
  end3Color(5, 6, 7, 8, 9 , 0, 1, 2, 3, 4, A5, 11, A0, 12, 13 , 10, 500);

  delay(1000);


}



void end2Color(int pin1, int pin2 , int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10, int pin11, int Delay) {//////////////////////////////////
  digitalWrite(pin1, HIGH);
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin7, HIGH);
  digitalWrite(pin8, HIGH);
  digitalWrite(pin9, HIGH);
  digitalWrite(pin10, HIGH);
  digitalWrite(pin11, HIGH);
  delay(Delay);
  digitalWrite(pin1, LOW);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
  digitalWrite(pin8, LOW);
  digitalWrite(pin9, LOW);
  digitalWrite(pin10, LOW);
  digitalWrite(pin11, LOW);
}


void endColor(int pin1, int pin2 , int pin3, int pin4, int pin5, int pin6, int Delay) {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
  delay(Delay);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
}





void end3Color (int pin1, int pin2 , int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10, int pin11, int pin12, int pin13, int pin14, int pin15, int pin16, int Delay) {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin7, HIGH);
  digitalWrite(pin8, HIGH);
  digitalWrite(pin9, HIGH);
  digitalWrite(pin10, HIGH);
  digitalWrite(pin11, HIGH);
  digitalWrite(pin12, HIGH);
  digitalWrite(pin13, HIGH);
  digitalWrite(pin14, HIGH);
  digitalWrite(pin15, HIGH);
  digitalWrite(pin16, HIGH);
  delay(D * 2);
  digitalWrite(pin1, LOW);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
  digitalWrite(pin8, LOW);
  digitalWrite(pin9, LOW);
  digitalWrite(pin10, LOW);
  digitalWrite(pin11, LOW);
  digitalWrite(pin12, LOW);
  digitalWrite(pin13, LOW);
  digitalWrite(pin14, LOW);
  digitalWrite(pin15, LOW);
  digitalWrite(pin16, LOW);
}


void one (int pin1, int pin2 , int pin3, int pin4, int pin5, int pin6, int Delay) {//////////////////////////////////
  digitalWrite(pin1, HIGH);
  delay(Delay);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);
  delay(Delay);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, HIGH);
  delay(Delay);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, HIGH);
  delay(Delay);

  digitalWrite(pin4, LOW);
  digitalWrite(pin5, HIGH);
  delay(Delay);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, HIGH);
  delay(Delay);
  digitalWrite(pin6, LOW);
  digitalWrite(pin5, HIGH);
  delay(Delay);
  digitalWrite(pin5, LOW);
  digitalWrite(pin4, HIGH);
  delay(Delay);
  digitalWrite(pin4, LOW);
  digitalWrite(pin3, HIGH);
  delay(Delay);
  digitalWrite(pin3, LOW);
  digitalWrite(pin2, HIGH);
  delay(Delay);
  digitalWrite(pin2, LOW);
  digitalWrite(pin1, HIGH);
  delay(Delay);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  delay(Delay);
}
void one2Colors(int pin1, int pin2 , int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10, int pin11, int Delay) {//////////////////////////////////
  digitalWrite(pin1, HIGH);
  digitalWrite(pin6, HIGH);

  delay(Delay);
  digitalWrite(pin1, LOW);
  digitalWrite(pin6, LOW);

  digitalWrite(pin2, HIGH);
  digitalWrite(pin7, HIGH);

  delay(Delay);
  digitalWrite(pin2, LOW);
  digitalWrite(pin7, LOW);

  digitalWrite(pin3, HIGH);
  digitalWrite(pin8, HIGH);

  delay(Delay);
  digitalWrite(pin3, LOW);
  digitalWrite(pin8, LOW);

  digitalWrite(pin4, HIGH);
  digitalWrite(pin9, HIGH);

  delay(Delay);

  digitalWrite(pin4, LOW);
  digitalWrite(pin9, LOW);

  digitalWrite(pin5, HIGH);
  digitalWrite(pin10, HIGH);

  delay(Delay);
  digitalWrite(pin5, LOW);
  digitalWrite(pin10, LOW);

  digitalWrite(pin11, HIGH);
  delay(Delay);
  digitalWrite(pin11, LOW);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin10, HIGH);

  delay(Delay);
  digitalWrite(pin5, LOW);
  digitalWrite(pin10, LOW);

  digitalWrite(pin4, HIGH);
  digitalWrite(pin9, HIGH);

  delay(Delay);
  digitalWrite(pin4, LOW);
  digitalWrite(pin9, LOW);

  digitalWrite(pin3, HIGH);
  digitalWrite(pin8, HIGH);

  delay(Delay);
  digitalWrite(pin3, LOW);
  digitalWrite(pin8, LOW);

  digitalWrite(pin2, HIGH);
  digitalWrite(pin7, HIGH);

  delay(Delay);
  digitalWrite(pin2, LOW);
  digitalWrite(pin7, LOW);

  digitalWrite(pin1, HIGH);
  digitalWrite(pin6, HIGH);
  delay(Delay);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
  digitalWrite(pin8, LOW);
  digitalWrite(pin9, LOW);
  digitalWrite(pin10, LOW);
}

void one3Colors(int pin1, int pin2 , int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10, int pin11, int pin12, int pin13, int pin14, int pin15, int pin16, int Delay) {//////////////////////////////////
  digitalWrite(pin1, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin11, HIGH);

  delay(Delay);
  digitalWrite(pin1, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin11, LOW);

  digitalWrite(pin2, HIGH);
  digitalWrite(pin7, HIGH);
  digitalWrite(pin12, HIGH);


  delay(Delay);
  digitalWrite(pin2, LOW);
  digitalWrite(pin7, LOW);
  digitalWrite(pin12, LOW);

  digitalWrite(pin3, HIGH);
  digitalWrite(pin8, HIGH);
  digitalWrite(pin13, HIGH);


  delay(Delay);
  digitalWrite(pin3, LOW);
  digitalWrite(pin8, LOW);
  digitalWrite(pin13, LOW);


  digitalWrite(pin4, HIGH);
  digitalWrite(pin9, HIGH);
  digitalWrite(pin14, HIGH);


  delay(Delay);

  digitalWrite(pin4, LOW);
  digitalWrite(pin9, LOW);
  digitalWrite(pin14, LOW);


  digitalWrite(pin5, HIGH);
  digitalWrite(pin10, HIGH);
  digitalWrite(pin15, HIGH);


  delay(Delay);
  digitalWrite(pin5, LOW);
  digitalWrite(pin10, LOW);
  digitalWrite(pin15, LOW);


  digitalWrite(pin16, HIGH);
  delay(Delay);
  digitalWrite(pin16, LOW);

  digitalWrite(pin15, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin10, HIGH);

  delay(Delay);

  digitalWrite(pin15, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin10, LOW);

  digitalWrite(pin4, HIGH);
  digitalWrite(pin9, HIGH);
  digitalWrite(pin14, HIGH);


  delay(Delay);
  digitalWrite(pin4, LOW);
  digitalWrite(pin9, LOW);
  digitalWrite(pin14, LOW);


  digitalWrite(pin3, HIGH);
  digitalWrite(pin8, HIGH);
  digitalWrite(pin13, HIGH);

  delay(Delay);
  digitalWrite(pin13, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin8, LOW);

  digitalWrite(pin2, HIGH);
  digitalWrite(pin7, HIGH);
  digitalWrite(pin12, HIGH);


  delay(Delay);
  digitalWrite(pin12, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin7, LOW);

  digitalWrite(pin1, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin11, HIGH);


  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
  digitalWrite(pin8, LOW);
  digitalWrite(pin9, LOW);
  digitalWrite(pin10, LOW);
  digitalWrite(pin11, LOW);
  digitalWrite(pin12, LOW);
  digitalWrite(pin13, LOW);
  digitalWrite(pin14, LOW);
  digitalWrite(pin15, LOW);
  digitalWrite(pin16, LOW);

  delay(Delay);

}





























void tow (int pin1, int pin2 , int pin3, int pin4, int pin5 , int pin6, int Delay) {//////////////////////////////////////////////
  digitalWrite(pin1, HIGH);
  delay(Delay);
  digitalWrite(pin2, HIGH);
  delay(Delay);
  digitalWrite(pin3, HIGH);
  delay(Delay);
  digitalWrite(pin4, HIGH);
  delay(Delay);
  digitalWrite(pin5, HIGH);
  delay(Delay);
  digitalWrite(pin6, HIGH);
  delay(Delay + 100);
  digitalWrite(pin6, LOW);
  delay(Delay);
  digitalWrite(pin5, LOW);
  delay(Delay);
  digitalWrite(pin4, LOW);
  delay(Delay);
  digitalWrite(pin3, LOW);
  delay(Delay);
  digitalWrite(pin2, LOW);
  delay(Delay);
  digitalWrite(pin1, LOW);
  delay(Delay);
}
void tow2Colors(int pin1, int pin2 , int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10, int pin11, int Delay) {//////////////////////////////////
  digitalWrite(pin1, HIGH);
  digitalWrite(pin6, HIGH);

  delay(Delay);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin7, HIGH);

  delay(Delay);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin8, HIGH);

  delay(Delay);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin9, HIGH);

  delay(Delay);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin10, HIGH);

  delay(Delay);
  digitalWrite(pin11, HIGH);
  delay(Delay + 100);
  digitalWrite(pin11, LOW);
  delay(Delay);
  digitalWrite(pin5, LOW);
  digitalWrite(pin10, LOW);

  delay(Delay);
  digitalWrite(pin4, LOW);
  digitalWrite(pin9, LOW);

  delay(Delay);
  digitalWrite(pin3, LOW);
  digitalWrite(pin8, LOW);

  delay(Delay);
  digitalWrite(pin2, LOW);
  digitalWrite(pin7, LOW);

  delay(Delay);
  digitalWrite(pin1, LOW);
  digitalWrite(pin6, LOW);

  delay(Delay);
}

void tow3Colors(int pin1, int pin2 , int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10, int pin11, int pin12, int pin13, int pin14, int pin15, int pin16, int Delay) {//////////////////////////////////
  digitalWrite(pin1, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin11, HIGH);
  delay(Delay);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin7, HIGH);
  digitalWrite(pin12, HIGH);


  delay(Delay);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin8, HIGH);
  digitalWrite(pin13, HIGH);

  delay(Delay);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin9, HIGH);
  digitalWrite(pin14, HIGH);

  delay(Delay);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin10, HIGH);
  digitalWrite(pin15, HIGH);

  delay(Delay);
  digitalWrite(pin16, HIGH);
  delay(Delay + 100);
  digitalWrite(pin16, LOW);
  delay(Delay);
  digitalWrite(pin5, LOW);
  digitalWrite(pin10, LOW);
  digitalWrite(pin15, LOW);

  delay(Delay);
  digitalWrite(pin4, LOW);
  digitalWrite(pin9, LOW);
  digitalWrite(pin14, LOW);

  delay(Delay);
  digitalWrite(pin3, LOW);
  digitalWrite(pin8, LOW);
  digitalWrite(pin13, LOW);

  delay(Delay);
  digitalWrite(pin2, LOW);
  digitalWrite(pin7, LOW);
  digitalWrite(pin12, LOW);

  delay(Delay);
  digitalWrite(pin1, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin11, LOW);

  delay(Delay);
}






















void midInsideToOut  (int pin1, int pin2 , int pin3, int pin4, int pin5, int pin6  , int Delay) {///////////////////////////////
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  delay(Delay);
  digitalWrite(pin3, 0);
  digitalWrite(pin4, 0);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin5, HIGH);
  delay(Delay);
  digitalWrite(pin2, 0);
  digitalWrite(pin5, 0);
  digitalWrite(pin1, HIGH);
  digitalWrite(pin6, HIGH);
  delay(Delay);
  digitalWrite(pin1, 0);
  digitalWrite(pin6, 0);
  delay(Delay);
}
void midInsideToOut2Colors  (int pin1, int pin2 , int pin3, int pin4, int pin5, int pin6, int pin7 , int pin8, int pin9, int pin10, int pin11 , int Delay) {
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin8, HIGH);
  digitalWrite(pin9, HIGH);////////////////////////////////////////////////////////////////
  delay(Delay);
  digitalWrite(pin3, 0);
  digitalWrite(pin4, 0);
  digitalWrite(pin8, 0);
  digitalWrite(pin9, 0);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin7, HIGH);
  digitalWrite(pin10, HIGH);
  delay(Delay);
  digitalWrite(pin2, 0);
  digitalWrite(pin5, 0);
  digitalWrite(pin7, 0);
  digitalWrite(pin10, 0);
  digitalWrite(pin1, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin11, HIGH);
  delay(Delay);
  digitalWrite(pin1, 0);
  digitalWrite(pin6, 0);
  digitalWrite(pin11, 0);
  delay(Delay);
}
void midInsideToOut3Colors(int pin1, int pin2 , int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10, int pin11, int pin12, int pin13, int pin14, int pin15, int pin16, int Delay) {//////////////////////////////////
  digitalWrite(pin13, HIGH);
  digitalWrite(pin14, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin8, HIGH);
  digitalWrite(pin9, HIGH);////////////////////////////////////////////////////////////////
  delay(Delay);
  digitalWrite(pin13, 0);
  digitalWrite(pin14, 0);
  digitalWrite(pin3, 0);
  digitalWrite(pin4, 0);
  digitalWrite(pin8, 0);
  digitalWrite(pin9, 0);
  digitalWrite(pin12, HIGH);
  digitalWrite(pin15, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin7, HIGH);
  digitalWrite(pin10, HIGH);
  delay(Delay);
  digitalWrite(pin12, 0);
  digitalWrite(pin15, 0);
  digitalWrite(pin2, 0);
  digitalWrite(pin5, 0);
  digitalWrite(pin7, 0);
  digitalWrite(pin10, 0);
  digitalWrite(pin11, HIGH);
  digitalWrite(pin1, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin16, HIGH);
  delay(Delay);
  digitalWrite(pin11, 0);
  digitalWrite(pin1, 0);

  digitalWrite(pin6, 0);
  digitalWrite(pin16, 0);
  delay(Delay);


}











void midOutToInside  (int pin1, int pin2 , int pin3, int pin4, int pin5, int pin6,  int Delay) {//////////////////////////////////
  digitalWrite(pin1, HIGH);
  digitalWrite(pin6, HIGH);
  delay(Delay);
  digitalWrite(pin1, 0);
  digitalWrite(pin6, 0);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin2, HIGH);
  delay(Delay);
  digitalWrite(pin5, 0);
  digitalWrite(pin2, 0);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  delay(Delay);
  digitalWrite(pin3, 0);
  digitalWrite(pin4, 0);
  delay(Delay);
}
void midOutToInside2Colors   (int pin1, int pin2 , int pin3, int pin4, int pin5, int pin6, int pin7 , int pin8, int pin9, int pin10, int pin11 , int Delay) {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin11, HIGH);

  delay(Delay);
  digitalWrite(pin1, 0);
  digitalWrite(pin11, 0);
  digitalWrite(pin6, 0);

  digitalWrite(pin10, HIGH);
  digitalWrite(pin7, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin2, HIGH);
  delay(Delay);
  digitalWrite(pin10, 0);
  digitalWrite(pin7, 0);
  digitalWrite(pin5, 0);
  digitalWrite(pin2, 0);
  digitalWrite(pin9, HIGH);
  digitalWrite(pin8, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  delay(Delay);
  digitalWrite(pin9, 0);
  digitalWrite(pin8, 0);
  digitalWrite(pin3, 0);
  digitalWrite(pin4, 0);
  delay(Delay);
}
void midOutToInside3Colors   (int pin1, int pin2 , int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10, int pin11, int pin12, int pin13, int pin14, int pin15, int pin16, int Delay) {//////////////////////////////////
  digitalWrite(pin11, HIGH);
  digitalWrite(pin16, HIGH);
  digitalWrite(pin1, HIGH);
  digitalWrite(pin6, HIGH);////////////////////////////////////////////////////////////////
  delay(Delay);
  digitalWrite(pin11, 0);
  digitalWrite(pin1, 0);
  digitalWrite(pin16, 0);
  digitalWrite(pin6, 0);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin12, HIGH);
  digitalWrite(pin15, HIGH);
  digitalWrite(pin7, HIGH);
  digitalWrite(pin10, HIGH);
  delay(Delay);
  digitalWrite(pin2, 0);
  digitalWrite(pin5, 0);
  digitalWrite(pin12, 0);
  digitalWrite(pin15, 0);
  digitalWrite(pin7, 0);
  digitalWrite(pin10, 0);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin13, HIGH);
  digitalWrite(pin14, HIGH);
  digitalWrite(pin8, HIGH);
  digitalWrite(pin9, HIGH);
  delay(Delay);
  digitalWrite(pin13, 0);
  digitalWrite(pin14, 0);
  digitalWrite(pin3, 0);
  digitalWrite(pin4, 0);
  digitalWrite(pin8, 0);
  digitalWrite(pin9, 0);
  delay(Delay);
}
















void incrmentIncideToOut ( int pin1, int pin2 , int pin3, int pin4, int pin5, int pin6  , int Delay) {
  digitalWrite(pin3, 1);
  digitalWrite(pin4, 1);
  delay(Delay);
  digitalWrite(pin2, 1);
  digitalWrite(pin5, 1);
  delay(Delay);
  digitalWrite(pin1, 1);
  digitalWrite(pin6, 1);
  delay(Delay);
  digitalWrite(pin1, 0);
  digitalWrite(pin6, 0);
  delay(Delay);
  digitalWrite(pin2, 0);
  digitalWrite(pin5, 0);
  delay(Delay);
  digitalWrite(pin3, 0);
  digitalWrite(pin4, 0);
  delay(Delay);


}

void  incrmentIncideToOut2Colors(int pin1, int pin2 , int pin3, int pin4, int pin5, int pin6, int pin7 , int pin8, int pin9, int pin10, int pin11 , int Delay) {
  digitalWrite(pin3, 1);
  digitalWrite(pin4, 1);
  digitalWrite(pin8, 1);
  digitalWrite(pin9, 1);
  delay(Delay);
  digitalWrite(pin2, 1);
  digitalWrite(pin5, 1);
  digitalWrite(pin7, 1);
  digitalWrite(pin10, 1);
  delay(Delay);
  digitalWrite(pin1, 1);
  digitalWrite(pin6, 1);
  digitalWrite(pin11, 1);

  delay(Delay);
  digitalWrite(pin11, 0);
  digitalWrite(pin1 , 0);
  digitalWrite(pin6, 0);

  delay(Delay);
  digitalWrite(pin2, 0);
  digitalWrite(pin5, 0);
  digitalWrite(pin7, 0);
  digitalWrite(pin10, 0);

  delay(Delay);
  digitalWrite(pin3, 0);
  digitalWrite(pin4, 0);
  digitalWrite(pin8, 0);
  digitalWrite(pin9, 0);
  delay(Delay);


}
void  incrmentIncideToOut3Colors(int pin1, int pin2 , int pin3, int pin4, int pin5, int pin6, int pin7, int pin8, int pin9, int pin10, int pin11, int pin12, int pin13, int pin14, int pin15, int pin16, int Delay) {//////////////////////////////////
  digitalWrite(pin3, 1);
  digitalWrite(pin4, 1);
  digitalWrite(pin13, 1);
  digitalWrite(pin14, 1);
  digitalWrite(pin8, 1);
  digitalWrite(pin9, 1);
  delay(Delay);
  digitalWrite(pin12, 1);
  digitalWrite(pin15, 1);
  digitalWrite(pin2, 1);
  digitalWrite(pin5, 1);
  digitalWrite(pin7, 1);
  digitalWrite(pin10, 1);
  delay(Delay);
  digitalWrite(pin11, 1);
  digitalWrite(pin1, 1);
  digitalWrite(pin6, 1);
  digitalWrite(pin16, 1);

  delay(Delay);
  digitalWrite(pin11, 0);
  digitalWrite(pin16 , 0);
  digitalWrite(pin6, 0);
  digitalWrite(pin1, 0);


  delay(Delay);
  digitalWrite(pin12, 0);
  digitalWrite(pin15, 0);
  digitalWrite(pin2, 0);
  digitalWrite(pin5, 0);
  digitalWrite(pin7, 0);
  digitalWrite(pin10, 0);

  delay(Delay);
  digitalWrite(pin13, 0);
  digitalWrite(pin14, 0);
  digitalWrite(pin3, 0);
  digitalWrite(pin4, 0);
  digitalWrite(pin8, 0);
  digitalWrite(pin9, 0);
  delay(Delay);


}
