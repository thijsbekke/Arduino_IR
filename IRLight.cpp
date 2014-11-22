
/*
 * IR library v1.0.0 (20141122) made by Thijs Bekke https://github.com/thijsbekke
 * See IRLight.h for details.
 *
 * License: GPLv3. See license.txt
 */

#include "IRLight.h"

IRLight::IRLight(int IRLedPin) : IRTransmitter(IRLedPin) {
    
}
/**
* Send on signal to the TV
*/
void IRLight::on()
{
    pulseIR(1068, 8820);
    pulseIR(4340, 600);
    pulseIR(480, 620);
    pulseIR(480, 540);
    pulseIR(560, 560);
    pulseIR(520, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 580);
    pulseIR(520, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 580);
    pulseIR(1620, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(580, 580);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(1600, 520);
    pulseIR(580, 580);
    pulseIR(480, 620);
    pulseIR(1580, 560);
    pulseIR(1620, 540);
    pulseIR(1660, 580);
    pulseIR(1600, 600);
    pulseIR(16940, 100);
    pulseIR(21820, 8820);
    pulseIR(2140, 600);
}

/**
* Send off signal to the TV
*/
void IRLight::off()
{
    pulseIR(57620, 8820);
    pulseIR(4340, 600);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 560);
    pulseIR(520, 580);
    pulseIR(500, 520);
    pulseIR(580, 560);
    pulseIR(520, 600);
    pulseIR(500, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 540);
    pulseIR(1640, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 540);
    pulseIR(1640, 620);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(500, 520);
    pulseIR(580, 540);
    pulseIR(520, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(38860, 8840);
    pulseIR(2140, 600);


}

/**
* Send bright command
*/
void IRLight::bright()
{
    pulseIR(65120, 8840);
    pulseIR(4320, 600);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 560);
    pulseIR(520, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(480, 620);
    pulseIR(480, 540);
    pulseIR(1640, 600);
    pulseIR(1600, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(1580, 600);
    pulseIR(500, 580);
    pulseIR(520, 520);
    pulseIR(580, 560);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(1660, 620);
    pulseIR(1560, 600);
    pulseIR(500, 600);
    pulseIR(1580, 620);
    pulseIR(1600, 520);
    pulseIR(1640, 620);
    pulseIR(1580, 600);
    pulseIR(38860, 8840);
    pulseIR(2120, 620);

}

/**
* Send darker command
*/
void IRLight::darker()
{

    pulseIR(3012, 8820);
    pulseIR(4360, 580);
    pulseIR(500, 580);
    pulseIR(520, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 540);
    pulseIR(520, 620);
    pulseIR(480, 540);
    pulseIR(1640, 620);
    pulseIR(1580, 580);
    pulseIR(1620, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(580, 580);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(1580, 600);
    pulseIR(480, 620);
    pulseIR(480, 540);
    pulseIR(580, 560);
    pulseIR(1600, 540);
    pulseIR(1640, 600);
    pulseIR(1600, 600);
    pulseIR(38860, 8800);
    pulseIR(2160, 620);
    pulseIR(12336, 100);

}

/**
* Send sed signal
*/
void IRLight::red()
{

    pulseIR(8436, 8840);
    pulseIR(4360, 560);
    pulseIR(500, 580);
    pulseIR(520, 540);
    pulseIR(560, 580);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 580);
    pulseIR(520, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1600, 580);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 580);
    pulseIR(1620, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(1580, 580);
    pulseIR(1620, 540);
    pulseIR(560, 580);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 580);
    pulseIR(38900, 8800);
    pulseIR(2160, 600);

}

void IRLight::green()
{
    pulseIR(54312, 8820);
    pulseIR(4340, 600);
    pulseIR(500, 560);
    pulseIR(540, 520);
    pulseIR(580, 560);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(500, 520);

    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1600, 580);
    pulseIR(1600, 540);
    pulseIR(1660, 580);
    pulseIR(1600, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(480, 540);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(500, 560);
    pulseIR(540, 520);
    pulseIR(580, 540);
    pulseIR(520, 600);
    pulseIR(500, 520);
    pulseIR(1660, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1600, 560);
    pulseIR(16960, 100);
    pulseIR(21820, 8840);
    pulseIR(2140, 600);

}

void IRLight::blue()
{

    pulseIR(48764, 8840);
    pulseIR(4360, 560);
    pulseIR(500, 620);
    pulseIR(480, 540);
    pulseIR(560, 560);
    pulseIR(520, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 580);
    pulseIR(1620, 540);
    pulseIR(560, 580);
    pulseIR(500, 580);
    pulseIR(520, 520);
    pulseIR(1660, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 580);
    pulseIR(520, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 580);
    pulseIR(1620, 520);
    pulseIR(580, 580);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(38880, 8820);
    pulseIR(2160, 580);

}

void IRLight::white()
{
    pulseIR(28180, 8840);
    pulseIR(4320, 600);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 580);
    pulseIR(520, 520);
    pulseIR(580, 540);
    pulseIR(520, 620);
    pulseIR(500, 520);
    pulseIR(1640, 620);
    pulseIR(1580, 560);
    pulseIR(1640, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(580, 560);
    pulseIR(1620, 520);
    pulseIR(580, 580);
    pulseIR(1600, 540);
    pulseIR(560, 580);
    pulseIR(500, 580);
    pulseIR(520, 520);
    pulseIR(580, 540);
    pulseIR(1640, 520);
    pulseIR(580, 580);
    pulseIR(1600, 520);
    pulseIR(580, 560);
    pulseIR(1620, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(38880, 8840);
    pulseIR(2140, 600);

}

void IRLight::tomato()
{


    pulseIR(14128, 8840);
    pulseIR(4340, 580);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(600, 560);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 540);
    pulseIR(1640, 600);
    pulseIR(1600, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(500, 600);
    pulseIR(1580, 600);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(480, 580);
    pulseIR(520, 540);
    pulseIR(560, 560);
    pulseIR(1620, 540);
    pulseIR(560, 580);
    pulseIR(1600, 520);
    pulseIR(1660, 620);
    pulseIR(1580, 600);
    pulseIR(38880, 8820);
    pulseIR(2140, 620);
}

void IRLight::dark_orange()
{


    pulseIR(61252, 8840);
    pulseIR(4320, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 580);
    pulseIR(520, 540);
    pulseIR(560, 560);
    pulseIR(520, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(1580, 600);
    pulseIR(500, 600);
    pulseIR(1580, 580);
    pulseIR(1620, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 540);
    pulseIR(1660, 580);
    pulseIR(520, 500);
    pulseIR(1660, 620);
}

void IRLight::orange()
{

    pulseIR(24340, 8840);
    pulseIR(4320, 580);
    pulseIR(520, 580);
    pulseIR(520, 540);
    pulseIR(560, 580);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 580);
    pulseIR(1620, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 620);
    pulseIR(1560, 620);
    pulseIR(480, 600);
    pulseIR(1600, 580);
    pulseIR(500, 580);
    pulseIR(1620, 560);
    pulseIR(520, 600);
    pulseIR(500, 540);
    pulseIR(560, 560);
    pulseIR(520, 600);
    pulseIR(1580, 580);
    pulseIR(520, 600);
    pulseIR(1580, 600);
    pulseIR(500, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 540);
    pulseIR(1640, 620);
    pulseIR(1580, 560);

}

void IRLight::yellow()
{

    pulseIR(48496, 8760);
    pulseIR(4400, 520);
    pulseIR(580, 560);
    pulseIR(520, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(480, 620);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1620, 520);
    pulseIR(580, 580);
    pulseIR(480, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 540);
    pulseIR(1640, 620);
    pulseIR(500, 520);
    pulseIR(580, 560);
    pulseIR(500, 620);
    pulseIR(1560, 600);
    pulseIR(1600, 540);
    pulseIR(580, 580);
    pulseIR(480, 600);
    pulseIR(500, 520);
    pulseIR(1660, 620);
    pulseIR(1580, 580);
    pulseIR(1600, 540);
    pulseIR(38940, 8820);
    pulseIR(2160, 600);

}

void IRLight::lime()
{


    pulseIR(12004, 8800);
    pulseIR(4360, 560);
    pulseIR(540, 560);
    pulseIR(520, 580);
    pulseIR(520, 520);
    pulseIR(580, 560);
    pulseIR(520, 600);
    pulseIR(500, 540);
    pulseIR(560, 580);
    pulseIR(500, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 540);
    pulseIR(580, 560);
    pulseIR(1620, 520);
    pulseIR(580, 560);
    pulseIR(500, 600);
    pulseIR(1620, 560);
    pulseIR(500, 620);
    pulseIR(480, 540);
    pulseIR(560, 580);
    pulseIR(1600, 520);
    pulseIR(580, 580);
    pulseIR(1600, 540);
    pulseIR(1660, 600);
    pulseIR(480, 540);
    pulseIR(1640, 620);
    pulseIR(1580, 580);
    pulseIR(1620, 520);
    pulseIR(17000, 100);
    pulseIR(21860, 8800);
    pulseIR(2160, 600);

}

void IRLight::cyan()
{

    pulseIR(56168, 8820);
    pulseIR(4360, 520);
    pulseIR(580, 580);
    pulseIR(480, 620);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(480, 600);
    pulseIR(500, 540);
    pulseIR(580, 560);
    pulseIR(500, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 540);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(1580, 580);
    pulseIR(1620, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(1580, 600);
    pulseIR(500, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(580, 580);
    pulseIR(500, 580);
    pulseIR(1600, 600);
    pulseIR(1600, 540);
    pulseIR(560, 580);
    pulseIR(1600, 520);
    pulseIR(38980, 8800);
    pulseIR(2160, 600);

}

void IRLight::turquoise()
{


    pulseIR(26740, 8920);
    pulseIR(4300, 560);
    pulseIR(580, 540);
    pulseIR(500, 600);
    pulseIR(540, 540);
    pulseIR(560, 540);
    pulseIR(500, 580);
    pulseIR(560, 540);
    pulseIR(580, 500);
    pulseIR(540, 560);
    pulseIR(1600, 640);
    pulseIR(1560, 600);
    pulseIR(1580, 640);
    pulseIR(1540, 640);
    pulseIR(1560, 620);
    pulseIR(1560, 640);
    pulseIR(1560, 600);
    pulseIR(1600, 520);
    pulseIR(580, 580);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 540);
    pulseIR(560, 580);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(1660, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(38960, 8820);
    pulseIR(2160, 600);

}

void IRLight::dark_turquoise()
{

    pulseIR(15004, 8820);
    pulseIR(4360, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 560);
    pulseIR(520, 580);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(1580, 580);
    pulseIR(1620, 580);
    pulseIR(1620, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 580);
    pulseIR(1600, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 580);
    pulseIR(520, 580);
    pulseIR(500, 600);
    pulseIR(1580, 600);
    pulseIR(500, 600);
    pulseIR(1580, 600);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(1600, 520);
    pulseIR(1660, 580);
    pulseIR(520, 540);
    pulseIR(1640, 600);
    pulseIR(500, 520);
    pulseIR(1660, 600);
    pulseIR(1600, 600);
    pulseIR(1600, 520);
    pulseIR(38960, 8820);
    pulseIR(2140, 600);

}

void IRLight::royal_blue()
{

    pulseIR(58096, 8820);
    pulseIR(4340, 540);
    pulseIR(580, 560);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(600, 560);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 580);
    pulseIR(1620, 580);
    pulseIR(1600, 540);
    pulseIR(1640, 620);
    pulseIR(1580, 600);
    pulseIR(1600, 540);
    pulseIR(560, 580);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(500, 520);
    pulseIR(1660, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(1580, 580);
    pulseIR(520, 600);
    pulseIR(500, 520);
    pulseIR(1660, 600);
    pulseIR(500, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(38960, 8820);
    pulseIR(2160, 600);

}

void IRLight::dark_violet()
{

    pulseIR(41372, 8820);
    pulseIR(4360, 560);
    pulseIR(540, 560);
    pulseIR(500, 580);
    pulseIR(520, 540);
    pulseIR(560, 580);
    pulseIR(500, 600);
    pulseIR(500, 580);
    pulseIR(520, 580);
    pulseIR(500, 600);
    pulseIR(1580, 580);
    pulseIR(1620, 540);
    pulseIR(1640, 600);
    pulseIR(1580, 620);
    pulseIR(1580, 560);
    pulseIR(1640, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(1580, 580);
    pulseIR(520, 580);
    pulseIR(520, 520);
    pulseIR(580, 560);
    pulseIR(520, 600);
    pulseIR(500, 540);
    pulseIR(1640, 600);
    pulseIR(1580, 600);
    pulseIR(500, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 540);
    pulseIR(38960, 8820);
    pulseIR(2140, 600);

}

void IRLight::purple()
{

    pulseIR(23884, 8820);
    pulseIR(4340, 640);
    pulseIR(440, 620);
    pulseIR(480, 620);
    pulseIR(480, 560);
    pulseIR(560, 560);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 540);
    pulseIR(1660, 600);
    pulseIR(1600, 560);
    pulseIR(1620, 520);
    pulseIR(580, 540);
    pulseIR(1640, 520);
    pulseIR(1660, 580);
    pulseIR(1620, 580);
    pulseIR(520, 580);
    pulseIR(520, 500);
    pulseIR(600, 560);
    pulseIR(520, 580);
    pulseIR(1600, 560);
    pulseIR(520, 580);
    pulseIR(520, 520);
    pulseIR(580, 540);
    pulseIR(1640, 520);
    pulseIR(1660, 580);
    pulseIR(1600, 580);
    pulseIR(1620, 520);
    pulseIR(38980, 8820);
    pulseIR(2140, 580);

}

void IRLight::pink()
{


    pulseIR(34944, 8840);
    pulseIR(4340, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(500, 540);
    pulseIR(560, 580);
    pulseIR(500, 600);
    pulseIR(480, 540);
    pulseIR(560, 580);
    pulseIR(500, 600);
    pulseIR(1600, 580);
    pulseIR(1620, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 580);
    pulseIR(1620, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 560);
    pulseIR(1620, 620);
    pulseIR(1580, 600);
    pulseIR(1580, 540);
    pulseIR(1660, 600);
    pulseIR(500, 520);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(500, 520);
    pulseIR(580, 560);
    pulseIR(500, 620);
    pulseIR(480, 540);
    pulseIR(560, 580);
    pulseIR(1600, 540);
    pulseIR(1640, 620);
    pulseIR(1580, 600);
    pulseIR(1600, 520);
    pulseIR(38960, 8780);
    pulseIR(2180, 620);
}

void IRLight::flash()
{

    pulseIR(62948, 8760);
    pulseIR(4420, 520);
    pulseIR(580, 560);
    pulseIR(520, 580);
    pulseIR(540, 500);
    pulseIR(580, 540);
    pulseIR(520, 580);
    pulseIR(560, 480);
    pulseIR(600, 540);
    pulseIR(520, 580);
    pulseIR(1640, 540);
    pulseIR(1620, 540);
    pulseIR(1660, 560);
    pulseIR(1640, 560);
    pulseIR(1620, 520);
    pulseIR(1660, 580);
    pulseIR(1620, 580);
    pulseIR(1600, 520);
    pulseIR(1660, 580);
    pulseIR(520, 540);
    pulseIR(1640, 580);
    pulseIR(1640, 540);
    pulseIR(540, 560);
    pulseIR(540, 520);
    pulseIR(1640, 560);
    pulseIR(560, 520);
    pulseIR(580, 540);
    pulseIR(1640, 520);
    pulseIR(580, 540);
    pulseIR(520, 580);
    pulseIR(1640, 520);
    pulseIR(1640, 540);
    pulseIR(580, 540);
    pulseIR(1640, 520);
    pulseIR(38960, 8760);
    pulseIR(2220, 520);
    pulseIR(28284, 8760);
    pulseIR(2220, 560);
    pulseIR(28244, 8760);
    pulseIR(2220, 560);

}

void IRLight::strobe()
{


    pulseIR(16396, 8760);
    pulseIR(4420, 520);
    pulseIR(580, 580);
    pulseIR(480, 580);
    pulseIR(540, 500);
    pulseIR(600, 560);
    pulseIR(500, 580);
    pulseIR(520, 520);
    pulseIR(580, 560);
    pulseIR(520, 580);
    pulseIR(1600, 580);
    pulseIR(1620, 540);
    pulseIR(1640, 580);
    pulseIR(1620, 580);
    pulseIR(1620, 520);
    pulseIR(1660, 580);
    pulseIR(1600, 600);
    pulseIR(1600, 520);
    pulseIR(600, 560);
    pulseIR(520, 560);
    pulseIR(540, 500);
    pulseIR(600, 560);
    pulseIR(520, 540);
    pulseIR(560, 500);
    pulseIR(600, 520);
    pulseIR(560, 540);
    pulseIR(1640, 540);
    pulseIR(1640, 520);
    pulseIR(1660, 560);
    pulseIR(1620, 580);
    pulseIR(1620, 520);
    pulseIR(1660, 580);
    pulseIR(1640, 540);
    pulseIR(1620, 540);
    pulseIR(38960, 8760);
    pulseIR(2220, 560);
    pulseIR(28244, 8760);
    pulseIR(2220, 560);
    pulseIR(28244, 8760);
    pulseIR(2220, 560);

}

void IRLight::fade()
{

    pulseIR(55652, 8820);
    pulseIR(4360, 560);
    pulseIR(520, 580);
    pulseIR(540, 500);
    pulseIR(580, 580);
    pulseIR(500, 580);
    pulseIR(540, 500);
    pulseIR(580, 580);
    pulseIR(500, 600);
    pulseIR(520, 500);
    pulseIR(1660, 600);
    pulseIR(1580, 560);
    pulseIR(1640, 520);
    pulseIR(1660, 600);
    pulseIR(1580, 600);
    pulseIR(1600, 540);
    pulseIR(1640, 580);
    pulseIR(1640, 540);
    pulseIR(540, 560);
    pulseIR(1640, 540);
    pulseIR(540, 560);
    pulseIR(1640, 560);
    pulseIR(1620, 520);
    pulseIR(580, 540);
    pulseIR(540, 560);
    pulseIR(560, 500);
    pulseIR(1660, 560);
    pulseIR(560, 500);
    pulseIR(1660, 560);
    pulseIR(560, 500);
    pulseIR(580, 540);
    pulseIR(1640, 520);
    pulseIR(1660, 560);
    pulseIR(1640, 560);
    pulseIR(38900, 8840);
    pulseIR(2160, 560);
    pulseIR(28244, 8820);
    pulseIR(2160, 560);
    pulseIR(28244, 8820);
    pulseIR(2160, 560);

}

void IRLight::smooth()
{

    pulseIR(50192, 8840);
    pulseIR(4360, 540);
    pulseIR(520, 580);
    pulseIR(540, 520);
    pulseIR(600, 520);
    pulseIR(520, 580);
    pulseIR(520, 520);
    pulseIR(580, 560);
    pulseIR(520, 600);
    pulseIR(500, 520);
    pulseIR(1660, 580);
    pulseIR(1620, 540);
    pulseIR(1640, 520);
    pulseIR(1660, 600);
    pulseIR(1620, 540);
    pulseIR(1620, 540);
    pulseIR(1660, 600);
    pulseIR(1600, 580);
    pulseIR(520, 580);
    pulseIR(520, 500);
    pulseIR(1660, 600);
    pulseIR(1600, 580);
    pulseIR(520, 580);
    pulseIR(520, 500);
    pulseIR(600, 560);
    pulseIR(520, 580);
    pulseIR(1600, 580);
    pulseIR(1600, 520);
    pulseIR(600, 560);
    pulseIR(520, 560);
    pulseIR(1600, 580);
    pulseIR(1620, 520);
    pulseIR(1660, 600);
    pulseIR(1600, 580);
    pulseIR(38900, 8840);
    pulseIR(2140, 560);
    pulseIR(28244, 8840);
    pulseIR(2140, 600);
    pulseIR(28204, 8840);
    pulseIR(2140, 600);
}


