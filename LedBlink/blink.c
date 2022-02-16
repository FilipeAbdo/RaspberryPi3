#include <stdio.h>
#include <stdint.h>
#include <wiringPi.h>

#define BLINK_CYCLES 3
#define DEBOUNCE_x10ms 10
#define LED_PIN 25
#define BUTTON_PIN 23

int main(void)
{
    wiringPiSetup();
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUTTON_PIN, INPUT);
    pullUpDnControl(BUTTON_PIN, PUD_UP);
    printf("Hello World\n");
    int debounce;
    for (;;)
    {
        debounce = 0;
        printf("[Before] IN Check Debounce = %i", debounce);
        while (digitalRead(BUTTON_PIN))
        {
            debounce++;
            delay(10);
        }
        printf("[AFTER] IN Check Debounce = %i", debounce);
        if (debounce >= DEBOUNCE_x10ms)
        {
            printf("Debounce = %i\n", debounce);
            for (int i = 0; i < BLINK_CYCLES; i++)
            {
                printf("i = %i\n", i);
                digitalWrite(LED_PIN, HIGH);
                delay(300);
                digitalWrite(LED_PIN, LOW);
                delay(300);
            }
        }
    }
    return 0;
}