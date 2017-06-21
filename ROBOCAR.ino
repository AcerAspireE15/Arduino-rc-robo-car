char val;
int E1=5;
int M1=4;
int E2=6;
int M2=7;

void setup(){
  
  Serial.begin(9600);
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  
}

void loop(){
   int value;
  
  for(value=0;value<=255;value+=1){
  
  if(Serial.available()){
    
    val=Serial.read();
  }
  
  if(val == 'F')
  {
    digitalWrite(M1, HIGH);
    analogWrite(E1, value);
    digitalWrite(M2, HIGH);
    analogWrite(E2, value);
  }
  else if( val == 'B')
  {
    digitalWrite(M1, LOW);
    analogWrite(E1, value);
    digitalWrite(M2, LOW);
    analogWrite(E2, value);
  }
  else if( val == 'L')
  {
    digitalWrite(M1, HIGH);
    analogWrite(E1, value);
  }
  else if( val == 'R')
  {
    digitalWrite(M2, HIGH);
    analogWrite(E2, value);
  }
  else if( val == 'G')
  {
    digitalWrite(M1, HIGH);
    analogWrite(E1, value);
    digitalWrite(M2, LOW);
    analogWrite(E2, value);
  }
  else if( val == 'I')
  {
    digitalWrite(M1, LOW);
    analogWrite(E1, value);
    digitalWrite(M2, HIGH);
    analogWrite(E2, value);
  }
  else if( val == 'H')
  {
    digitalWrite(M1, LOW);
    analogWrite(E1, value);
    digitalWrite(M2, HIGH);
    analogWrite(E2, value);
  }
  else if( val == 'J')
  {
    digitalWrite(M2, LOW);
    analogWrite(E2, value);
    digitalWrite(M1, HIGH);
    analogWrite(E1, value);
  }
  else if( val == 'S')
  {
    digitalWrite(M1, 0);
    analogWrite(E1, 0);
    digitalWrite(M2, 0);
    analogWrite(E2, 0);
  }
  delay(20);
  }
}
