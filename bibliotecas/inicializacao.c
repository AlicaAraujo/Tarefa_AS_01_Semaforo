#include "inicializacao.h"
#include "pico/stdlib.h"
#include "semaforo.h"

// Variável global para definir o estado (cor) do semáforo
extern volatile int estado;

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

    // Inicializa o estado do semáforo
    estado = 0;

    printf("🚦 Sistema de semáforo inicializado com sucesso!\n\n");
}
