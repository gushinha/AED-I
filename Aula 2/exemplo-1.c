//
//  main.c
//  Aula 2
//
//  Created by João Augusto Batsta Pereira on 28/08/24.
//

#include <stdio.h>
#include <locale.h>

int main() {
    int ano, idade;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o ano em que você nasceu:");
    scanf("%d", &ano);
    idade = 2024 - ano;
    printf("Sua idade é %d anos.", idade);
}
