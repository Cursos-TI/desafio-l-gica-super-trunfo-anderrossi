#include <stdio.h>
#include <string.h>

// Estrutura da carta
struct Carta {
    char estado[3];
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro das cartas
    printf("Cadastro da primeira carta:\n");
    printf("Estado (ex: SP): "); scanf("%s", carta1.estado);
    printf("Código: "); scanf("%s", carta1.codigo);
    printf("Cidade: "); scanf("%s", carta1.cidade);
    printf("População: "); scanf("%d", &carta1.populacao);
    printf("Área (km²): "); scanf("%f", &carta1.area);
    printf("PIB (R$): "); scanf("%f", &carta1.pib);
    printf("Pontos turísticos: "); scanf("%d", &carta1.pontos_turisticos);

    printf("\nCadastro da segunda carta:\n");
    printf("Estado (ex: RJ): "); scanf("%s", carta2.estado);
    printf("Código: "); scanf("%s", carta2.codigo);
    printf("Cidade: "); scanf("%s", carta2.cidade);
    printf("População: "); scanf("%d", &carta2.populacao);
    printf("Área (km²): "); scanf("%f", &carta2.area);
    printf("PIB (R$): "); scanf("%f", &carta2.pib);
    printf("Pontos turísticos: "); scanf("%d", &carta2.pontos_turisticos);

    // Cálculo da densidade populacional e PIB per capita
    float densidade1 = carta1.populacao / carta1.area;
    float pib_per_capita1 = carta1.pib / carta1.populacao;
    float densidade2 = carta2.populacao / carta2.area;
    float pib_per_capita2 = carta2.pib / carta2.populacao;

    // Atributo escolhido para comparação (ex: população)
    int atributo_escolhido = 1; // 1: População, 2: Área, 3: PIB, 4: Densidade, 5: PIB per capita

    // Comparação das cartas
    printf("\nComparação de cartas (Atributo: ");
    switch (atributo_escolhido) {
        case 1:
            printf("População):\n");
            printf("Carta 1 - %s (%s): %d\n", carta1.cidade, carta1.estado, carta1.populacao);
            printf("Carta 2 - %s (%s): %d\n", carta2.cidade, carta2.estado, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
            } else if (carta2.populacao > carta1.populacao) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 2:
            printf("Área):\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", carta1.cidade, carta1.estado, carta1.area);
            printf("Carta 2 - %s (%s): %.2f km²\n", carta2.cidade, carta2.estado, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
            } else if (carta2.area > carta1.area) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 3:
            printf("PIB):\n");
            printf("Carta 1 - %s (%s): R$ %.2f\n", carta1.cidade, carta1.estado, carta1.pib);
            printf("Carta 2 - %s (%s): R$ %.2f\n", carta2.cidade, carta2.estado, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
            } else if (carta2.pib > carta1.pib) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 4:
            printf("Densidade Populacional):\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", carta1.cidade, carta1.estado, densidade1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", carta2.cidade, carta2.estado, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 5:
            printf("PIB per capita):\n");
            printf("Carta 1 - %s (%s): R$ %.2f\n", carta1.cidade, carta1.estado, pib_per_capita1);
            printf("Carta 2 - %s (%s): R$ %.2f\n", carta2.cidade, carta2.estado, pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        default:
            printf("Atributo inválido!\n");
    }

    return 0;
}