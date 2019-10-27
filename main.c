#include <ch.h>
#include <hal.h>

int main(void)
{

    halInit();
    chSysInit();

    while (true)
    {
        palToggleLine(LINE_LED1);
        chThdSleepSeconds(1);
    }
}
