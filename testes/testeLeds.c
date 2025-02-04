#include <stdio.h>
#include "pico/stdlib.h"
#include "leds.h" // Incluir o arquivo de LEDs

void liga_led(uint gpio) {
    gpio_put(gpio, 1);
}

void desliga_led(uint gpio) {
    gpio_put(gpio, 0);
}

// Função para testar os LEDs (ligar e desligar)
void testeLeds() {
    printf("\n💡 Teste de LEDs iniciado.\n");
    liga_led(LED_AMARELO);
    liga_led(LED_VERMELHO);
    liga_led(LED_VERDE);
    sleep_ms(1000); // Espera 1 segundo para garantir que os LEDs estão ligados
    desliga_led(LED_AMARELO);
    desliga_led(LED_VERMELHO);
    desliga_led(LED_VERDE);
    printf("✅ Teste de LEDs finalizado com sucesso.\n\n");
}
