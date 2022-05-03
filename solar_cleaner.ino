int motor_xx=4;
int motor_xy=5;
int motor_yx=6;
int motor_yy=7;
int motor_pump=8;
int motor_brush=9;
int main_trigger=10;

void setup() {
   pinMode(motor_xx,OUTPUT);
   pinMode(motor_xy,OUTPUT);
   pinMode(motor_yx,OUTPUT);
   pinMode(motor_yy,OUTPUT);
   pinMode(motor_pump,OUTPUT);
   pinMode(motor_brush,OUTPUT);
   pinMode(main_trigger,INPUT);
}

void loop() {
  if(main_trigger==HIGH);
  digitalWrite(motor_xx,LOW);
  digitalWrite(motor_xy,HIGH);
  digitalWrite(motor_yx,LOW);
  digitalWrite(motor_yy,HIGH);
  digitalWrite(motor_pump,HIGH);
  digitalWrite(motor_brush,HIGH);
  delay(10000);
  digitalWrite(motor_xx,HIGH);
  digitalWrite(motor_xy,LOW);
  digitalWrite(motor_yx,HIGH);
  digitalWrite(motor_yy,LOW);
  digitalWrite(motor_pump,LOW);
  digitalWrite(motor_brush,LOW);
  delay(10000);
  digitalWrite(motor_xx,LOW);
  digitalWrite(motor_xy,LOW);
  digitalWrite(motor_yx,LOW);
  digitalWrite(motor_yy,LOW);
  else{
  digitalWrite(motor_xx,LOW);
  digitalWrite(motor_xy,LOW);
  digitalWrite(motor_yx,LOW);
  digitalWrite(motor_yy,LOW);
  digitalWrite(motor_pump,LOW);
  digitalWrite(motor_brush,LOW);
  }
  
     
 
}
