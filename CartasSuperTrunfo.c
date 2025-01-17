#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char Estado;
    char Codigo_Carta;
    char Nome_Cidade[20];
    int Populacao;
    float Area;
    float PIB;
    int Ponto_Turistico;

    printf("Digite uma letra de  A a H para representar o Estado:\n");
    scanf("%c", &Estado);
    printf("Escolha um número de 1 a 4 para o código da carta:\n");
    scanf(" %c", &Codigo_Carta);
    printf("Digite o nome da Cidade:\n");
    scanf(" %s", &Nome_Cidade);


    printf("Seu estado é: %c\n", Estado);
    printf("O código da sua carta é: %c0%c\n", Estado, Codigo_Carta);
    printf("O nome da cidade é: %s\n", Nome_Cidade);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
