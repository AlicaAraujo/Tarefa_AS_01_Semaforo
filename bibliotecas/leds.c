#include "leds.h"
#include "pico/stdlib.h"
#include "semaforo.h"

// Função que inicializa o pino do LED como saída
void led_init(uint gpio) {
    gpio_init(gpio);
    gpio_set_dir(gpio, GPIO_OUT);
}

void inicializaLEDs() {
    // Inicializa os pinos dos LEDs
    led_init(LED_VERMELHO);
    led_init(LED_AMARELO);
    led_init(LED_VERDE);
}
