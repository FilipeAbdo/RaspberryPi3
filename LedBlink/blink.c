#include <stdio.h>
#include <stdint.h>
#include <wiringPi.h>

int main(void){
    wiringPiSetup();
    pinMode(1, OUTPUT);
    printf("Hello World\n");
    for(int i=0; i<20; i++){
        printf("i = %i\n", i);
        digitalWrite(1, HIGH);
        delay(300);
        digitalWrite(1, LOW);
        delay(300);
    }
    return 0;
}