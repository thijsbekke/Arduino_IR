
#ifndef IRLight_h
#define IRLight_h

#include "IRTransmitter.h"

/**
    Send IR codes to remote devices
*/
class IRLight : public IRTransmitter {
    public:

        IRLight(int IRledPin);

        /**
        * Send on signal to the TV
        */
        void on();
        /**
        * Send off signal to the TV
        */
        void off();
        /**
        * Send bright command
        */
        void bright();
        /**
        * Send darker command
        */
        void darker();
        /**
        * Send sed signal
        */
        void red();
        void green();
        void blue();
        void white();
        void tomato();
        void dark_orange();
        void orange();
        void yellow();
        void lime();
        void cyan();
        void turquoise();
        void dark_turquoise();
        void royal_blue();
        void dark_violet();
        void purple();
        void pink();
        void flash();
        void strobe();
        void fade();
        void smooth();


};
#endif
