#include "testes.h"
#include "semaforo.h"
#include <assert.h>
#include <stdio.h>

// Variável global que indica se o código está em modo de teste
extern volatile bool em_teste;

// Função de teste para verificar a lógica de mudança de estados
void executaTestes() {
    printf("🔍 Executando testes do sistema...\n\n");

    // Teste de lógica do semáforo
    estado = 0;
    repeating_timer_callback(NULL);
    assert(estado == 1);
    
    repeating_timer_callback(NULL);
    assert(estado == 2);
    
    repeating_timer_callback(NULL);
    assert(estado == 0);

    em_teste = false;  // Retorna ao comportamento normal
    
    printf("\n✅ Testes realizados com sucesso!\n");
}
