#ifndef IRTransmitter_h
#define IRTransmitter_h

#include <Arduino.h>

/**
    Send IR codes to remote devices
*/
class IRTransmitter {
    public:
    
        IRTransmitter(int IRledPin);
        
        /**
        * This procedure sends a 38KHz pulse to the IRledPin 
        * for a certain # of microseconds. We'll use this whenever we need to send codes
        */
        void pulseIR(long wait, long microsecs);

    protected:
        //Pin of transmitter
        int _IRledPin;

};
#endif
