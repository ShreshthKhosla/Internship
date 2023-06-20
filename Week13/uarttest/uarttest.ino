void setup() {
  // Initialize Serial Monitor for debugging
  Serial1.begin(11520); 
  Serial.begin(11520); 
  pinMode(LED_BUILTIN, OUTPUT);  // Configure built-in LED pin as output
}

void loop() {
 if (Serial1.available()) {
   
      digitalWrite(LED_BUILTIN, HIGH);  // Turn on the built-in LED
           Serial.println("LED turned on!");
    }
   }
   else {
    Serial.println("Nothing");
  }
}
