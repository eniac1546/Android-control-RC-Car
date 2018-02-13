
int motor_pin1 = 5;
int motor_pin2 = 6;
int motor_pin3 = 7;
int motor_pin4 = 8;

int state;




void setup() { 
  pinMode(motor_pin1,OUTPUT);
  pinMode(motor_pin2,OUTPUT);
  pinMode(motor_pin3,OUTPUT);
  pinMode(motor_pin4,OUTPUT); 
 
  Serial.begin(9600);
 }

 void loop() {
  
   if(Serial.available() > 0){     
      state = Serial.read();   
    }  
   
    if (state == 'F') { 
      digitalWrite(motor_pin1,HIGH);       
      digitalWrite(motor_pin2,LOW);    
      digitalWrite(motor_pin3,HIGH);
      digitalWrite(motor_pin4,LOW);
      digitalWrite(3, HIGH); 
      {
        Serial.println("Go Forward!");
      }
      }
      if (state == 'B') { 
      digitalWrite(motor_pin1,LOW);       
      digitalWrite(motor_pin2,HIGH);    
      digitalWrite(motor_pin3,LOW);
      digitalWrite(motor_pin4,HIGH);
      {
        Serial.println("BACK");
      }
      }
       if (state == 'L') { 
     digitalWrite(motor_pin1,LOW);       
      digitalWrite(motor_pin2,LOW);    
      digitalWrite(motor_pin3,HIGH);
      digitalWrite(motor_pin4,LOW);

      {
        Serial.println("LEFT");
      }
      }
      if (state == 'R') { 
      digitalWrite(motor_pin1,HIGH);       
      digitalWrite(motor_pin2,LOW);    
      digitalWrite(motor_pin3,LOW);
      digitalWrite(motor_pin4,LOW);
      {
        Serial.println("RIGHT");
      }
      }
      if (state == 'S') { 
      digitalWrite(motor_pin1,LOW);       
      digitalWrite(motor_pin2,LOW);    
      digitalWrite(motor_pin3,LOW);
      digitalWrite(motor_pin4,LOW);
      digitalWrite(3, LOW); 
      {
        Serial.println("STOP");
      }
      }
      
 }

