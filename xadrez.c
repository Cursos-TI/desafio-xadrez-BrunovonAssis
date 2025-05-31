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
    
    i = 0;
    do {
        printf("Cima e direita\n"); //movimento do bispo em diagonl
        i++;
    } while (i <= 7);

    return 0;
    
}
