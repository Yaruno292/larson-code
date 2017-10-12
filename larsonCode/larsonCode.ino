int i = 13;
int cooldown = 50;
int led = i;

int g = 0;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);
  delay(cooldown);
  digitalWrite(led, LOW);
  delay(cooldown);

  if(i > 4 && g == 0){
    i = i - 1;
  }
  
  if(i < 13 && g == 1){
    i = i + 1;
  }
  if(i == 13){
    g = 0;
  }
  if(i == 4){
    g = 1;
  }
  
  led = i;
}

