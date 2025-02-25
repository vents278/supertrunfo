#include <stdio.h>

int main()
{
    // Declaração de variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    // Declaração de variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

   
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^]s", nome1);
    printf("Populacao: ");
    scanf(" %d", &populacao1);
    printf("Area (km²): ");
    scanf(" %f", &area1);
    printf("PIB (bilhoes de reais): ");
    scanf(" %f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontos1);

    
    
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: A01): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^]s", nome2);
    printf("Populacao: ");
    scanf(" %d", &populacao2);
    printf("Area (km²): ");
    scanf(" %f", &area2);
    printf("PIB (bilhoes de reais): ");
    scanf(" %f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontos2);

    // Exibição das informações
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    return 0;
}