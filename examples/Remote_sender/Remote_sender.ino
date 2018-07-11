
#include <IRTransmitter.h>
#include <IRReceiver.h>
#include <IRTVSamsung.h>
#include <IRLight.h>

IRTVSamsung tv(13);
IRLight light(13);

IRReceiver receiver(2);

 
// we will store up to 100 pulse pairs (this is -a lot-)


int mode = 1;

const char helpText1[] PROGMEM = 
    "\n"
    "Available commands:" "\n"
    
    " read" "\n"
    " tv_on" "\n"
    " tv_off" "\n"
    " volume_up" "\n"
    " volume_down" "\n"
    " mute" "\n"
    " light_on" "\n"
    " light_off" "\n"
    " bright" "\n"
    " darker" "\n"
    " red" "\n"
    " green" "\n"
    " blue" "\n"
    " white" "\n"
    " tomato" "\n"
    " dark_orange" "\n"
    " orange" "\n"
    " yellow" "\n"
    " lime" "\n"
    " cyan" "\n"
    " turquoise" "\n"
    " dark_turquoise" "\n"
    " royal_blue" "\n"
    " dark_violet" "\n"
    " purple" "\n"
    " pink" "\n"
    " flash" "\n"
    " strobe" "\n"
    " fade" "\n"
    " smooth" "\n"

;
String readString, substring;



static void showString (PGM_P s)
{
  for (;;) {
    char c = pgm_read_byte(s++);
    if (c == 0)
        break;
    if (c == '\n')
        Serial.print('\r');
    Serial.print(c);
  }
}

static void showHelp ()
{
    showString(helpText1);
}


void setup()
{                
    Serial.begin(9600);

    Serial.println("IR Demo");
    showHelp();
}
 
static void handleInput (String c)
{
    Serial.println(c);
    if(c == "read")
    {
        Serial.println("Read code");
        receiver.read();

    } else if(c == "tv_on")
    {
        Serial.println("tv aanzetten");
        tv.on();
    } else if(c == "tv_off")
    {
        Serial.println("tv uitzetten");
        tv.off();
    } else if(c == "volume_up")
    {
        Serial.println("Volume harder");
        tv.volume_up();
    } else if(c == "volume_down")
    {
        Serial.println("Volume zachter");
        tv.volume_down();
    } else if(c == "mute")
    {
        Serial.println("Mute");
        tv.mute();
    } else if(c == "light_on")
    {
        Serial.println("Licht aanzetten");
        light.on();
    }else if(c == "light_off")
    {
        Serial.println("Licht uitzetten");
        light.off();
    }else if(c == "bright") {
        light.bright();
    }else if(c == "darker") {
        light.darker();
    }else if(c == "red") {
        light.red();
    }else if(c == "green") {
        light.green();
    }else if(c == "blue") {
        light.blue();
    }else if(c == "white") {
        light.white();
    }else if(c == "tomato") {
        light.tomato();
    }else if(c == "dark_orange") {
        light.dark_orange();
    }else if(c == "orange") {
        light.orange();
    }else if(c == "yellow") {
        light.yellow();
    }else if(c == "lime") {
        light.lime();
    }else if(c == "cyan") {
        light.cyan();
    // }else if(c == "turquoise") {
    //     light.turquoise();
    // }else if(c == "dark_turquoise") {
    //     light.dark_turquoise();
    // }else if(c == "royal_blue") {
    //     light.royal_blue();
    // }else if(c == "dark_violet") {
    //     light.dark_violet();
    }else if(c == "purple") {
        light.purple();
    }else if(c == "pink") {
        light.pink();
    }else if(c == "flash") {
        light.flash();
    }else if(c == "strobe") {
        light.strobe();
    }else if(c == "fade") {
        light.fade();
    }else if(c == "smooth") {
        light.smooth();
    }else{
        showHelp();
    }   
}


void loop()
{
    if (Serial.available()) {
        char c = Serial.read();
        if (c == '\n' || c == '\r') {
            handleInput(readString);
            readString=""; 
        } else {     
          readString += c; //makes the string readString
        }
    }
}

