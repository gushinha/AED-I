//
//  main.c
//  Aula 1
//
//  Created by João Augusto Batsta Pereira on 27/08/24.
//

#include <stdio.h>
#include <locale.h>

int main() {

    int n1, n2, soma, subt, mult;
    setlocale(LC_ALL, "Portuguese");

    printf("Operações com dos números inteiros\n");
    printf("======================================\n");
    printf("Digite o primeiro número = ");
    scanf("%d", &n1);
    printf("Digite o segundo número = ");
    scanf("%d", &n2);

    soma = n1 + n2;
    subt = n1 - n2;
    mult = n1 * n2;

    printf("\nResultados:\n");
    printf("Soma: %d + %d = %d\n", n1, n2, soma);
    printf("Subtração: %d - %d = %d\n", n1, n2, subt);
    printf("Multiplicação: %d * %d = %d\n", n1, n2, mult);

    return 0;
}

