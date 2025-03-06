#ifndef tape_led_h
#define tape_led_h

#include "mbed.h"

class Tape_LED {
    public:
        Tape_LED(PinName R, PinName G, PinName B) : pin1(R) , pin2(G), pin3(B) {
            pin1 = 0;
            pin2 = 0;
            pin3 = 0;
        }
        void color(int color);
        int mask_iti = 0x0001;
        
        #define Red_LED 0b100
        #define Green_LED 0b010    
        #define Blue_LED 0b001
        #define Yellow_LED 0b110
        #define Cyan_LED 0b011
        #define Magenta_LED 0b101
        #define White_LED 0b111
        #define OFF_LED 0b000
    private:
        DigitalOut pin1;
        DigitalOut pin2;
        DigitalOut pin3;
        int R, G, B;
};

#endif