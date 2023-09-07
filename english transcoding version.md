-Arduino-Beginner-Project-Description-

#define active_led 8

//With the define command here, we specify that the active_led name is the led connected to port 8.

void setup() {

// Install the code here before running
// void setup(){ starts the code prompt and closes it with "}" at the end of the code.
  
pinMode(active_led,OUTPUT);

// With pinMode(active_led,OUTPUT);, we specify ";" with semicolon connected to the active_led.port(output/input) pin.

}

void loop() {

 // void loop() is a repetition of the operation, after writing this we connect the code prompt to a specific loop.

digitalWrite(active_led,HIGH);
delay(500);
digitalWrite(active_led,LOW);
delay(500);

// We write the main code here and when we run it, it loops in itself.
// digitalWrite(active_led,HIGH); we send high flow to active_led.pin and turn on the led 
// delay(100); indicates how many ms it lights up.
// digitalWrite(active_led,LOW); operation, we send low voltage to active_led "pin 8" and turn off the led.
// when we do delay(100); again, we see how many ms it goes out and the process repeats until the code terminates the prompt.

}
// Make sure you are properly connected to the Arduino Uno, resistor, pin and the board we are working with.
// Connect another jumper cable to the "GND" pin opposite to the pin you connected the jumper cable to. 
