#include "mbed.h"
#include "tape_led.h"

Tape_LED teep(PC_9, PA_6, PC_8);

int main() {
    for(;;) {
        teep.color(Red_LED);
        ThisThread::sleep_for(500ms);  // 1秒待つ
        teep.color(Green_LED);
        ThisThread::sleep_for(500ms);  // 1秒待つ    
        teep.color(Blue_LED);
        ThisThread::sleep_for(500ms);  // 1秒待つ 
        teep.color(Yellow_LED);
        ThisThread::sleep_for(500ms);  // 1秒待つ   
        teep.color(Cyan_LED);
        ThisThread::sleep_for(500ms);  // 1秒待つ  
        teep.color(Magenta_LED);
        ThisThread::sleep_for(500ms);  // 1秒待つ  
        teep.color(White_LED);
        ThisThread::sleep_for(500ms);  // 1秒待つ  
        teep.color(OFF_LED);
        ThisThread::sleep_for(500ms);  // 1秒待つ  
    }
}