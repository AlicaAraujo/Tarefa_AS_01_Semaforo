#include "semaforo.h"

// Variável global para definir o estado (cor) do semáforo
extern volatile int estado;

// Variável global que indica se o código está em modo de teste
extern volatile bool em_teste;

bool repeating_timer_callback(struct repeating_timer *t) {
    // Desliga todos os LEDs
    gpio_put(LED_VERMELHO, 0);
    gpio_put(LED_AMARELO, 0);
    gpio_put(LED_VERDE, 0);

    // Alterna o estado (cor) do semáforo, alternando quais LEDs estão ligados
    switch (estado) {
        case 0:
            gpio_put(LED_VERMELHO, 1);
            printf(em_teste ? "🛑 PARE! O sinal está VERMELHO!\n" : "\n🛑 PARE! O sinal está VERMELHO!\n\n");
            estado = 1;
            break;
        case 1:
            gpio_put(LED_AMARELO, 1);
            printf(em_teste ? "⚠️  ATENÇÃO! O sinal está AMARELO, reduza a velocidade.\n" : "\n⚠️  ATENÇÃO! O sinal está AMARELO, reduza a velocidade.\n\n");
            estado = 2;
            break;
        case 2:
            gpio_put(LED_VERDE, 1);
            printf(em_teste ? "✅ SIGA! O sinal está VERDE, caminho livre!\n" : "\n✅ SIGA! O sinal está VERDE, caminho livre!\n\n");
            estado = 0;
            break;
    }

    return true;
}
