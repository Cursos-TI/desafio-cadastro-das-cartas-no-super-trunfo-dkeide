#include <stdio.h>

int main () {
    printf("*** Desafio! *** \n");
    printf("*** Carta 1 *** \n");

    int pturisticos, populacao;
    float km, pib, densidade,capita;
    char estado [50];
    char codigo [40];
    char cidade [30];

    printf("Qual o nome do Estado? \n");
    scanf("%s", &estado);

    printf("Qual o codigo da carta? \n");
    scanf("%s", &codigo);

    printf("Qual nome da cidade? \n");
    scanf("%s", &cidade);

    printf("Qual a quantidade da população? \n");
    scanf("%d", &populacao);

    printf("Qual a área em km²? \n");
    scanf("%f", &km);

    printf("Qual é o PIB? \n");
    scanf("%f", &pib);

    printf("Qual a quantidade de pontos turisticos? \n");
    scanf("%d", &pturisticos);  
    
    //operação divisão
    densidade = populacao / km;
    capita = pib / populacao;


    printf("*** Carta 2 *** \n");
    
    int pturisticos2, populacao2;
    float km2, pib2, densidade2, capita2;
    char estado2 [60];
    char codigo2 [50];
    char cidade2 [40];

    printf("Qual o nome do Estado? \n");
    scanf("%s", &estado2);

    printf("Qual o codigo da carta? \n");
    scanf("%s", &codigo2);

    printf("Qual nome da cidade? \n");
    scanf("%s", &cidade2);

    printf("Qual a quantidade da população? \n");
    scanf("%d", &populacao2);

    printf("Qual a área em km²? \n");
    scanf("%f", &km2);

    printf("Qual é o PIB? \n");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turisticos? \n");
    scanf("%d", &pturisticos2);    

    //operação divisão
    densidade2 = populacao2 / km2;
    capita2 = pib2 / populacao2;

    printf("*** Dados da carta 1 *** \n");

    printf("Estado: %s \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("KM²: %.2f km² \n", km);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Pontos Turisticos: %d \n", pturisticos);
    printf("Densidade Populacional: %f hab/km²\n", densidade);
    printf("Pib per capita: %f reais \n", capita);

    printf("*** Dados da carta 2 *** \n");

    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("KM²: %.2f km² \n", km2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Pontos Turisticos: %d \n", pturisticos2);
    printf("Densidade Populacional: %f hab/km² \n", densidade2);
    printf("Pib per capita: %f reais \n", capita2);

    return 0;
 
}