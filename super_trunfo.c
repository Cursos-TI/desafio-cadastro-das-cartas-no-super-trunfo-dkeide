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

    
   int carta1;
   
   printf("*** Comparação de cartas *** \n");
   printf("Escolha uma opção! \n");
   printf("1. População \n");
   printf("2. Área \n");
   printf("3. PIB \n");
   printf("4. Pontos Turísticos \n");
   printf("5. Densidade Demográfica \n");
   printf("6. Capital \n");
   printf("7. Super Poder \n");

   printf("Escolha: ");
   scanf("%d", &carta1);

    switch (carta1)
    {
    case 1: 
        printf("População ###");

        if (populacao > populacao2){
           printf("Carta 1 venceu: %ld --- Carta 2 perdeu: %ld \n", populacao, populacao2);
           }
           else if (populacao < populacao2) {
           printf("Carta 2 venceu: %ld --- Carta 1 perdeu: %ld \n", populacao2, populacao);
           }
           else { 
           printf("Houve um empate! \n");
           }
        break;

    case 2: 
        printf("Área ###");
       
        if (km > km2){
        printf("Carta 1 venceu: %f --- Carta 2 perdeu: %f  \n", km, km2);
        }
        else if (km < km2) {
        printf("Carta 2 venceu: %f --- Carta 1 perdeu: %f \n", km2, km);
        }
        else { 
        printf("Houve um empate! \n");
        }
        break;

    case 3: 
        printf("PIB ###");

        if (pib > pib2){
        printf("Carta 1 venceu: %f --- Carta 2 perdeu: %f \n", pib, pib2);
        }
        else if (pib < pib2){
        printf("Carta 2 venceu: %f --- Carta 1 perdeu: %f \n", pib2, pib);
        }
        else { 
        printf("Houve um empate! \n");
        }
        break;

    case 4: 
        printf("Pontos Turísticos ###");

        if (pturisticos > pturisticos2){
        printf("Carta 1 venceu: %d --- Carta 2 perdeu: %d \n", pturisticos, pturisticos2);
        }
        else if (pturisticos < pturisticos2) {
        printf("Carta 2 venceu: %d --- Carta 1 perdeu: %d \n", pturisticos2, pturisticos);
        }
        else { 
        printf("Houve um empate! \n");
        }
        break;

    case 5: 
       printf("Densidade Demográfica ###");

        if (densidade < densidade2){
        printf("Carta 1 venceu: %f --- Carta 2 perdeu: %f \n", densidade, densidade2);
        }
        else if (densidade > densidade2){
        printf("Carta 2 venceu: %f  --- Carta 1 perdeu: %f \n", densidade2, densidade);
        }
        else { 
        printf("Houve um empate! \n");
        }
        break;

    case 6: 
        printf("Capital ###");

        if (capita > capita2){
        printf("Carta 1 venceu: %f --- Carta 2 perdeu: %f \n", capita,capita2);
        }
        else if (capita < capita2){
        printf("Carta 2 venceu: %f --- Carta 1 perdeu: %f \n", capita2,capita);
        }
        else { 
        printf("Houve um empate! \n");
        }
        break;

    case 7: 
        printf("Super Poder ###");

        if (superpoder > superpoder2){
        printf("Carta 1 venceu: %f --- Carta 2 perdeu: %f \n", superpoder, superpoder2);
        }
        else if (superpoder < superpoder2){
        printf("Carta 2 venceu: %f --- Carta 1 perdeu: %f \n", superpoder2, superpoder);
        }
        else { 
        printf("Houve um empate! \n");
        }
        break;

        default:
        printf("opção Inválida!");
        break;
        }

        return 0;
        }