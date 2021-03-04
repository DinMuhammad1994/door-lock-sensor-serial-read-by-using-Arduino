//Engr Din Muhammad
//www.projexels.com

const int LED = 13; 
const int sensor = 4;

int state; // 0 close - 1 open wwitch

void setup()
{
  Serial.begin(9600);
  Serial.print("start");
  pinMode(sensor, INPUT_PULLUP);
}

void loop()
{
  state = digitalRead(sensor);
  
  if (state == HIGH){
    digitalWrite(LED, HIGH);
    Serial.println("DOOR OPEN ");
  }
  else{
   digitalWrite(LED, LOW);
    Serial.println("DOOR LOCK ");
  }
  delay(2000);
}
