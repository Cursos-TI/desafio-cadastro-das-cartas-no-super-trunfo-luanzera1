#include <stdio.h>

// Desafio Super Trunfo - Países (Nível Novato)
// Tema 1 - Cadastro das Cartas
// Por : Luan

int main() {
    
    // Declaração de Variavéis
    char estado, codigo[3], cidade[50]; // Variaveis para o Estado, código da carta e o nome da cidade.
    int populacao, pontos_turisticos; // Variaveis para inputar o valor da população da cidade e os pontos turísticos.
    float area, pib; // Variaveis para inputar os valores de area e pib da cidade.

    printf("Bem Vindo ao jogo do Super Trunfo com o tema de Países\n\n");
    printf("Para começar será necessário cadastrar as cartas do jogo!\n\n");

    // Input do Estado - Ex: de A a H
    printf("Digite uma letra de A a H :\n");
    scanf("%c", &estado);
    
    // Input do código da carta - Ex: B02
    printf("Digite o código da carta. (Repita a letra digitada anteriormente seguida de um valor entre 01 a 04 - Ex: C03) :\n");
    scanf("%s", &codigo);

    // Input do nome da cidade
    printf("Digite o nome da cidade :\n");
    scanf("%s", &cidade);

    // Input da população da cidade.
    printf("Digite a população da cidade :\n");
    scanf("%d", &populacao);

    // Input da Área em km²
    printf("Digite a área em km² da cidade :\n");
    scanf("%f", &area);

    // Input do PIB
    printf("Digite o PIB dessa cidade :\n");
    scanf("%f", &pib);

    // Input dos Pontos Turísticos
    printf("Digite a quantidade de pontos turísticos nessa cidade :\n");
    scanf("%d", &pontos_turisticos);

    // Mostrar os dados inputados
    printf("Carta cadastrada com sucesso!\n\n");
    printf("As informações inseridas foram :\n\n");

    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais.\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}