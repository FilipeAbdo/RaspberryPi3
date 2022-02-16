#include <stdio.h>
#include <stdint.h>
#include <wiringPi.h>

#define BLINK_CYCLES 3
#define DEBOUNCE_x10ms 10

int main(void)
{
    wiringPiSetup();
    pinMode(1, OUTPUT);
    pinMode(4, INPUT);
    pullUpDnControl(4, PUD_UP);
    printf("Hello World\n");
    for (;;)
    {
        int debounce = 0;
        while (digitalRead(4))
        {
            debounce++;
            delay(10);
        }
        if (debounce >= DEBOUNCE_x10ms)
        {
            for (int i = 0; i < BLINK_CYCLES; i++)
            {
                printf("i = %i\n", i);
                digitalWrite(1, HIGH);
                delay(300);
                digitalWrite(1, LOW);
                delay(300);
            }
        }
    }
    return 0;
}