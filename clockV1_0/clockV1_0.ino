int led1 = 13;
int status1 = LOW;
int led2 = 12;
int status2 = LOW;
int led3 = 11;
int status3 = LOW;
int led4 = 10;
int status4 = LOW;
int led5 = 9;
int status5 = LOW;

int led = 1;
unsigned long previousMillis=0;
unsigned long intervall = 1000;

int sec = 0, minute = 0, hour = 0;
int prevsec=0;

void setup(){
  pinMode (led1,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (led3,OUTPUT);
  pinMode (led4,OUTPUT);
  pinMode (led5,OUTPUT);
}

void loop(){
  unsigned long currentMillis = millis();
  
  if (currentMillis - previousMillis > intervall){
    previousMillis = currentMillis;
    sec++; 
  }
 // First LED
  if (sec - 1 == prevsec){
    if(!(sec%1)){
      digitalWrite(led1,!status1);
      status1=!status1;
    }
// second LED
    if(!(sec%2)){
      digitalWrite(led2,!status2);
      status2 = !status2;
    }
 // third LED   
    if(!(sec%4)){
      digitalWrite(led3,!status3);
      status3=!status3;
    }
 // fourth LED
 
     if(!(sec%8)){
      digitalWrite(led4,!status4);
      status4 = !status4;
    }
 // fifth LED
     if(!(sec%16)){
      digitalWrite(led5,!status5);
      status5=!status5;
    } 
  prevsec = sec;
  }

}
