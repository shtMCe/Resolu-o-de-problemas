/*
4. Codifique, compile e execute um programa que leia os elementos de uma
matriz inteira 5x5 e imprima: (i) os elementos da diagonal secundária e (ii) a
soma dos elementos dessa diagonal.
Exemplos de entrada e saída
Entrada 
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
Saída
1 1 1 1 1
5
*/

#include <stdio.h>

int main() {

    int matriz[5][5];
    int i, j;
    int soma = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i + j == 4){
                printf("%d ", matriz[i][j]);
                soma += matriz[i][j];
            }
        }
    }

    printf("\n%d\n", soma);

    return 0;
}