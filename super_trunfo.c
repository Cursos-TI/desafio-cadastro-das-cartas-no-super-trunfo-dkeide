#include <stdio.h>

int main () {
    printf("*** Desafio! *** \n");
    printf("*** Carta 1 *** \n");

    int pturisticos;
    unsigned long int populacao;
    float km, pib, densidade, capita, superpoder;
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
    scanf("%ld", &populacao);

    printf("Qual a área em km²? \n");
    scanf("%f", &km);

    printf("Qual é o PIB? \n");
    scanf("%f", &pib);

    printf("Qual a quantidade de pontos turisticos? \n");
    scanf("%d", &pturisticos);  
    
    //operação divisão para obter a Densidade Populacional
    densidade = populacao / km;
    capita = pib / populacao;

    //operação soma para obter o Super Poder
    superpoder= populacao + km + pib + pturisticos + capita + (1/densidade);


    printf("*** Carta 2 *** \n");
    
    int pturisticos2;
    unsigned long int populacao2;
    float km2, pib2, densidade2, capita2, superpoder2;
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
    scanf("%ld", &populacao2);

    printf("Qual a área em km²? \n");
    scanf("%f", &km2);

    printf("Qual é o PIB? \n");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turisticos? \n");
    scanf("%d", &pturisticos2);    

    //operação divisão
    densidade2 = populacao2 / km2;
    capita2 = pib2 / populacao2;

    //operação soma para obter o Super Poder
    superpoder2= populacao2 + km2 + pib2 + pturisticos2 + capita2 + (1/densidade2);

    printf("*** Dados da carta 1 *** \n");

    printf("Estado: %s \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %ld \n", populacao);
    printf("KM²: %.2f km² \n", km);
    printf("PIB: %.2f reais \n", pib);
    printf("Pontos Turisticos: %d \n", pturisticos);
    printf("Densidade Populacional: %f hab/km²\n", densidade);
    printf("Pib per capita: %f reais \n", capita);
    printf("Superpoder: %f \n", superpoder);

    printf("*** Dados da carta 2 *** \n");

    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %ld \n", populacao2);
    printf("KM²: %.2f km² \n", km2);
    printf("PIB: %.2f reais \n", pib2);
    printf("Pontos Turisticos: %d \n", pturisticos2);
    printf("Densidade Populacional: %f hab/km² \n", densidade2);
    printf("Pib per capita: %f reais \n", capita2);
    printf("Superpoder: %f \n",superpoder2);

    printf("*** Comparação das Cartas *** \n");
    // usando a vogal r antes dos topicos para imprimir resultado


    float rkm, rpib, rdensidade, rcapita, rsuperpoder, rpopulacao, rturistico;

    // iniciado códigos para a comparação entre carta A e B
    // exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).

    rpopulacao = populacao > populacao2;
    rkm = km > km2;
    rpib = pib > pib2;
    rturistico = pturisticos > pturisticos2;
    rdensidade = densidade < densidade2;
    rcapita = capita > capita2;
    rsuperpoder = superpoder > superpoder2;

    printf("População: %.1f \n", rpopulacao);
    printf("Área: %.1f \n", rkm);
    printf("PIB: %.1f \n", rpib);
    printf("Pontos Turisticos: %.1f \n", rturistico);
    printf("Densidade Populacional: %.1f \n", rdensidade);
    printf("Pib per capita: %.1f \n", rcapita);
    printf("Superpoder: %.1f \n", rsuperpoder);

    // aplicando if / else 
    
    printf("*** Comparação de cartas Atributo: População *** \n");
    if (populacao > populacao2){
    printf("Carta 1 venceu: %ld \n", populacao);
    }
    else{
    printf("Carta 2 venceu: %ld \n", populacao2);
    }

    printf("*** Comparação de cartas Atributo: Área *** \n");
    if (km > km2){
        printf("Carta 1 venceu: %f \n", km);
        }
        else{
        printf("Carta 2 venceu: %f \n", km2);
        }
        
    printf("*** Comparação de cartas Atributo: PIB *** \n");
    if (pib > pib2){
        printf("Carta 1 venceu: %f \n", pib);
        }
        else{
        printf("Carta 2 venceu: %f \n", pib2);
        }

    printf("*** Comparação de cartas Atributo: Pontos Turisticos *** \n");
    if (pturisticos > pturisticos2){
        printf("Carta 1 venceu: %d \n", pturisticos);
        }
        else{
        printf("Carta 2 venceu: %d \n", pturisticos2);
        }

    printf("*** Comparação de cartas Atributo: Densidade Populacional *** \n");
    if (densidade < densidade2){
        printf("Carta 1 venceu: %f \n", densidade);
        }
        else{
        printf("Carta 2 venceu: %f \n", densidade2);
        }
        
    printf("*** Comparação de cartas Atributo: PIB per Capita *** \n");
    if (capita > capita2){
        printf("Carta 1 venceu: %f \n", capita);
        }
        else{
        printf("Carta 2 venceu: %f \n", capita2);
        }

     printf("*** Comparação de cartas Atributo: Super Poder *** \n");
     if (superpoder > superpoder2){
        printf("Carta 1 venceu: %f \n", superpoder);
        }
        else{
        printf("Carta 2 venceu: %f \n", superpoder2);
        }


    return 0;
}