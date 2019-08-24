int b1 = 8;
int b2 = 9;
int b3 = 10;
int b4 = 11;

int l1 = 2;
int l2 = 3;
int l3 = 4;
int l4 = 5;

void setup() {
  pinMode(b1,INPUT);
  pinMode(b2,INPUT);
  pinMode(b3,INPUT);
  pinMode(b4,INPUT);
  
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(l4,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if(digitalRead(b1) == HIGH && digitalRead(b2) == LOW && digitalRead(b3) == LOW && digitalRead(b4) == LOW)
  {
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    Serial.println("Favor de no apretar 3 botones al mismo tiempo.");
  }

  if(digitalRead(b1) == LOW && digitalRead(b2) == HIGH && digitalRead(b3) == LOW && digitalRead(b4) == LOW)
  {
    digitalWrite(l2, LOW);
    digitalWrite(l1, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    Serial.println("Favor de no apretar 3 botones al mismo tiempo.");
    
  }

  if(digitalRead(b1) == LOW && digitalRead(b2) == LOW && digitalRead(b3) == HIGH && digitalRead(b4) == LOW)
  {
    digitalWrite(l3, LOW);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l4, LOW);
    Serial.println("Favor de no apretar 3 botones al mismo tiempo.");
  }
  
  if(digitalRead(b1) == LOW && digitalRead(b2) == LOW && digitalRead(b3) == LOW && digitalRead(b4) == HIGH)
  {
    digitalWrite(l4, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l1, LOW);
    Serial.println("Favor de no apretar 3 botones al mismo tiempo.");
  }
  

  
  if(digitalRead(b1) == HIGH && digitalRead(b2) == HIGH && digitalRead(b3) == LOW && digitalRead(b4) == LOW)
  {
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
    Serial.println("Prenden C y D, (abajo-izquierda)");
  }

  if(digitalRead(b1) == HIGH && digitalRead(b2) == LOW && digitalRead(b3) == LOW && digitalRead(b4) == HIGH)
  {
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    Serial.println("Prenden B y C, (derecha-abajo)");
  }

  if(digitalRead(b1) == LOW && digitalRead(b2) == HIGH && digitalRead(b3) == HIGH && digitalRead(b4) == LOW)
  {
    digitalWrite(l1, HIGH);
    digitalWrite(l4, HIGH);
    Serial.println("Prenden A y D, (arriba-izquierda)");
  }

  if(digitalRead(b1) == LOW && digitalRead(b2) == LOW && digitalRead(b3) == HIGH && digitalRead(b4) == HIGH)
  {
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    Serial.println("Prenden A y B, (arriba-derecha)");
  }



  if(digitalRead(b1) == HIGH && digitalRead(b2) == LOW && digitalRead(b3) == HIGH && digitalRead(b4) == LOW)
  {
    Serial.println("Por favor no apretar boton 2 y 4 al mismo tiempo, todos se apagan");
    digitalWrite(l2, LOW);
    digitalWrite(l4, LOW);
    digitalWrite(l1, LOW);
    digitalWrite(l3, LOW);
  }

  if(digitalRead(b1) == LOW && digitalRead(b2) == HIGH && digitalRead(b3) == LOW && digitalRead(b4) == HIGH)
  {
    Serial.println("Por favor no apretar boton 1 y 3 al mismo tiempo, todos apagan");
    digitalWrite(l2, LOW);
    digitalWrite(l4, LOW);
    digitalWrite(l1, LOW);
    digitalWrite(l3, LOW);
  }

  if(digitalRead(b1) == LOW && digitalRead(b2) == HIGH && digitalRead(b3) == HIGH && digitalRead(b4) == HIGH)
  {
    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    Serial.println("Apreto boton A (arriba)");
  }

  if(digitalRead(b1) == HIGH && digitalRead(b2) == LOW && digitalRead(b3) == HIGH && digitalRead(b4) == HIGH)
  {
    digitalWrite(l1, LOW);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    Serial.println("Apreto boton B (derecha)");
  }

  if(digitalRead(b1) == HIGH && digitalRead(b2) == HIGH && digitalRead(b3) == LOW && digitalRead(b4) == HIGH)
  {
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, LOW);
    Serial.println("Apreto boton C (abajo)");
  }

  if(digitalRead(b1) == HIGH && digitalRead(b2) == HIGH && digitalRead(b3) == HIGH && digitalRead(b4) == LOW)
  {
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    Serial.println("Apreto boton D (izquierda)");
  }
  
}
