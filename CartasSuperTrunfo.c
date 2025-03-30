#include <stdio.h>

char estado1;
char estado2;
char codcarta1[3];
char codcarta2[3];
char cidade1[150];
char cidade2[150];
int populacao1;
int populacao2;
float area1;
float area2;
float pib1;
float pib2;
int pontostur1;
int pontostur2;

int main(){

    printf("Olá! Vamos jogar SUPER TRUNFO!\nDIGITE AS INFORMAÇÕES PEDIDAS DAS SUAS 2 CARTAS!\n");
    printf("Vamos começar!\nCARTA 01:\n");

    printf("Uma letra de 'A' a 'H' (representando um dos oito estados).\n");
    scanf("%s", &estado1);

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


    printf("RESULTADO: \nEstado: %c", estado1);
    printf("\nCódigo: %s",codcarta1);
    printf("\nCidade: %s",cidade1);
    printf("\nPopulação: %d",populacao1);                   // INFORMAÇÕES DA 1ª CARTA !!!
    printf("\nÁrea: %.2f",area1);
    printf("\nPIB: %.2f", pib1);
    printf("\nPontos turisticos: %d", pontostur1);

    // ----- FIM DA PRIMEIRA CARTA -----

    printf("\nAGORA, A PRÓXIMA CARTA!\nCARTA 02:\n"); // <------------ PRINTF E SCANF CARTA Nº 2 !!!

    printf("Uma letra de 'A' a 'H' (representando um dos oito estados).\n");
    scanf("%s", &estado2);

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

    printf("RESULTADO: \nEstado: %c", estado2);
    printf("\nCódigo: %s",codcarta2);
    printf("\nCidade: %s",cidade2);
    printf("\nPopulação: %d",populacao2);            // INFORMAÇÕES DA 2ª CARTA !!!
    printf("\nÁrea: %.2f",area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nPontos turisticos: %d", pontostur2);

    return 0;
}
