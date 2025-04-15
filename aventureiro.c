#include <stdio.h>

int main() {
    // Variáveis das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Variáveis para cálculos
    float densidade1, densidade2;          
    float pib_per_capita1, pib_per_capita2; 

    // Entrada da Carta 1
    printf("Digite os dados da carta 1:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%4s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%99s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);  // Use ponto como separador decimal (ex: 1521.50)

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);   // Use ponto como separador decimal (ex: 2.5)

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Entrada da Carta 2
    printf("\nDigite os dados da carta 2:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01): ");
    scanf("%4s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%99s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Resto do código (cálculos e exibição) permanece igual
    // ... (densidade, PIB per capita, printf's)

    return 0;
}