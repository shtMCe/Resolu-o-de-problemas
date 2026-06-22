/*
2. Escreva um programa que simule o lançamento de uma moeda. Para cada
lançamento, o programa deve imprimir 'Cara' ou 'Coroa'. Deixe o programa
lançar a moeda 100 vezes e conte quantas vezes cada lado foi sorteado. Por
fim, imprima os resultados na tela.
Seu programa deve:
● Chamar a função lancaMoeda( ), que não utiliza argumentos e retorna
0 para cara e 1 para coroa.
● Utilizar a função rand() para simular o lançamento de uma moeda.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lancaMoeda ( ){
    int result = rand() % 2;
    return result;
    
}

int main( ) {
    
    srand(time(NULL));

	int cara = 0, coroa = 0;
	int result;

	for ( int i = 0 ; i < 100 ; i++ ) {
        
        result = lancaMoeda();
        
        if (result == 0){
            
            cara++;
        }
        else { 
            coroa++;
        }
    
	}
    
    printf("CARAS: %d\nCOROAS: %d\n", cara, coroa);
    
	return 0;
}