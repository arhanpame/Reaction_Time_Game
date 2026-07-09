int whiteLED1 = 12;
int greenLED = 11;
int yellowLED = 10;
int redLED = 9;
int whiteLED2 = 8;

int buzzer = 7;

int button1 = 13;
int button2 = 6;

bool buttonPressed = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(whiteLED1, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(whiteLED2, OUTPUT);

  pinMode(buzzer, OUTPUT);

  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);

  randomSeed(analogRead(A0));
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenLED, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(900);
  digitalWrite(greenLED, LOW);

  digitalWrite(yellowLED, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(900);
  digitalWrite(yellowLED, LOW);

  digitalWrite(redLED, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(random(900,4901));
  digitalWrite(redLED, LOW);

  while (buttonPressed == 0) {
  digitalWrite(whiteLED1, HIGH);
  digitalWrite(whiteLED2, HIGH);
  if (digitalRead(button1) == 0) {
    buttonPressed = 1;
    digitalWrite(whiteLED2, LOW);
  } else if (digitalRead(button2) == 0){
    buttonPressed = 1;
    digitalWrite(whiteLED1, LOW);
  }
}
digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);
  delay(1500);
  digitalWrite(whiteLED1, LOW);
  digitalWrite(whiteLED2, LOW);
  buttonPressed = 0;
}

