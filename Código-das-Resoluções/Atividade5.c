/*
5. Codifique, compile e execute um programa que:
● Contenha uma struct para representar um novo tipo de pessoa, com
nome, altura e peso.
● Possua uma função sem retorno que calcule e imprima o IMC de uma
pessoa, recebendo como único parâmetro uma variável do tipo
pessoa.
Lembre-se: IMC = peso/altura²
● Crie uma variável do tipo Pessoa capaz de armazenar 30 indivíduos e
entre com os dados de cada um deles.
● Por fim, chame a função de cálculo do IMC criada para cada pessoa.
*/

#include <stdio.h>

typedef struct Spessoa {
    char nome[20];
    float altura, peso;
} pessoa;

void IMC(pessoa p) {

    float imc;
    imc = p.peso / (p.altura * p.altura);

    printf("%s = %.2f\n", p.nome, imc);
}

int main() {

    pessoa p1[30];

    for (int i = 0; i < 30; i++) {

        printf("Nome:\n");
        scanf("%s", p1[i].nome);

        printf("Altura:\n");
        scanf("%f", &p1[i].altura);

        printf("Peso:\n");
        scanf("%f", &p1[i].peso);
        
        printf("Imc:\n");
        IMC(p1[i]);
    }

    return 0;
}