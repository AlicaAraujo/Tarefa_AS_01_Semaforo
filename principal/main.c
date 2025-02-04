/*
Autor (a): Alícia Oliveira Araújo

Tarefa 1 - Semáforo - Aula Síncrona do dia 29/01/2025

Última modificação: 04/02/2025
*/

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h" //Incluindo biblioteca que gerencia temporizadores de hardware.
#include "bibliotecas/semaforo.h"
#include "bibliotecas/testes.h"
#include "bibliotecas/inicializacao.h" // Header file para inicialização

// Variável global para definir o estado (cor) do semáforo
volatile int estado = 0;

// Variável global que indica se o código está em modo de teste
volatile bool em_teste = true; 

//Função principal
int main() {
    stdio_init_all(); // Inicializa a comunicação serial
    
    // Inicialização do sistema
    inicializaLEDs();

    // Testes básicos
    executaTestes();

    // Configura o temporizador para mudar o semáforo a cada 3 segundos
    struct repeating_timer timer;
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);

    // Chama a função manualmente para evitar o atraso inicial
    repeating_timer_callback(NULL);
    
    // Loop principal imprimindo mensagens a cada 1 segundo
    while (true) {
        printf("⏳ Mudança de sinal em breve... Mantenha a atenção!\n");
        sleep_ms(1000);
    }
}
