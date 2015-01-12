#ifndef IRReceiver_h
#define IRReceiver_h

#include <Arduino.h>

/**
    Display IR codes from remote devices
*/
class IRReceiver {
    public:
    
        IRReceiver(int IRPin);
        
        /**
        * This procedure sends a 38KHz pulse to the IRledPin 
        * for a certain # of microseconds. We'll use this whenever we need to send codes
        */
        void read(void);

        

    protected:
        void printpulses(void) ;

        //Pin of transmitter
        int _IRReceiverPin;
        int _RawIRReceiverPin;
        
        int _Resolution;
        int _MaxPulse;

       



};
#endif
