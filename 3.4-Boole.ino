/* This sketch will be used to create a cycle where three lights turn
on in sequence and the Serial monitor displays the status of those 
lights. */

// Initialize variables

int x = 1;
int y;

void setup()
{
    // Start Serial Moniter and set up pins
    Serial.begin(9600);
    pinMode (7,OUTPUT);
    pinMode (8, OUTPUT);
    pinMode (9,OUTPUT);
       pinMode (10,OUTPUT);
    
    while (x < 4) {
        // Display the cycle number in the Serial Monitor
        Serial.print("Cycle no ");
        Serial.println(x);
        
        // Turn on each LED in sequence
        digitalWrite (x + 6,HIGH);
             // Fade LED from 0 to full power over one second
    for (y = 0; y < 256;y=y+1 ){
        analogWrite (10, y);
        delay (4);
    }
    
    // Fade LED from full power to 0 over one second
    for (y = 255; y > 0; y = y - 1){
        analogWrite (10, y);
        delay (4);
       
   
    }
     x = x + 1;
    }
}
    
        
    
 
   
    

    
    void loop () {
      
      
    }



