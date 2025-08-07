#include <stdio.h>

int main() {
    
    //declaracao de variaveis da carta 1:
    unsigned int populacao, pontosTuristicos;
    char estado[20];
    char codigo[20];
    char cidade[20];
    double pib, area, densidadePopulacional, pibPerCapito;
    int carta1 = 0;
    
    //coleta de dados da carta 1:
    printf("DADOS DA CARTA 1: \n");
    printf("Estado: ");//coleta string de estado;
    scanf("%s", estado);
    printf("Codigo: ");//coleta o codigo da cidade;
    scanf("%s", codigo);
    printf("Cidade: ");//coleta o nome da cidade;
    scanf("%s", cidade);
    printf("Populacao: ");//coleta a quantidade de habitantes da cidade;
    scanf("%u", &populacao);
    printf("Area: ");//coleta a area da cidade;
    scanf("%lf", &area);
    printf("PIB: ");//coleta o pib da cidade;
    scanf("%lf", &pib);
    printf("Pontos Turisticos: ");//coleta a quantidade de pontos turisticos da cidade;
    scanf("%u", &pontosTuristicos);
  
    //calculo de densidade e pib per capito da carta 1:
    densidadePopulacional = populacao / area; 
    pibPerCapito = pib / populacao;

    //declaracao de variaveis da carta 2:
    unsigned int populacao2, pontosTuristicos2;
    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    double pib2, area2, densidadePopulacional2, pibPerCapito2;
    int carta2 = 0;

    printf("\n");//linnha invisivel;

    //coleta de dados da carta 2:
    printf("DADOS DA CARTA 2: \n");
    printf("Estado: ");//coleta string de estado;
    scanf("%s", estado2);
    printf("Codigo: ");//coleta o codigo da cidade;
    scanf("%s", codigo2);
    printf("Cidade: ");//coleta o nome da cidade;
    scanf("%s", cidade2);
    printf("Populacao: ");//coleta a quantidade de habitantes da cidade;
    scanf("%u", &populacao2);
    printf("Area: ");//coleta a area da cidade;
    scanf("%lf", &area2);
    printf("PIB: ");//coleta o pib da cidade;
    scanf("%lf", &pib2);
    printf("Pontos Turisticos: ");//coleta a quantidade de pontos turisticos da cidade;
    scanf("%u", &pontosTuristicos2);

    //calculo de densidade e pib per capito da carta 2:
    densidadePopulacional2 = populacao2 / area2; 
    pibPerCapito2 = pib2 / populacao2;

    printf("\n");//linha invisivel;

    //escolha do cirterio de comparacao do jogador;
    int escolha;
    ///menu de opcao e criterios de comparacao;
    printf("1.Populcao;\n");
    printf("2.Area\n");
    printf("3.PIB;\n");
    printf("4.Densidade Populacional;\n");
    printf("5.PIB Per Capita;\n");
    printf("Escolha uma opcao:");//escolha da opcao;
    scanf("%d", &escolha);//leitura da opcao;

    printf("\n");
    //estrutura switch usada para definir o venccedor nos casos da escolha de criterios:
    switch (escolha){
    case 1://caso de escolha de populcao:
        if(populacao > populacao2){
            printf("Carta 1 VENCEU!\n");
        }else if(populacao < populacao2){
            printf("Carta 2 VENCEU!\n");
        }else {
            printf("EMPATE!\n");
        }
        break;
    case 2://caso de escolha de area:
       if(area > area2){
        printf("Carta 1 VENCEU!\n");
       }else if(area < area2){
        printf("Carta 2 VENCEU!\n");
       }else{
        printf("EMPATE!\n");
       }
       break;
    case 3://caso de escolha de PIB:
       if(pib > pib2){
        printf("Carta 1 VENCEU!\n");
       }else if(pib < pib2){
        printf("Carta 2 VENCEU!\n");
       }else{
        printf("EMPATE!\n");
       }
       break;
     case 4://caso de escolha de densidade populacional:
        if(densidadePopulacional < densidadePopulacional2){
            printf("Carta 1 VENCEU!\n");
        }else if(densidadePopulacional > densidadePopulacional2){
            printf("Carta 2 VENCEU!\n");
        }else {
            printf("EMPATE!\n");
        }
        break;
     case 5://caso de escolah de PIB Per Capita:
        if(pibPerCapito > pibPerCapito2){
            printf("Carta 1 VENCEU!\n");
        }else if(pibPerCapito < pibPerCapito2){
            printf("Carta 2 VENCEU!\n");
        }else {
            printf("EMPATE!\n");
        }
        break;
    }
    return 0; 
}