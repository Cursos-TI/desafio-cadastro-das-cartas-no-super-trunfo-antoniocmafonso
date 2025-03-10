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

    char estado1[15];

    printf("Digite o nome do estado1:\n");

    scanf("%s", estado1);

//////////////////////////////////////////////////////

    char codigo1[5];

    printf("Digite o código1:\n");

    scanf("%s", codigo1);

//////////////////////////////////////////////////////

    char cidade1[10];

    printf("Digite o nome da cidade1:\n");

    scanf("%s", cidade1);

//////////////////////////////////////////////////////

    int populacao1;

    printf("Digite a população1:\n");

    scanf("%d", &populacao1);

//////////////////////////////////////////////////////

    float area1;

    printf("Digite a área1 em km²:\n");

    scanf("%f", &area1);

//////////////////////////////////////////////////////

    float pib1;

    printf("Digite o pib1:\n");

    scanf("%f", &pib1);

//////////////////////////////////////////////////////

    int pontos_turisticos1;

    printf("Quantos pontos turísticos a cidade1 possui?:\n");

    scanf("%d", &pontos_turisticos1);

//////////////////////////////////////////////////////

// Informações referentes a carta 2

    char estado2[15];

    printf("Digite o nome do estado2:\n");

    scanf("%s", estado2);

//////////////////////////////////////////////////////

    char codigo2[5];

    printf("Digite o código2:\n");

    scanf("%s", codigo2);

//////////////////////////////////////////////////////

    char cidade2[10];

    printf("Digite o nome da cidade2:\n");

    scanf("%s", cidade2);

//////////////////////////////////////////////////////

    int populacao2;

    printf("Digite a população2:\n");

    scanf("%d", &populacao2);

//////////////////////////////////////////////////////

    float area2;

    printf("Digite a área2 em km²:\n");

    scanf("%f", &area2);

//////////////////////////////////////////////////////

    float pib2;

    printf("Digite o pib2:\n");

    scanf("%f", &pib2);

//////////////////////////////////////////////////////

    int pontos_turisticos2;

    printf("Quantos pontos turísticos a cidade2 possui?:\n");

    scanf("%d", &pontos_turisticos2);

//////////////////////////////////////////////////////

// Prints da carta 1

    printf("\nEstado: %s\n", estado1);

    printf("Código da Carta: %s\n", codigo1);

    printf("Nome da Cidade: %s\n", cidade1);

    printf("População: %d habitantes\n", populacao1);

    printf("Área: %.2f km²\n", area1);

    printf("PIB: %.2f bilhões de Reais\n", pib1);

    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

// Prints da carta 2

    printf("\nEstado: %s\n", estado2);

    printf("Código da Carta: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", cidade2);

    printf("População: %d habitantes\n", populacao2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: %.2f bilhões de Reais\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
