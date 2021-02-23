int i = 0;
int j = 0;
//void counter(); 
int num [10][7] = {
  {1,1,1,1,1,1,0},//0
  {0,1,1,0,0,0,0},//1
  {1,1,0,1,1,0,1},//2
  {1,1,1,1,0,0,1},//3
  {0,1,1,0,0,1,1},//4
  {1,0,1,1,0,1,1},//5
  {1,0,1,1,1,1,1},//6
  {1,1,1,0,0,0,0},//7
  {1,1,1,1,1,1,1},//8
  {1,1,1,0,0,1,1},//9
};
    
void setup()
{
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
 
//while(Serial.available() ==0){}
  //int op=Serial.parseInt();
  //Serial.println(op);
  int push1= digitalRead(10);
  int push2= digitalRead(11);
  //Serial.println("puch1 on Screen");
  //Serial.println("puch2 on Screen");
  
  if(push1==1 && push2==0){
    counter ();}
  else if(push2==1 && push1==0){
    //while (true){
      user_input();}
  //while (Serial.available()==0){}
  //Serial.print("Press again");
  //while (Serial.available()==0){}
  
}
void counter (){
    i=0;
  
  for (i=0; i<10; i++){
    int pin = 3;
    
    for (j=0; j<8; j++){
      digitalWrite(pin, num[i][j]);
      pin++;
    }
     delay(2000); 
  }Serial.println("Press again");
}
void user_input(){
  
  int n;
  Serial.println("Enter Number (1-9)");
  while(Serial.available() ==0){}
  n=Serial.parseInt();
  Serial.println(n);
  int pin=3;
  for (j=0; j<8; j++){
      digitalWrite(pin, num[n][j]);
    pin++;
  }delay(2000);
  Serial.println("Press again");
}
