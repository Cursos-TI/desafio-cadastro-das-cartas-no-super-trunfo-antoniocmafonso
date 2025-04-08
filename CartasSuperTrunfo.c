#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

/*
Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
 
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 
População: O número de habitantes da cidade. Tipo: int
 
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 
PIB: O Produto Interno Bruto da cidade. Tipo: float
 
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
*/

int main() {

// Informações referentes a carta 1

//////////////////////////////////////////////////////

// Cadastro do estado

    char estado1[15];

    printf("Digite o nome do estado1:\n");

    scanf("%s", estado1);

//////////////////////////////////////////////////////

// Cadastro do código da carta

    char codigo1[5];

    printf("Digite o código1:\n");

    scanf("%s", codigo1);

//////////////////////////////////////////////////////

// Cadastro da cidade

    char cidade1[10];

    printf("Digite o nome da cidade1:\n");

    scanf("%s", cidade1);

//////////////////////////////////////////////////////

// Inserindo a população da cidade

    int populacao1;

    printf("Digite a população1:\n");

    scanf("%d", &populacao1);

//////////////////////////////////////////////////////

// Inserindo a área da cidade

    float area1;

    printf("Digite a área1 em km²:\n");

    scanf("%f", &area1);

//////////////////////////////////////////////////////

// Inserindo o PIB da cidade

    float pib1;

    printf("Digite o pib1:\n");

    scanf("%f", &pib1);

//////////////////////////////////////////////////////

// Quantidade de pontos turísticos da cidade

    int pontos_turisticos1;

    printf("Quantos pontos turísticos a cidade1 possui?:\n");

    scanf("%d", &pontos_turisticos1);

//////////////////////////////////////////////////////

// Densidade Populacional

    float densidade_populacional1;

    densidade_populacional1 = (populacao1 / area1);

//////////////////////////////////////////////////////

// PIB per Capita

    float pib_perCapita1;

    pib_perCapita1 = (pib1 / populacao1);

//////////////////////////////////////////////////////

// Informações referentes a carta 2

//////////////////////////////////////////////////////

// Cadastro do estado

    char estado2[15];

    printf("Digite o nome do estado2:\n");

    scanf("%s", estado2);

//////////////////////////////////////////////////////

// Cadastro do código da carta

    char codigo2[5];

    printf("Digite o código2:\n");

    scanf("%s", codigo2);

//////////////////////////////////////////////////////

// Cadastro da cidade

    char cidade2[10];

    printf("Digite o nome da cidade2:\n");

    scanf("%s", cidade2);

//////////////////////////////////////////////////////

// Inserindo a população da cidade

    int populacao2;

    printf("Digite a população2:\n");

    scanf("%d", &populacao2);

//////////////////////////////////////////////////////

// Inserindo a área da cidade

    float area2;

    printf("Digite a área2 em km²:\n");

    scanf("%f", &area2);

//////////////////////////////////////////////////////

// Inserindo o PIB da cidade

    float pib2;

    printf("Digite o pib2:\n");

    scanf("%f", &pib2);

//////////////////////////////////////////////////////

// Quantidade de pontos turísticos da cidade

    int pontos_turisticos2;

    printf("Quantos pontos turísticos a cidade2 possui?:\n");

    scanf("%d", &pontos_turisticos2);

//////////////////////////////////////////////////////

// Densidade Populacional

float densidade_populacional2;

densidade_populacional2 = (populacao2 / area2);

//////////////////////////////////////////////////////

// PIB per Capita

float pib_perCapita2;

pib_perCapita2 = (pib2 / populacao2);

//////////////////////////////////////////////////////

// Prints - Carta 1

    printf("Carta 1: \n");

    printf("\nEstado: %s\n", estado1);

    printf("Código da Carta: %s\n", codigo1);

    printf("Nome da Cidade: %s\n", cidade1);

    printf("População: %d habitantes\n", populacao1);

    printf("Área: %.2f km²\n", area1);

    printf("PIB: %.2f bilhões de Reais\n", pib1);

    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);

    printf("PIB per Capita: %.f Reais\n", pib_perCapita1);

// Prints - Carta 2

    printf("Carta 2: \n");

    printf("\nEstado: %s\n", estado2);

    printf("Código da Carta: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", cidade2);

    printf("População: %d habitantes\n", populacao2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: %.2f bilhões de Reais\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);

    printf("PIB per Capita: %.f Reais\n", pib_perCapita2);

    return 0;
}
