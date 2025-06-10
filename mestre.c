#include <stdio.h>

// Função recursiva para movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimento do Bispo
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para movimento do Cavalo com loops complexos
void moverCavalo() {
    for (int parte = 0; parte < 2; parte++) {
        for (int i = 0; i < 2; i++) {
            if (parte == 0) {
                printf("Cima\n");
                continue;
            }
            if (i == 0) {
                printf("Direita\n");
                break;
            }
        }
    }
}

// Função adicional para movimento do Bispo com loops aninhados
void moverBispoLoops() {
    for (int vertical = 0; vertical < 5; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    // Movimento da Torre (recursivo)
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);
    
    // Movimento do Bispo (recursivo)
    printf("\nMovimento do Bispo (5 casas na diagonal superior direita - recursivo):\n");
    moverBispo(5);
    
    // Movimento do Bispo (com loops aninhados)
    printf("\nMovimento do Bispo (5 casas na diagonal superior direita - loops aninhados):\n");
    moverBispoLoops();
    
    // Movimento da Rainha (recursivo)
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);
    
    // Movimento do Cavalo (loops complexos)
    printf("\nMovimento do Cavalo (2 casas para cima e 1 para a direita):\n");
    moverCavalo();
    
    return 0;
}
