#include <stdio.h>

void movimentotorre(int numerotorre) {
    if (numerotorre > 0) {
        printf("Direita\n"); //movimento da torre
        movimentotorre(numerotorre-1);
    }
}

void movimentorainha(int numerorainha) {
    if (numerorainha > 0) {
        printf("Esquerda\n"); //movimento da rainha
        movimentorainha(numerorainha - 1);
    }
}

void movimentobispo(int numerobispo) {
    while (numerobispo > 0) {
        for (int n = 1; n > 0; n--) {
            printf("Cima\n"); //movimento do bispo para cima
        }
        printf("Direita\n"); //movimento do bispo para a direita
        numerobispo--;
    }
}

    int main() {
       int casa_torre;
       casa_torre = 5;
       movimentotorre(casa_torre);
       int casa_rainha;
       casa_rainha = 8;
       movimentorainha(casa_rainha);
       int casa_bispo;
       casa_bispo = 5;
       movimentobispo(casa_bispo);
       
for (int i = 0, j = 0; i < 2 && j < 1 ; i+=2, j++) { 
    if (i >= 2 || j >= 1) break;
    printf("Cima\n");
    printf("Cima\n"); //movimento do cavalo em duas casas para cima
    printf("Direita\n"); //movimento do cavalo em uma casa para a direita
}
    return 0;
}
