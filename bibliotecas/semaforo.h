#ifndef SEMAFORO_H
#define SEMAFORO_H

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

// Variável global para definir o estado (cor) do semáforo
extern int estado;

// Função que inicializa o pino do LED como saída
void led_init(uint gpio);

// Função de callback do temporizador para alternar entre os estados (cores) do semáforo
bool repeating_timer_callback(struct repeating_timer *t);

#endif // SEMAFORO_H
