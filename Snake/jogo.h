#ifndef JOGO_H
#define JOGO_H

#include "cobra.h"

typedef struct {
    Cobra cobra; // inclui a estrutura criada em cobra.h

    float macaX; // coordenada X da maçã
    float macaY;  // coordenada Y da maçã

    int pontuacao;  // Pontuação do jogador
    int crescer; // define se deve ou não crescer
    int jogoIniciado; // Indica se o jogo foi iniciado
    int jogoEncerrado; // Indica se o jogo foi encerrado
    int jogoPausado;  // Indica se o jogo está pausado
    int direcaoAlterada;// Indica se a direção da cobra foi alterada na mesma atualização para evitar múltiplas alterações

    int intervalo; // Intervalo de tempo usado para controlar a velocidade progressiva do jogo
    int macasComidas; // Contador de maçãs comidas, usado para aumentar a velocidade do jogo a cada 5 maçãs comidas

    char Texto[100];
} Jogo;

#endif