/*
 * IR library v1.0.0 (20141122) made by Thijs Bekke https://github.com/thijsbekke
 * See IRReceiver.h for details.
 * Fork of https://github.com/adafruit/Nikon-Intervalometer 
 * License: GPLv3. See license.txt
 */

#include "IRReceiver.h"

#define IRpin_PIN      PIND
#define IRpin          2

// the maximum pulse we'll listen for - 65 milliseconds is a long time
#define MAXPULSE 65000
 
// what our timing resolution should be, larger is better
// as its more 'precise' - but too large and you wont get
// accurate timing
#define RESOLUTION 20 
 
uint16_t pulses[100][2];  // pair is high and low pulse 
uint8_t currentpulse ; // index for pulses we're storing


IRReceiver::IRReceiver(int IRledPin) {
    _IRReceiverPin = IRledPin;
    // pinMode(_IRReceiverPin, INPUT); 
}

void IRReceiver::read() {
    Serial.println("Start reading");
    while(true) {
        uint16_t highpulse, lowpulse;  // temporary storage timing
        highpulse = lowpulse = 0; // start out with no pulse length


        //  while (digitalRead(IRpin)) { // this is too slow!
        while (IRpin_PIN & (1 << IRpin)) {
            // pin is still HIGH

            // count off another few microseconds
            highpulse++;
            delayMicroseconds(RESOLUTION);

            // If the pulse is too long, we 'timed out' - either nothing
            // was received or the code is finished, so print what
            // we've grabbed so far, and then reset
            if ((highpulse >= MAXPULSE) && (currentpulse != 0)) {
                printpulses();
                currentpulse=0;
                return;
            }
        }
        // we didn't time out so lets stash the reading
        pulses[currentpulse][0] = highpulse;

        // same as above
        while (! (IRpin_PIN & _BV(IRpin))) {
            // pin is still LOW
            lowpulse++;
            delayMicroseconds(RESOLUTION);
            if ((lowpulse >= MAXPULSE)  && (currentpulse != 0)) {
                printpulses();
                currentpulse=0;
                return;
            }
        }
        pulses[currentpulse][1] = lowpulse;

        // we read one high-low pulse successfully, continue!
        currentpulse++;
    }

}


void IRReceiver::printpulses() {
    Serial.println("\n\r\n\rReceived: \n\rOFF \tON");
    for (uint8_t i = 0; i < currentpulse; i++) {
        Serial.print(pulses[i][0] * RESOLUTION, DEC);
        Serial.print(" usec, ");
        Serial.print(pulses[i][1] * RESOLUTION, DEC);
        Serial.println(" usec");
    }

}

