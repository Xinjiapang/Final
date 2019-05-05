int l1 = 2;
int l2 = 3;
int l3 = 4;
int l4 = 5;
int l5 = 6;

// ledpin and soundpin are not changed throughout the process
const int soundpin = A2;
const int threshold = 532; // sets threshold value for sound sensor

void setup() {
  Serial.begin(9600);
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
     
  pinMode(soundpin, INPUT);
}


void loop() {
  int soundsens = analogRead(soundpin); // reads analog data from sound sensor

  Serial.print("0 1024 ");
  Serial.println(soundsens);

  if (soundsens > 100) {
    digitalWrite(l1, HIGH);
  } else {
    digitalWrite(l1, LOW);  
  }

  if (soundsens > 200) {
    digitalWrite(l2, HIGH);
  } else {
    digitalWrite(l2, LOW);  
  }

  if (soundsens > 300) {
    digitalWrite(l3, HIGH);
  } else {
    digitalWrite(l3, LOW);  
  }

   if (soundsens > 400) {
    digitalWrite(l4, HIGH);
  } else {
    digitalWrite(l4, LOW);  
  }

  if (soundsens > 500) {
    digitalWrite(l5, HIGH);
  } else {
    digitalWrite(l5, LOW);  
  }
}
