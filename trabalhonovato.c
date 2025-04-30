#include <stdio.h>
//codigo das cartas funcionando conforme foi pedido, codigo da carta 1 'a01' ,codigo da carta 2'pe01',colocando o codigo todas a informações são exibidas.

int main() {
    char estado[20] = "goias";
    char a01[20] = "go01";
    char cidade[20] = "goiana";
    float populacao1 = 15000000;
    float km1 = 729.8;
    float pib1 = 59.8;  
    int turistico = 42;

    printf("Digite o código: ");
    scanf(" %s", a01);

    printf("Código da carta é: %s\n", a01);
    printf("Seu estado é: %s\n", estado);
    printf("A cidade é: %s\n", cidade);
    printf("A população é: %.2f\n", populacao1);
    printf("Área em km² é: %.2f\n", km1);
    printf("PIB do estado é: %.2f\n", pib1);
    printf("Quantidade de pontos turísticos é: %d\n", turistico);

    char estado2[20] = "pernambuco";
    char a02[20] = "pe01";
    char cidade2[20] = "recife";
    float populacao2 = 15000000;
    float km2 = 9800000;
    float pib2 = 54.97;
    int turistico2 = 33;

    printf("\nDigite o código: ");
    scanf(" %s", a02);  

    printf("Código da carta é: %s\n", a02);
    printf("O estado é: %s\n", estado2);
    printf("A cidade é: %s\n", cidade2);
    printf("A população é: %.2f\n", populacao2);
    printf("Área em km² é: %.2f\n", km2);
    printf("PIB do estado é: %.2f\n", pib2);
    printf("Quantidade de pontos turísticos é: %d\n", turistico2);

    return 0;
}
