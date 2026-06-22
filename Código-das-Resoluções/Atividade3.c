/*
3. Sejam a e b os catetos de um triângulo, e a hipotenusa é obtida pela
equação: ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = 𝑎² + 𝑏². Faça um programa que contenha uma
função que receba os valores de a e b e calcule a hipotenusa pela equação
*/

#include <stdio.h>
#include <math.h>

float hipotsa(int a, int b) {
    a *= a;
    b *= b;
    a += b;
    return sqrt(a);
}

int main() {
    int a, b;

    printf("Entre com os catetos:\n");
    scanf("%d %d", &a, &b);

    printf("Hipotenusa: %.2f\n", hipotsa(a, b));

    return 0;
}