<h1 align="center">🚦 Tarefa 1 - Simulção de Semáforo com Raspberry Pi Pico</h1>

<h2 align="center">📝 Descrição do Projeto</h2>

Este projeto simula um semáforo utilizando a Raspberry Pi Pico. O código alterna entre os estados (vermelho, amarelo e verde) a cada 3 segundos e exibe mensagens no console. Além disso, inclui testes automatizados para verificar a lógica de mudança de estados.

<h2 align="center">📂 Estrutura do Projeto</h2>

O projeto é composto pelos arquivos comuns a um projeto Pico W, incluindo:

- **bibliotecas/**: Pasta que contém os arquivos necessários para a estrutura do semáforo.
  - `inicializacao.c` e `inicializacao.h`: Responsáveis pela inicialização dos LEDs e configuração do hardware.
  - `semaforo.c` e `semaforo.h`: Gerenciam o funcionamento do semáforo, alternando os estados.
  - `testes.c` e `testes.h`: Contém testes para validar a lógica do semáforo.
- **principal/**: Contém o arquivo `main.c`, que gerencia a execução do sistema.
- **build/**: Pasta gerada automaticamente durante o processo de compilação.
- **Arquivos adicionais:**
  - `.gitignore`: Define arquivos a serem ignorados pelo Git.
  - `CMakeLists.txt`: Arquivo de configuração do CMake.
  - `diagram.json` e `wokwi.toml`: Arquivos para simulação no Wokwi.
  - `pico_sdk_import.cmake`: Importação do SDK do Raspberry Pi Pico.
  - `README.md`: Descrição do projeto.

<h2 align="center">🔧 Requisitos</h2>

- Raspberry Pi Pico

- SDK do Pico instalado

- Biblioteca `pico-sdk`

- Ambiente de desenvolvimento configurado (VS Code recomendado)

<h2 align="center">🖥️ Como Compilar e Executar</h2>

1. Clone o repositório:
   ```sh
   git clone https://github.com/seu-repo/semaforo-pico.git
   cd semaforo-pico
   ```

2. Configure o ambiente e compile o projeto:
   ```sh
   mkdir build
   cd build
   cmake ..
   make
   ```

3. Suba o arquivo `.uf2` para a Raspberry Pi Pico e monitore a saída:
   ```sh
   minicom -b 115200 -o -D /dev/ttyUSB0
   ```

<h2 align="center">✅ Testes</h2>

Para rodar os testes automatizados:
```sh
make test
```
Os testes verificam a lógica de mudança de estados do semáforo.

<h2 align="center">## 📅 Informações</h2>

📌 **Autor(a):** Alícia Oliveira Araújo  
📅 **Data da Aula:** 29/01/2025  
🛠 **Última Modificação do Código:** 04/02/2025

