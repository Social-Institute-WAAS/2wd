//Definicoes pinos Arduino ligados a entrada da Ponte H
int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;
 
void setup()
{
  //Define os pinos como saida
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);

 Serial.begin(9600);
}
 
void loop()
{
  char tecla = Serial.read();

  switch (tecla){

  case 'f': 
  Serial.println("FRENTE");
 
    case 't':
  Serial.println("TRÁS");
  
    case 'd':
  Serial.println("DIREITA");
  
    case 'e':
  Serial.println("ESQUERDA");
  
    case 'a':
  Serial.println("FREIO MOTORES");
  
    }
}


