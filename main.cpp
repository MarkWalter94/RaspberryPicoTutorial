#include "pico/stdlib.h"

int main(){
    //Inizializzazione della porta 25 (LED)
    gpio_init(25);

    //Imposto la porta come output
    gpio_set_dir(25, GPIO_OUT);

    //Ciclo infinito
    while(1)
    {
        //Accendo il led
        gpio_put(25, 1);
        //Aspetto 250ms
        sleep_ms(250);
        //Spengo il led
        gpio_put(25, 0);
        //Aspetto 250 ms
        sleep_ms(250);
    }
}