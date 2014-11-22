/*
 * IR library v1.0.0 (20141122) made by Thijs Bekke https://github.com/thijsbekke
 * See IRTransmitter.h for details.
 *
 * License: GPLv3. See license.txt
 */

#include "IRTransmitter.h"

 
IRTransmitter::IRTransmitter(int IRledPin) {
    _IRledPin = IRledPin;
    pinMode(_IRledPin, OUTPUT); 
}

void IRTransmitter::pulseIR(long wait, long microsecs) {

    delayMicroseconds(wait);

    // we'll count down from the number of microseconds we are told to wait
    cli();  // this turns off any background interrupts

    while (microsecs > 0)
    {
        // 38 kHz is about 13 microseconds high and 13 microseconds low
        digitalWrite(_IRledPin, HIGH);  // this takes about 3 microseconds to happen
        delayMicroseconds(10);         // hang out for 10 microseconds
        digitalWrite(_IRledPin, LOW);   // this also takes about 3 microseconds
        delayMicroseconds(10);         // hang out for 10 microseconds

        // so 26 microseconds altogether
        microsecs -= 26;
    }

    sei();  // this turns them back on
}

