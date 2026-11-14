# Trabalho AV2 — Jogo da Cobra

## Identificação
**Nome:** EDSON COSTA DAS NEVES  
**Matrícula:** 202503673004

## Personalização
- **A = 0, B = 0, C = 4**
- **Grade:** 20 × 20 casas
- **Velocidade inicial:** 120 ms
- **Cor da cobra:** Verde
- **Pontuação por comida:** 10 pontos

## Como compilar

Compilar com GCC e FreeGLUT:

```bash
gcc main.c cobra.c -o Snake.exe -Wall -std=c99 -lfreeglut -lopengl32 -lglu32
```

## Como jogar

- **Setas:** movimentar a cobra.
- **P:** pausar ou continuar.
- **ESC:** sair.
- **Botão esquerdo do mouse:** reiniciar após o fim de jogo.

A cobra começa a se movimentar automaticamente. O objetivo é comer as maçãs sem colidir com as paredes ou com o próprio corpo.
