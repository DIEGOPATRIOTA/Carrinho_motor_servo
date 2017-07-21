/**
 * Projetos Arduino
 * 
 * @author diego patriota
 * @link https://github.com/diegopatriota
 * 19/05/2016 
 */

//Inclusão de biblioteca
#include <Servo.h> 
 
Servo motor1,motor2;  
                
//Variáveis 
int pos = 0;    
int pos2 = 180;
int led1 = 5;

//configuração inicial
void setup() 
{ 
  motor1.attach(9);  
  motor2.attach(10);
  pinMode (5, OUTPUT),
} 
 
//Loop para execução de funcionalidade 
void loop() 
{ 
  
  for(pos = 0, pos2= 180; pos < 90; pos += 1, pos2 -=1)  
  {
      
    motor1.write(pos);
    motor2.write(pos2); 
    delay(30);
    
  }
  
  for(pos = 0, pos2= 180; pos < 90; pos += 1, pos2 -=1)  
  {
      
    motor2.write(pos2); 
    delay(30);
    
  }
 
} 
