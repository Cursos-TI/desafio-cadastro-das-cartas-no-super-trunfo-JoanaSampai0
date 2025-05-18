#include <stdio.h>

int main() {
    // Definição da Estrutura da Carta
    char estado1[2];
    char codigoDaCarta1[4];
    char nomeDaCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numeroPontosTuristicos1;

    char estado2[2];
    char codigoDaCarta2[4];
    char nomeDaCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numeroPontosTuristicos2;

    // Exibição do Menu Inicial
    printf("Bem-vindo ao Super Trunfo!\n");
    printf("Por favor, insira os dados da carta 1:\n");

    printf("Digite nome do Estado usando somente uma letra de A a H (1 letra): \n");
    scanf("%s", estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03). (3 dígitos): \n");
    scanf("%s", codigoDaCarta1);

    printf("Digite o nome da cidade (máximo 50 caracteres): \n");
    scanf("%s", nomeDaCidade1);

    printf("Digite a população da cidade (número inteiro): \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &numeroPontosTuristicos1);

    printf("\nPor favor, insira os dados da carta 2:\n");
    printf("Digite nome do Estado usando somente uma letra de A a H (1 letra): \n");
    scanf("%s", estado2);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03). (3 dígitos): \n");
    scanf("%s", codigoDaCarta2);
    printf("Digite o nome da cidade (máximo 50 caracteres): \n");
    scanf("%s", nomeDaCidade2);
    printf("Digite a população da cidade (número inteiro): \n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &numeroPontosTuristicos2);

    // Exibindo os Dados da Carta 1
    printf("\nDados da Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);

    // Exibindo os Dados da Carta 2
    printf("\nDados da Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);
    

    return 0;
}
