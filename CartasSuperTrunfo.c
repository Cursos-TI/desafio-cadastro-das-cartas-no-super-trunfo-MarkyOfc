#include <stdio.h>

char estado1, estado2;
char codcarta1[3], codcarta2[3];
char cidade1[150], cidade2[150];

int populacao1, populacao2, pontostur1, pontostur2;     // VARIAVEIS 1 E 2 SEPARADAS EM CHAR, INT E FLOAT

float area1, area2, pib1, pib2;
float densipopula1, densipopula2;
float pibcapta1, pibcapta2;

int main(){

        printf("*********** Olá! Vamos jogar SUPER TRUNFO! ***********\n *********** DIGITE AS INFORMAÇÕES PEDIDAS DAS SUAS 2 CARTAS! ***********\n");
    printf("--- Vamos começar! ---\nCARTA 01:\n");

        printf("Uma letra de 'A' a 'H' (representando um dos oito estados).\n");
    scanf(" %s", &estado1);

        printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");
    scanf("%s", &codcarta1);

        printf("Digite o nome da cidade.\n");
    scanf("%s", &cidade1);

        printf("Digite o número de habitantes da cidade.\n");
    scanf("%d", &populacao1);

        printf("Digite a área da cidade em quilômetros quadrados(km²).\n");
    scanf("%f", &area1);

        printf("Digite o Produto Interno Bruto da cidade(PIB).\n");
    scanf("%f", &pib1);

        printf("Digite a quantidade de pontos turísticos na cidade.\n");
    scanf("%d", &pontostur1);


    printf("RESULTADO CARTA 01: \nEstado: %c", estado1);
    printf("\nCódigo: %s",codcarta1);
    printf("\nCidade: %s",cidade1);
    printf("\nPopulação: %d",populacao1);                   // INFORMAÇÕES DA 1ª CARTA !!!
    printf("\nÁrea: %.2f",area1);
    printf("\nPIB: %.2f", pib1);
    printf("\nPontos turisticos: %d", pontostur1);

        densipopula1 = (populacao1 / area1);                // CALCULA DENSIDADE POPULACIONAL (POPULAÇÃO / ÁREA)
    printf("\nDensidade Populacional: %.2f Hab/por km².", densipopula1);

        pibcapta1 = (pib1 / populacao1);                    // CALCULA PIB PER CAPITA (PIB / POPULAÇÃO)
    printf("\nPIB per capita: %.2f reais.", pibcapta1);

    // ----- FIM DA PRIMEIRA CARTA -----

    printf("\n*********** AGORA, A PRÓXIMA CARTA! ***********\nCARTA 02:\n"); // <------------ PRINTF E SCANF CARTA Nº 2 !!!

    printf("Uma letra de 'A' a 'H' (representando um dos oito estados).\n");
    scanf(" %s", &estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");
    scanf("%s", &codcarta2);

    printf("Digite o nome da cidade.\n");
    scanf("%s", &cidade2);

    printf("Digite o número de habitantes da cidade.\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados(km²).\n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade(PIB).\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade.\n");
    scanf("%d", &pontostur2);

    printf("*** RESULTADO CARTA 02: ***\nEstado: %c", estado2);
    printf("\nCódigo: %s",codcarta2);
    printf("\nCidade: %s",cidade2);
    printf("\nPopulação: %d",populacao2);                   // INFORMAÇÕES DA 2ª CARTA !!!
    printf("\nÁrea: %.2f",area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nPontos turisticos: %d", pontostur2);

        densipopula2 = (populacao2 / area2);                // CALCULA DENSIDADE POPULACIONAL (POPULAÇÃO / ÁREA)
    printf("\nDensidade Populacional: %.2f Hab/por km².", densipopula2);

        pibcapta2 = (pib2 / populacao2);                    // CALCULA PIB PER CAPITA (PIB / POPULAÇÃO)
    printf("\nPIB per capita: %.2f reais.\n", pibcapta2);

    printf("********** FIM DE JOGO **********");            // ----- FIM DA SEGUNDA CARTA -----

    return 0;
}
