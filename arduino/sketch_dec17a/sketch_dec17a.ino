#define STEP_PER_PRESS 100
uint32_t SAMPLING_RATE = 10;
#define CLOCK_SPEED 72000000
void spin_motor_cw(void) {
  for (int i = 0; i < STEP_PER_PRESS; i++) {

    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    delay(SAMPLING_RATE);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    delay(SAMPLING_RATE);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    delay(SAMPLING_RATE);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    delay(SAMPLING_RATE);
  }
}

void spin_motor_ccw(void) {
  for (int i = 0; i < STEP_PER_PRESS; i++) {
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    delay(SAMPLING_RATE);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    delay(SAMPLING_RATE);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    delay(SAMPLING_RATE);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    delay(SAMPLING_RATE);
  }
}

void release_motor(void) {

  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}


void setup() {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  spin_motor_cw();
  spin_motor_ccw();
}
