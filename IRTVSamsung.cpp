
/*
 * IR library v1.0.0 (20141122) made by Thijs Bekke https://github.com/thijsbekke
 * See IRTVSamsung.h for details.
 *
 * License: GPLv3. See license.txt
 */

#include "IRTVSamsung.h"

IRTVSamsung::IRTVSamsung(int IRLedPin) : IRTransmitter(IRLedPin) {

}

void IRTVSamsung::_power_toggle()
{
    pulseIR(5732, 4440);
    pulseIR(4320, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
    pulseIR(1600, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(1600, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(1580, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(500, 600);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(1580, 620);
    pulseIR(480, 620);
    pulseIR(1580, 600);
    pulseIR(1600, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
    pulseIR(45760, 4440);
    pulseIR(4320, 600);
    pulseIR(1600, 600);
    pulseIR(1600, 600);
    pulseIR(1600, 600);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 620);
    pulseIR(480, 600);
    pulseIR(500, 620);
    pulseIR(480, 620);
    pulseIR(1580, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(1580, 600);
    pulseIR(500, 600);
    pulseIR(1600, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
    pulseIR(1600, 600);
}

void IRTVSamsung::on()
{
    _power_toggle();
}


/**
* Send off signal to the TV
*/
void IRTVSamsung::off()
{
    _power_toggle();
}


/**
* Send volume up
*/
void IRTVSamsung::volume_up()
{
    pulseIR(7812, 4440);
    pulseIR(4320, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
    pulseIR(1580, 620);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 620);
    pulseIR(480, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
    pulseIR(1580, 620);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(1600, 600);
    pulseIR(1600, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(1560, 620);
    pulseIR(45740, 4460);
    pulseIR(4320, 620);
    pulseIR(1580, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(500, 600);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 620);
    pulseIR(480, 620);
    pulseIR(1580, 600);
    pulseIR(1600, 600);
    pulseIR(1580, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(1600, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
    pulseIR(1600, 600);
    pulseIR(1600, 600);
}


/**
* Send volume down
*/
void IRTVSamsung::volume_down()
{
    pulseIR(53936, 4420);
    pulseIR(4360, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
    pulseIR(1600, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(480, 620);
    pulseIR(1580, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(1580, 620);
    pulseIR(480, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(45740, 4440);
    pulseIR(4340, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
    pulseIR(1600, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(1600, 600);
    pulseIR(1600, 600);
    pulseIR(1580, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(480, 620);
    pulseIR(1580, 600);
    pulseIR(500, 620);
    pulseIR(480, 600);
    pulseIR(500, 600);
    pulseIR(500, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(1580, 620);
    pulseIR(480, 620);
    pulseIR(1580, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
}


/**
* Send mute signal
*/
void IRTVSamsung::mute()
{
    pulseIR(40708, 4440);
    pulseIR(4340, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
    pulseIR(1600, 600);
    pulseIR(500, 600);
    pulseIR(500, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(1580, 600);
    pulseIR(1600, 600);
    pulseIR(1580, 620);
    pulseIR(500, 600);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
    pulseIR(1580, 620);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 620);
    pulseIR(480, 620);
    pulseIR(1580, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
    pulseIR(45760, 4440);
    pulseIR(4320, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
    pulseIR(1580, 620);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(1600, 600);
    pulseIR(1600, 600);
    pulseIR(1580, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
    pulseIR(1580, 620);
    pulseIR(480, 620);
    pulseIR(480, 620);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(500, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 620);
    pulseIR(1580, 600);
    pulseIR(1600, 600);
}



// pulseIR
