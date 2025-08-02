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

    //compracao dos atributos da carta:
    if (populacao > populacao2){
        printf("Carta 1 venceu!\n");
        carta1++;//incrementa 1 unidade casoa carta 1 ganhe a comparacao;
    }else{ 
        printf("Carta 2 venceu!\n");
        carta2++;//incrementa 1 unidade casoa carta 2 ganhe a comparacao;
    }
    if (area > area2){
        printf("Carta 1 venceu!\n");
        carta1++;//incrementa 1 unidade casoa carta 1 ganhe a comparacao;
    }else {
        printf("Carta 2 venceu!\n");
        carta2++;//incrementa 1 unidade casoa carta 2 ganhe a comparacao;
    }
    if (pib > pib2){
        printf("Carta 1 venceu!\n");
        carta1++;//incrementa 1 unidade casoa carta 1 ganhe a comparacao;
    }else{
        printf("Carta 2 venceu!\n");
        carta2++;//incrementa 1 unidade casoa carta 2 ganhe a comparacao;
    }     
    if (densidadePopulacional < densidadePopulacional2){
        printf("Carta 1 venceu!\n");
        carta1++;//incrementa 1 unidade casoa carta 1 ganhe a comparacao;
    }else{
        printf("Carta 2 venceu!\n");
        carta2++;//incrementa 1 unidade casoa carta 2 ganhe a comparacao;
    }
    if (pibPerCapito > pibPerCapito2){
        printf("Carta 1 venceu!\n");
        carta1++;//incrementa 1 unidade casoa carta 1 ganhe a comparacao;
    }else {
        printf("carta 2 venceu!\n");
        carta2++;//incrementa 1 unidade casoa carta 2 ganhe a comparacao;
    }

    printf("\n");//linha invisivel;

    //resultado do jogo;
    if (carta1 > carta2){
        printf("RESULTADO: CARTA 1 VENCEU!");
    }else{
        printf("RESULTADO: CARTA 2 VENCEU!");
    }
    return 0; 
}