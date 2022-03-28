// We define MY_LED to be the LED that we want to blink. 
//
// In this tutorial, we're using the blue D7 LED (next to D7 on the Photon 
// and Electron, and next to the USB connector on the Argon and Boron).
const pin_t MY_LED = D7;

// The following line is optional, but recommended in most firmware. It 
// allows your code to run before the cloud is connected. In this case, 
// it will begin blinking almost immediately instead of waiting until 
// breathing cyan,
SYSTEM_THREAD(ENABLED);

// The setup() method is called once when the device boots.

int ledToggle(String command)
{
    if (command.equals("on"))
    {
        digitalWrite(MY_LED, HIGH);
        return 1;
    }
    else if (command.equals("off"))
    {
        digitalWrite(MY_LED, LOW);
        return 0;
    }
    else
    {
        // Unknown option
        return -1;
    }
}

// The setup() method is called once when the device boots.
void setup()
{
    // In order to set a pin, you must tell Device OS that the
    // pin is an OUTPUT pin.
    // This is often done from setup() since you only need to
    // do it once.
    pinMode(MY_LED, OUTPUT);

    // This registers a function call. When the function "led"
    // is called from the cloud, the ledToggle() function above
    // will be called.
    Particle.function("led", ledToggle);
}

// The loop() method is called frequently.
void loop() {

    /* First signal 'L'
    * Morse code for S is - -- - -
    * that is, one short blink, one long blink and two short blinks.
    */
	// Turn on the LED
	digitalWrite(MY_LED, HIGH);
	// Leave it on for one second
	delay(30s);
	// Turn it off
	digitalWrite(MY_LED, LOW);
	// Wait one more second
	delay(1000s);
	
	// Turn on the LED
	digitalWrite(MY_LED, HIGH);
	// Leave it on for one second
	delay(80s);
	// Turn it off
	digitalWrite(MY_LED, LOW);
	// Wait one more second
	delay(1000s);
	
	// Turn on the LED
	digitalWrite(MY_LED, HIGH);
	// Leave it on for one second
	delay(30s);
	// Turn it off
	digitalWrite(MY_LED, LOW);
	// Wait one more second
	delay(1000s);
	
	// Turn on the LED
	digitalWrite(MY_LED, HIGH);
	// Leave it on for one second
	delay(30s);
	// Turn it off
	digitalWrite(MY_LED, LOW);
	// Wait one more second
	delay(1000s);

	// And repeat!
	
	 /* First signal 'I'
    * Morse code for S is - -
    * that is, two short blinks.
    */
	// Turn on the LED
	digitalWrite(MY_LED, HIGH);
	// Leave it on for one second
	delay(30s);
	// Turn it off
	digitalWrite(MY_LED, LOW);
	// Wait one more second
	delay(1000s);
	
	// Turn on the LED
	digitalWrite(MY_LED, HIGH);
	// Leave it on for one second
	delay(30s);
	// Turn it off
	digitalWrite(MY_LED, LOW);
	// Wait one more second
	delay(1000s);
	
	// And repeat!
	
	 /* First signal 'N'
    * Morse code for S is -- -
    * that is, one long blink and one short blinks.
    */
	// Turn on the LED
	digitalWrite(MY_LED, HIGH);
	// Leave it on for one second
	delay(80s);
	// Turn it off
	digitalWrite(MY_LED, LOW);
	// Wait one more second
	delay(1000s);
	
	// Turn on the LED
	digitalWrite(MY_LED, HIGH);
	// Leave it on for one second
	delay(30s);
	// Turn it off
	digitalWrite(MY_LED, LOW);
	// Wait one more second
	delay(1000s);

	// And repeat!
}
