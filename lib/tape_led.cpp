#include "tape_led.h"

void Tape_LED::color(int color)
{
    R = (color >> 2) & mask_iti;
    G = (color >> 1) & mask_iti;
    B = (color) & mask_iti;
    pin1 = R;
    pin2 = G;
    pin3 = B;
}
