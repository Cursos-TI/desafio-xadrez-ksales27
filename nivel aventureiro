#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (5 casas para a direita) usando for
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    
    // Simulação do movimento do Bispo (5 casas na diagonal superior direita) usando while
    printf("\nMovimento do Bispo (5 casas na diagonal superior direita):\n");
    int casasBispo = 0;
    while (casasBispo < 5) {
        printf("Cima, Direita\n");
        casasBispo++;
    }
    
    // Simulação do movimento da Rainha (8 casas para a esquerda) usando do-while
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int casasRainha = 0;
    do {
        printf("Esquerda\n");
        casasRainha++;
    } while (casasRainha < 8);
    
    // Simulação do movimento do Cavalo (2 casas para baixo e 1 para esquerda) usando loops aninhados
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 para esquerda):\n");
    
    // Loop externo (for) - controla as duas partes do movimento em L
    for (int parte = 0; parte < 2; parte++) {
        if (parte == 0) {
            // Primeira parte do L: 2 movimentos para baixo
            int movimentosBaixo = 0;
            // Loop interno (while) - executa os 2 movimentos para baixo
            while (movimentosBaixo < 2) {
                printf("Baixo\n");
                movimentosBaixo++;
            }
        } else {
            // Segunda parte do L: 1 movimento para esquerda
            printf("Esquerda\n");
        }
    }
    
    return 0;
}
