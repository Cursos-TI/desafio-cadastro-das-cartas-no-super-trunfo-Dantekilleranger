#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    unsigned long int populacao1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1;
    int pontosTuristicos1;
    char estado1, codigo1[4], nomeCidade1[50];

    // Declaração das variáveis para a segunda carta
    unsigned long int populacao2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;
    int pontosTuristicos2;
    char estado2, codigo2[4], nomeCidade2[50];

    // Variáveis para contar as vitórias
    int vitoriasCarta1 = 0;
    int vitoriasCarta2 = 0;

    // Entrada de dados para a primeira carta
    printf("Informe o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);
    printf("Informe o código da primeira carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("Informe a população da cidade: ");
    scanf(" %lu", &populacao1);
    printf("Informe a área da cidade (km²): ");
    scanf(" %f", &area1);
    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Informe o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Entrada de dados para a segunda carta
    printf("\nInforme o estado da segunda carta (A-H): ");
    scanf(" %c", &estado2);
    printf("Informe o código da segunda carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("Informe a população da cidade: ");
    scanf(" %lu", &populacao2);
    printf("Informe a área da cidade (km²): ");
    scanf(" %f", &area2);
    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Informe o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculos da densidade populacional e PIB per capita para a primeira carta
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1; // PIB em reais por pessoa (convertendo bilhões para reais)

    // Cálculos da densidade populacional e PIB per capita para a segunda carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2; // PIB em reais por pessoa (convertendo bilhões para reais)

    // Cálculos do Super Poder (soma dos atributos)
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // Comparação dos atributos
    // Comparação da População
    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu (%d)\n", ++vitoriasCarta1);
    } else {
        printf("População: Carta 2 venceu (%d)\n", ++vitoriasCarta2);
    }

    // Comparação da Área
    if (area1 > area2) {
        printf("Área: Carta 1 venceu (%d)\n", ++vitoriasCarta1);
    } else {
        printf("Área: Carta 2 venceu (%d)\n", ++vitoriasCarta2);
    }

    // Comparação do PIB
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (%d)\n", ++vitoriasCarta1);
    } else {
        printf("PIB: Carta 2 venceu (%d)\n", ++vitoriasCarta2);
    }

    // Comparação dos Pontos Turísticos
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", ++vitoriasCarta1);
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (%d)\n", ++vitoriasCarta2);
    }

    // Comparação da Densidade Populacional (menor valor vence)
    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", ++vitoriasCarta1);
    } else {
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", ++vitoriasCarta2);
    }

    // Comparação do PIB per Capita
    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: Carta 1 venceu (%d)\n", ++vitoriasCarta1);
    } else {
        printf("PIB per Capita: Carta 2 venceu (%d)\n", ++vitoriasCarta2);
    }

    // Comparação do Super Poder
    if (superPoder1 > superPoder2) {
        printf("Super Poder: Carta 1 venceu (%d)\n", ++vitoriasCarta1);
    } else {
        printf("Super Poder: Carta 2 venceu (%d)\n", ++vitoriasCarta2);
    }

    // Exibição do vencedor final com base no número de vitórias
    if (vitoriasCarta1 > vitoriasCarta2) {
        printf("\nCarta 1 venceu o Super Trunfo com %d vitórias!\n", vitoriasCarta1);
    } else if (vitoriasCarta1 < vitoriasCarta2) {
        printf("\nCarta 2 venceu o Super Trunfo com %d vitórias!\n", vitoriasCarta2);
    } else {
        printf("\nEmpate! Ambas as cartas têm o mesmo número de vitórias (%d).\n", vitoriasCarta1);
    }

    return 0;
}
