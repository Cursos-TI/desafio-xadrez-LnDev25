# ♟️ Desafio de Xadrez - Nível Mestre

Este repositório contém a solução final para o Desafio de Lógica de Programação (Tema 4 - Xadrez), desenvolvido em Linguagem C.

No **Nível Mestre**, o foco foi refatorar o código para substituir estruturas de repetição básicas por **Recursividade** e implementar lógicas complexas de controle de fluxo para movimentação das peças.

## 📋 Funcionalidades Avançadas

O programa foi modularizado em funções, demonstrando diferentes paradigmas de lógica:

1.  **Torre (Recursividade):**
    * **Movimento:** Direita.
    * **Técnica:** Função recursiva que substitui o loop `for`. A função chama a si mesma decrementando o contador até atingir a condição de parada.

2.  **Rainha (Recursividade):**
    * **Movimento:** Esquerda.
    * **Técnica:** Função recursiva pura, demonstrando a versatilidade da recursão para diferentes movimentos.

3.  **Bispo (Recursividade + Loops Aninhados):**
    * **Movimento:** Diagonal (Cima, Direita).
    * **Técnica Híbrida:** Uma função recursiva controla a quantidade de passos, enquanto loops aninhados internos simulam a complexidade do movimento vertical e horizontal a cada passo.

4.  **🐴 Cavalo (Loops Complexos com Controle de Fluxo):**
    * **Movimento:** Em "L" (Cima, Cima, Direita).
    * **Técnica:** Utiliza loops com múltiplas condições e palavras-chave de controle:
        * `continue`: Para pular iterações durante o movimento vertical.
        * `break`: Para interromper o loop imediatamente após o movimento horizontal final.

## 🚀 Como Compilar e Executar

Siga as instruções abaixo para rodar o projeto final:

### 1. Compilar o código
Abra o terminal na pasta do projeto e compile o arquivo mestre:
```bash
gcc xadrez_mestre.c -o xadrez

2. Executar o programa
Após a compilação, execute o binário:

Bash

./xadrez
🖥️ Exemplo de Saída
Plaintext

--- Movimento da Torre (Recursivo) ---
Direita
...

--- Movimento da Rainha (Recursivo) ---
Esquerda
...

--- Movimento do Bispo (Recursivo + Loops) ---
Cima, Direita
...

--- Movimento do Cavalo (Complexo) ---
Cima
Cima
Direita
🛠 Tecnologias e Conceitos
Linguagem C (Padrão ANSI)

Compilador GCC

Recursividade: Funções que chamam a si mesmas.

Controle de Fluxo: break, continue, if/else.

Estruturas de Repetição: Loops Aninhados e Loops com múltiplas variáveis.
Abra o terminal na pasta do projeto e compile o arquivo mestre:
```bash
gcc xadrez_mestre.c -o xadrez
