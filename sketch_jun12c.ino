#define PIN_NUM 2//人体，高=有人
#define PIN_D 2//光敏，高于（亮）设定值，低电平；低于（暗）设定值，高电平

void setup()  {
  Serial.begin(9600);
  pinMode(PIN_NUM,INPUT);
}

void loop()  {

int val;
val=digitalRead(PIN_D);

  if(digitalRead(PIN_NUM)==HIGH&&val<=99){
    Serial.println("Someone here!");//lights up
  }   
  else {
    Serial.println("Nobody");//lights down
  }
  delay(1000);
}
