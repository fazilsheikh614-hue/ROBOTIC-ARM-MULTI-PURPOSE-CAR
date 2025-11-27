//LINE FOLLOWING

void runLineFollower() {
while (true) { // Continuous loop for line-following mode
bool value1 = digitalRead(S1);
bool value2 = digitalRead(S2);
if (value1 == 0 && value2 == 0) {
motor1.run(FORWARD);
motor2.run(FORWARD);
} else if (value1 == 1 && value2 == 1) {
motor1.run(RELEASE);
motor2.run(RELEASE);
} else if (value1 == 1 && value2 == 0) {
motor1.run(BACKWARD);
motor2.run(FORWARD);
} else if (value1 == 0 && value2 == 1) {

motor1.run(FORWARD);
motor2.run(BACKWARD);
}
int distance = obstacle(); // Check obstacle
if (distance <= 9) {
break; // Exit loop if an obstacle is detected
}
}
}