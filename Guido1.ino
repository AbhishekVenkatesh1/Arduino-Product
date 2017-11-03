
#include <MIDI.h>
#include <SoftwareSerial.h>

const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int buttonPin4 = 5;
const int buttonPin5 = 6;
const int buttonPin6 = 7;
const int buttonPin7 = 8;
const int buttonPin8 = 9;
const int buttonPin9 = 10;
const int buttonPin10 = 11;
const int buttonPin11 = 12;  
const int ledPin = 13;

int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;
int buttonState7 = 0;
int buttonState8 = 0;
int buttonState9 = 0;
int buttonState10 = 0;
int buttonState11 = 0;

boolean retrigger1 = false;
boolean retrigger2 = false;
boolean retrigger3 = false;
boolean retrigger4 = false;
boolean retrigger5 = false;
boolean retrigger6 = false;
boolean retrigger7 = false;
boolean retrigger8 = false;
boolean retrigger9 = false;
boolean retrigger10 = false;
boolean retrigger11 = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(31250);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
  pinMode(buttonPin6, INPUT);
  pinMode(buttonPin7, INPUT);
  pinMode(buttonPin8, INPUT);
  pinMode(buttonPin9, INPUT);
  pinMode(buttonPin10, INPUT);
  pinMode(buttonPin11, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);
  buttonState5 = digitalRead(buttonPin5);
  buttonState6 = digitalRead(buttonPin6);
  buttonState7 = digitalRead(buttonPin7);
  buttonState8 = digitalRead(buttonPin8);
  buttonState9 = digitalRead(buttonPin9);
  buttonState10 = digitalRead(buttonPin10);
  buttonState11 = digitalRead(buttonPin11);
  
  if ((buttonState1 == HIGH) && (retrigger1 == false)) {
    noteOn(0x90, 55, 0x45);
    retrigger1 = true;
  } else if (buttonState1 == LOW) {
    noteOn(0x90, 55, 0x00);
    retrigger1 = false;
  }
  
  if ((buttonState2 == HIGH) && (retrigger2 == false)) {
    noteOn(0x90, 57, 0x45);
    retrigger2 = true;
  } else if (buttonState2 == LOW) {
    noteOn(0x90, 57, 0x00);
    retrigger2 = false;
  }

  if ((buttonState3 == HIGH) && (retrigger3 == false)) {
    noteOn(0x90, 59, 0x45);
    retrigger3 = true;
  } else if (buttonState3 == LOW) {
    noteOn(0x90, 59, 0x00);
    retrigger3 = false;
  }

  if ((buttonState4 == HIGH) && (retrigger4 == false)) {
    noteOn(0x90, 60, 0x45);
    retrigger4 = true;
  } else if (buttonState4 == LOW) {
    noteOn(0x90, 60, 0x00);
    retrigger4 = false;
  }

  if ((buttonState5 == HIGH) && (retrigger5 == false)) {
    noteOn(0x90, 62, 0x45);
    retrigger5 = true;
  } else if (buttonState5 == LOW) {
    noteOn(0x90, 62, 0x00);
    retrigger5 = false;
  }

  if ((buttonState6 == HIGH) && (retrigger6 == false)) {
    noteOn(0x90, 64, 0x45);
    retrigger6 = true;
  } else if (buttonState6 == LOW) {
    noteOn(0x90, 64, 0x00);
    retrigger6 = false;
  }

  if ((buttonState7 == HIGH) && (retrigger7 == false)) {
    noteOn(0x90, 65, 0x45);
    retrigger7 = true;
  } else if (buttonState7 == LOW) {
    noteOn(0x90, 65, 0x00);
    retrigger7 = false;
  }

  if ((buttonState8 == HIGH) && (retrigger8 == false)) {
    noteOn(0x90, 67, 0x45);
    retrigger8 = true;
  } else if (buttonState8 == LOW) {
    noteOn(0x90, 67, 0x00);
    retrigger8 = false;
  }

  if ((buttonState9 == HIGH) && (retrigger9 == false)) {
    noteOn(0x90, 69, 0x45);
    retrigger9 = true;
  } else if (buttonState9 == LOW) {
    noteOn(0x90, 69, 0x00);
    retrigger9 = false;
  }

  if ((buttonState10 == HIGH) && (retrigger10 == false)) {
    noteOn(0x90, 71, 0x45);
    retrigger10 = true;
  } else if (buttonState10 == LOW) {
    noteOn(0x90, 71, 0x00);
    retrigger10 = false;
  }

  if ((buttonState11 == HIGH) && (retrigger11 == false)) {
    noteOn(0x90, 72, 0x45);
    retrigger11 = true;
  } else if (buttonState11 == LOW) {
    noteOn(0x90, 72, 0x00);
    retrigger11 = false;
  }
  
  /*
  for (int note = 0x1E; note < 0x5A; note ++) {
    //Note on channel 1 (0x90), some note value (note), middle velocity (0x45):
    noteOn(0x90, note, 0x45);
    delay(100);
    //Note on channel 1 (0x90), some note value (note), silent velocity (0x00):
    noteOn(0x90, note, 0x00);
    delay(100);
  */
}

void noteOn(int cmd, int pitch, int velocity) {
  Serial.write(cmd);
  Serial.write(pitch);
  Serial.write(velocity);
}


/*
// Alternative Code

byte numberButtons = 8;

Button BU1(2, 0, 55, 1, 5);
Button BU2(3, 0, 57, 1, 5);
Button BU3(4, 0, 59, 1, 5);
Button BU4(5, 0, 60, 1, 5);
Button BU5(6, 0, 62, 1, 5);
Button BU6(7, 0, 64, 1, 5);
Button BU7(8, 0, 65, 1, 5);
Button BU8(9, 0, 67, 1, 5);
Button BU9(10, 0, 69, 1, 5);
Button BU10(11, 0, 70, 1, 5);
Button BU11(12, 0, 71, 1, 5);
*/


