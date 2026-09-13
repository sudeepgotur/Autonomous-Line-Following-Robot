#define LEFT_SENSOR 2
#define RIGHT_SENSOR 3

#define ENA 5
#define ENB 6

#define IN1 8
#define IN2 9
#define IN3 10
#define IN4 11

int baseSpeed = 140;   // normal speed (adjust 120–160)
int turnSpeed = 90;    // slow wheel during turning

void setup() {
  pinMode(LEFT_SENSOR, INPUT);
  pinMode(RIGHT_SENSOR, INPUT);

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  int left = digitalRead(LEFT_SENSOR);
  int right = digitalRead(RIGHT_SENSOR);

  if (left == LOW && right == LOW) {
    forward();
  }
  else if (left == HIGH && right == LOW) {
    turnLeft();
  }
  else if (left == LOW && right == HIGH) {
    turnRight();
  }
  else {
    stopRobot();
  }
}

void forward() {
  analogWrite(ENA, baseSpeed);
  analogWrite(ENB, baseSpeed);

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
}

void turnLeft() {
  analogWrite(ENA, 195);
  analogWrite(ENB, 180);

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
}

void turnRight() {
  analogWrite(ENA, 195);
  analogWrite(ENB, 180);

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
}

void stopRobot() {
  analogWrite(ENA,0);
  analogWrite(ENB,0);
}
