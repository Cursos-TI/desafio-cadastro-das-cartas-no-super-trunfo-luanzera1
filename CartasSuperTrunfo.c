#include <stdio.h>

// Desafio Super Trunfo - Países (Nível Novato)
// Tema 1 - Cadastro das Cartas
// Por : Luan

int main() {

    // Declaração de variáveis para a Carta 01
    char estado01, codigo01[5], cidade01[50];
    int populacao01, pontos_turisticos01;
    float area01, pib01;

    // Declaração de variáveis para a Carta 02
    char estado02, codigo02[5], cidade02[50];
    int populacao02, pontos_turisticos02;
    float area02, pib02;

    // Input dos dados da Carta 01
    printf("Carta 01\n");

    // Input do Estado da Carta 01
    printf("Digite uma letra de A a H: ");
    scanf(" %c", &estado01);

    // Input do Código da Carta 01
    printf("Digite o código da carta. (Repita a letra digitada anteriormente seguida de um valor entre 01 a 04 - Ex: C03): ");
    scanf("%s", codigo01);

    // Input do nome da Cidade da Carta 01
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade01);

    // Input da Populaçao da Carta 01
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao01);

    // Input da área da Carta 01
    printf("Digite a área em km² da cidade: ");
    scanf("%f", &area01);

    // Input do PIB da Carta 01
    printf("Digite o PIB dessa cidade (em bilhões de reais): ");
    scanf("%f", &pib01);

    // Input dos Pontos Turísticos da Carta 01
    printf("Digite a quantidade de pontos turísticos nessa cidade: ");
    scanf("%d", &pontos_turisticos01);

    // Entrada dos dados da Carta 02
    printf("\nCarta 02\n");

    // Input do Estado da Carta 02
    printf("Digite uma letra de A a H: ");
    scanf(" %c", &estado02);

    // Input do Código da Carta 02
    printf("Digite o código da carta. (Repita a letra digitada anteriormente seguida de um valor entre 01 a 04 - Ex: C03): ");
    scanf("%s", codigo02);

    // Input do nome da Cidade da Carta 02
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade02);  // Permite espaços no nome da cidade

    // Input da Populaçao da Carta 02
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao02);

    // Input da área da Carta 02
    printf("Digite a área em km² da cidade: ");
    scanf("%f", &area02);

    // Input do PIB da Carta 02
    printf("Digite o PIB dessa cidade (em bilhões de reais): ");
    scanf("%f", &pib02);

    // Input dos Pontos Turísticos da Carta 02
    printf("Digite a quantidade de pontos turísticos nessa cidade: ");
    scanf("%d", &pontos_turisticos02);

    // Exibição dos dados cadastrados
    printf("\nInformações Cadastradas:\n");

    // Mostrar resumo das cartas cadastradas
    printf("\nCarta 01\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\n",
           estado01, codigo01, cidade01, populacao01, area01, pib01, pontos_turisticos01);

    printf("\nCarta 02\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\n",
           estado02, codigo02, cidade02, populacao02, area02, pib02, pontos_turisticos02);

    return 0;
}
