//
//  exercicio-1.c
//  Aula 2
//
//  Created by João Augusto Batsta Pereira on 28/08/24.
//

#include <stdio.h>
#include <locale.h>

int main1(){
    int ano, nascimento, idade;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o ano em que estamos:");
    scanf("%d", &ano);
    printf("Digite o ano em que você nasceu:");
    scanf("%d", &nascimento);
    idade = ano - nascimento;
    printf("Sua idade é %d anos.", idade);
    return 0;
}
