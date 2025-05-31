#include <stdio.h>

int main() {
    int i = 0;

    for (i=0; i <= 7; i++) {
        printf("Direita\n"); //movimento da torre
    }
    
    i = 7;
    while (i > 0) 
    {
        printf("Esquerda\n"); //movimento da rainha
        i--;
    }
    {
    i = 0;
    do {
        printf("Cima e direita\n"); //movimento do bispo em diagonl
        i++;
    } while (i <= 7);
    }
    i = 3;
    while (i > 0) {
        i--;
        for (int j = 0; j < 2; j++) {
            printf("Esquerda\n"); //movimento do cavalo em duas casas para a esquerda 
        }
        printf("Baixo\n"); //movimento do cavalo em uma casa para baixo
    }

    return 0;
    
}
