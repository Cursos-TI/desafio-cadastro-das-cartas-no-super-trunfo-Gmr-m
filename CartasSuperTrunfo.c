#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char Estado;
    char Codigo_Carta;
    char Nome_Cidade [200];
    int Populacao;
    float Area;
    float PIB;
    int Ponto_Turistico;
    float densidadeCidade;
    float PIBperCapta;
    float SuperPoder;

    printf("Digite uma letra de  A a H para representar o Estado:\n");
    scanf("%c", &Estado);
    printf("Escolha um número de 1 a 4 para o código da carta:\n");
    scanf(" %c", &Codigo_Carta);
    printf("Digite o nome da Cidade:\n");
    scanf(" %s", &Nome_Cidade);
    printf("Digite a população total da cidade escolhida:\n");
    scanf(" %i", &Populacao);
    printf("Digite a Área total da cidade escolhida:\n");
    scanf(" %f", &Area);
    printf("Digite quantos pontos turísticos há na cidade escolhida:\n");
    scanf(" %i", &Ponto_Turistico);
    printf("Digite o PIB da cidade escolhida:\n");
    scanf(" %f", &PIB);

    densidadeCidade = (float) Populacao / Area;
    PIBperCapta     = (float) PIB / Populacao;
    SuperPoder      = (float) Populacao + Area + PIB + Ponto_Turistico + densidadeCidade + PIBperCapta;

    printf("\n\n\nCódigo da carta: %c0%c\n", Estado, Codigo_Carta);
    printf("Estado: %c\n", Estado);    
    printf("Nome da cidade: %s\n", Nome_Cidade);
    printf("População Total: %i\n", Populacao);
    printf("Área: %.2f Km²\n", Area);
    printf("Densidade Populacional: %.2f\n", densidadeCidade);
    printf("Pontos turísticos %i\n", Ponto_Turistico);
    printf("PIB: %.2f\n", PIB);
    printf("PIB per Capta: %.2f\n", PIBperCapta);
    printf("Super Poder: %.2f\n\n\n", SuperPoder);
    
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
