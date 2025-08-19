// Bluetooth Controlled Car
// Connections:
// HC-05 TX → Arduino RX (pin 0)
// HC-05 RX → Arduino TX (pin 1)
// L298N IN1 → 9, IN2 → 8, IN3 → 7, IN4 → 6

// Motor driver pins
int motor1Pin1 = 9; 
int motor1Pin2 = 8; 
int motor2Pin1 = 7; 
int motor2Pin2 = 6;

char command; // stores received command

void setup() {
  // Set motor pins as output
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);

  // Start serial communication with Bluetooth module
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.read(); // read the incoming command
    
    // Movement controls
    if (command == 'F') { // Forward
      digitalWrite(motor1Pin1, HIGH);
      digitalWrite(motor1Pin2, LOW);
      digitalWrite(motor2Pin1, HIGH);
      digitalWrite(motor2Pin2, LOW);
    }
    else if (command == 'B') { // Backward
      digitalWrite(motor1Pin1, LOW);
      digitalWrite(motor1Pin2, HIGH);
      digitalWrite(motor2Pin1, LOW);
      digitalWrite(motor2Pin2, HIGH);
    }
    else if (command == 'L') { // Left
      digitalWrite(motor1Pin1, LOW);
      digitalWrite(motor1Pin2, HIGH);
      digitalWrite(motor2Pin1, HIGH);
      digitalWrite(motor2Pin2, LOW);
    }
    else if (command == 'R') { // Right
      digitalWrite(motor1Pin1, HIGH);
      digitalWrite(motor1Pin2, LOW);
      digitalWrite(motor2Pin1, LOW);
      digitalWrite(motor2Pin2, HIGH);
    }
    else if (command == 'S') { // Stop
      digitalWrite(motor1Pin1, LOW);
      digitalWrite(motor1Pin2, LOW);
      digitalWrite(motor2Pin1, LOW);
      digitalWrite(motor2Pin2, LOW);
    }
  }
}
