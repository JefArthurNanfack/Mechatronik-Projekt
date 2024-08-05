 #include <Keypad.h>
 #include <SoftwareSerial.h>

     // Keypad setup
     const byte ROWS = 4; 
     const byte COLS = 4; 
     char keys[ROWS][COLS] = {
       {'1','2','3','A'},
       {'4','5','6','B'},
       {'7','8','9','C'},
       {'*','0','#','D'}
     };
     byte rowPins[ROWS] = {2, 3, 4, 5};
     byte colPins[COLS] = {6, 7, 8, 9};
     Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

     SoftwareSerial BTSerial(18, 19); 

     void setup() {
       Serial.begin(9600);    
       BTSerial.begin(9600);  
     }

     void loop() {
       char key = keypad.getKey();
       if (key) {
         Serial.println(key);   
         BTSerial.print(key);   
       }
     }
