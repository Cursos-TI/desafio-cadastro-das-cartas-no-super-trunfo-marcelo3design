#include <stdio.h>
 
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int cod_cidade;
    char nome[50];
    int pop;
    float area;
    float pib;
    int pontos_turisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\nQual o codigo da cidade: ");
    scanf("%d", &cod_cidade);

    while ((getchar()) != '\n');    
    printf("\nQual o nome da cidade: ");
    fgets(nome, sizeof(nome), stdin);

    printf("\nQual a quantidade de população da cidade?");
    scanf("%d", &pop);

    printf("\nQual a medida da area² da cidade?");
    scanf("%f", &area);

    printf("\nQual o pib?");
    scanf("%f", &pib);
    
    printf("\nA cidade tem quantos pontos turísticos?");
    scanf("%d", &pontos_turisticos);
  
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.   
    printf("\nO código da cidade é %d", cod_cidade);
    printf("\nO nome da cidade é %s", nome);
    printf("\nA quantidade da população é %d", pop);
    printf("\nA area por metro quadrado é %.2f", area);
    printf("\nO pib é %.2f", pib);
    printf("\nA cidade tem %d pontos turísticos.", pontos_turisticos);
    printf("\n");

    return 0;



}
