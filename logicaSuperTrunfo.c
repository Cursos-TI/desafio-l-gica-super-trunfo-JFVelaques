#include <stdio.h>



struct CartaCidade {
    char estado[50];
    int codigo;
    char nome[50];
    long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    
    struct CartaCidade carta1, carta2;
    int opcao;

    printf("=== Super Trunfo - Países (Nível Novato) ===\n\n");

    
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", carta1.estado);
    printf("Código da carta: ");
    scanf("%d", &carta1.codigo);
    printf("Nome da cidade: ");
    scanf("%s", carta1.nome);
    printf("População: ");
    scanf("%ld", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n");

    
    printf("Cadastro da Carta 2:\n");
    printf("Estado: ");
    scanf("%s", carta2.estado);
    printf("Código da carta: ");
    scanf("%d", &carta2.codigo);
    printf("Nome da cidade: ");
    scanf("%s", carta2.nome);
    printf("População: ");
    scanf("%ld", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n");

    
    printf("=== Cartas Cadastradas ===\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %d\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nome);
    printf("População: %ld\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n\n", carta1.pontosTuristicos);

    printf("Carta 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %d\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nome);
    printf("População: %ld\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n\n", carta2.pontosTuristicos);

    
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("Digite a opção (1-4): ");
    scanf("%d", &opcao);

    
    printf("\n=== Resultado da Comparação ===\n");

    if (opcao == 1) {
        printf("Comparando População:\n");
        if (carta1.populacao > carta2.populacao) {
            printf("Carta 1 venceu!\n");
        } else if (carta2.populacao > carta1.populacao) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
    } else if (opcao == 2) {
        printf("Comparando Área:\n");
        if (carta1.area > carta2.area) {
            printf("Carta 1 venceu!\n");
        } else if (carta2.area > carta1.area) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
    } else if (opcao == 3) {
        printf("Comparando PIB:\n");
        if (carta1.pib > carta2.pib) {
            printf("Carta 1 venceu!\n");
        } else if (carta2.pib > carta1.pib) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
    } else if (opcao == 4) {
        printf("Comparando Pontos Turísticos:\n");
        if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
            printf("Carta 1 venceu!\n");
        } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
    } else {
        printf("Opção inválida!\n");
    }

    printf("\n=== Fim do Jogo ===\n");

    return 0;
}
