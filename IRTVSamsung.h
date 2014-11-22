#ifndef IRTVSamsung_h
#define IRTVSamsung_h

#include "IRTransmitter.h"

/**
    Send IR codes to remote devices
*/
class IRTVSamsung : public IRTransmitter {
    public:

        IRTVSamsung(int IRledPin);

        /**
        * Send on signal to the TV
        */
        void on();
        /**
        * Send off signal to the TV
        */
        void off();
        /**
        * Send volume up
        */
        void volume_up();
        /**
        * Send volume down
        */
        void volume_down();
        /**
        * Send mute signal
        */
        void mute();
        
    protected:
        void _power_toggle();    
};
#endif
