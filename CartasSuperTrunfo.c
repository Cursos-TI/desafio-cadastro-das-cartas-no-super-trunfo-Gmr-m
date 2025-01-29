#include <stdio.h>


//Meu comentário sobre o desafio, pois não entendi muito bem a finalidade. Nos foi dada a tarefa de comparar as cartas e definir os vencedores,
//entretando para isso eu precisaria desenvolver um código especificamente para o armazenamento dos dados dessa carta e não nos foi passado a conexão com o banco de dados
//para tal realização ou nenhuma outra maneira de executar essa tarefa, além  disso para o cadastro também precisaria utilizar estrutas condicionais e de repetição
//como for ou while que também não foi passado até o presente momento na linguagem C, gostaria de saber se o que preparei e enviei está correto ou se de fato eu deveria
//pesquisar por conta e entregar o desafio funcionando da forma correta como foi pedida...   


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char Estado1;
    char Estado2;
    char Codigo_Carta1;
    char Codigo_Carta2;
    char Nome_Cidade1 [200];
    char Nome_Cidade2 [200];
    int Populacao1;
    int Populacao2;
    float Area1;
    float Area2;
    float PIB1;
    float PIB2;
    int Ponto_Turistico1;
    int Ponto_Turistico2;
    float densidadeCidade1;
    float densidadeCidade2;
    float PIBperCapta1;
    float PIBperCapta2;
    float SuperPoder2;
    float SuperPoder1;
    float CartaA;
    float CartaB;

    int opcao1;
    int opcao2;
    int condicao;

    condicao = 1;

   

    while (condicao == 1){

        printf("Escolha uma opção:\n");
        printf("1. Jogar\n");
        printf("2. Ver regras\n");
        printf("3. Sair do Jogo\n");
        printf("Escolha uma opção: ");
        scanf(" %d", &opcao1);
    
        switch (opcao1)
        {
                
        case 1:

            printf("\n\n\nEscolha uma opção:\n");
            printf("1. Modo normal\n");
            printf("2. Comparar todos os atributosn\n");
            printf("3. Voltar");

            switch (opcao2)
            {
            case 1:

                printf("Digite uma letra de  A a H para representar o Estado da Carta A:\n");
                scanf(" %c", &Estado1);
                printf("Escolha um número de 1 a 4 para o código da carta:\n");
                scanf(" %c", &Codigo_Carta1);
                printf("Digite o nome da Cidade:\n");
                scanf(" %s", &Nome_Cidade1);
                printf("Digite a população total da cidade escolhida:\n");
                scanf(" %i", &Populacao1);
                printf("Digite a Área total da cidade escolhida:\n");
                scanf(" %f", &Area1);
                printf("Digite quantos pontos turísticos há na cidade escolhida:\n");
                scanf(" %i", &Ponto_Turistico1);
                printf("Digite o PIB da cidade escolhida:\n");
                scanf(" %f", &PIB1);

                densidadeCidade1 = (float) Populacao1 / Area1;
                PIBperCapta1     = (float) PIB1 / Populacao1;
                SuperPoder1      = (float) Populacao1 + Area1 + PIB1 + Ponto_Turistico1 + densidadeCidade1 + PIBperCapta1;

                printf("\n\n\nCódigo da carta: %c0%c\n", Estado1, Codigo_Carta1);
                printf("Estado: %c\n", Estado1);    
                printf("Nome da cidade: %s\n", Nome_Cidade1);
                printf("População Total: %i\n", Populacao1);
                printf("Área: %.2f Km²\n", Area1);
                printf("Densidade Populacional: %.2f\n", densidadeCidade1);
                printf("Pontos turísticos %i\n", Ponto_Turistico1);
                printf("PIB: %.2f\n", PIB1);
                printf("PIB per Capta: %.2f\n", PIBperCapta1);
                printf("Super Poder: %.2f\n\n\n", SuperPoder1);
                
                CartaA = SuperPoder1;

                //------------------------------------------------------------- CARTA B ------------------------------------------------------------------------------

                printf("Digite uma letra de  A a H para representar o Estado da Carta B:\n");
                scanf(" %c", &Estado2);
                printf("Escolha um número de 1 a 4 para o código da carta:\n");
                scanf(" %c", &Codigo_Carta2);
                printf("Digite o nome da Cidade:\n");
                scanf(" %s", &Nome_Cidade2);
                printf("Digite a população total da cidade escolhida:\n");
                scanf(" %i", &Populacao2);
                printf("Digite a Área total da cidade escolhida:\n");
                scanf(" %f", &Area2);
                printf("Digite quantos pontos turísticos há na cidade escolhida:\n");
                scanf(" %i", &Ponto_Turistico2);
                printf("Digite o PIB da cidade escolhida:\n");
                scanf(" %f", &PIB2);

                densidadeCidade2 = (float) Populacao2 / Area2;
                PIBperCapta2     = (float) PIB2 / Populacao2;
                SuperPoder2      = (float) Populacao2 + Area2 + PIB2 + Ponto_Turistico2 + densidadeCidade2 + PIBperCapta2;

                printf("\n\n\nCódigo da carta: %c0%c\n", Estado2, Codigo_Carta2);
                printf("Estado: %c\n", Estado2);    
                printf("Nome da cidade: %s\n", Nome_Cidade2);
                printf("População Total: %i\n", Populacao2);
                printf("Área: %.2f Km²\n", Area2);
                printf("Densidade Populacional: %.2f\n", densidadeCidade2);
                printf("Pontos turísticos %i\n", Ponto_Turistico2);
                printf("PIB: %.2f\n", PIB2);
                printf("PIB per Capta: %.2f\n", PIBperCapta2);
                printf("Super Poder: %.2f\n\n\n", SuperPoder2);

                CartaB = SuperPoder2;

                if (CartaA > CartaB){
                    printf("Carta A é a vencedora\n\n\n\n");
                }   else if (CartaA == CartaB){
                    printf("O jogo empatou\n\n\n\n");
                } else{
                    printf("A carta B é vencedora\n\n\n\n");
                }; 
                condicao = 2;   

                break;

            case 2:

            //---------------------------------------------------------------- CASO 2 -------------------------------------------------------------------------------

            printf("Digite uma letra de  A a H para representar o Estado da Carta A:\n");
                scanf(" %c", &Estado1);
                printf("Escolha um número de 1 a 4 para o código da carta:\n");
                scanf(" %c", &Codigo_Carta1);
                printf("Digite o nome da Cidade:\n");
                scanf(" %s", &Nome_Cidade1);
                printf("Digite a população total da cidade escolhida:\n");
                scanf(" %i", &Populacao1);
                printf("Digite a Área total da cidade escolhida:\n");
                scanf(" %f", &Area1);
                printf("Digite quantos pontos turísticos há na cidade escolhida:\n");
                scanf(" %i", &Ponto_Turistico1);
                printf("Digite o PIB da cidade escolhida:\n");
                scanf(" %f", &PIB1);

                densidadeCidade1 = (float) Populacao1 / Area1;
                PIBperCapta1     = (float) PIB1 / Populacao1;
                SuperPoder1      = (float) Populacao1 + Area1 + PIB1 + Ponto_Turistico1 + densidadeCidade1 + PIBperCapta1;

                printf("\n\n\nCódigo da carta: %c0%c\n", Estado1, Codigo_Carta1);
                printf("Estado: %c\n", Estado1);    
                printf("Nome da cidade: %s\n", Nome_Cidade1);
                printf("População Total: %i\n", Populacao1);
                printf("Área: %.2f Km²\n", Area1);
                printf("Densidade Populacional: %.2f\n", densidadeCidade1);
                printf("Pontos turísticos %i\n", Ponto_Turistico1);
                printf("PIB: %.2f\n", PIB1);
                printf("PIB per Capta: %.2f\n", PIBperCapta1);
                printf("Super Poder: %.2f\n\n\n", SuperPoder1);
                
                CartaA = SuperPoder1;

                //------------------------------------------------------------- CARTA B ------------------------------------------------------------------------------

                printf("Digite uma letra de  A a H para representar o Estado da Carta B:\n");
                scanf(" %c", &Estado2);
                printf("Escolha um número de 1 a 4 para o código da carta:\n");
                scanf(" %c", &Codigo_Carta2);
                printf("Digite o nome da Cidade:\n");
                scanf(" %s", &Nome_Cidade2);
                printf("Digite a população total da cidade escolhida:\n");
                scanf(" %i", &Populacao2);
                printf("Digite a Área total da cidade escolhida:\n");
                scanf(" %f", &Area2);
                printf("Digite quantos pontos turísticos há na cidade escolhida:\n");
                scanf(" %i", &Ponto_Turistico2);
                printf("Digite o PIB da cidade escolhida:\n");
                scanf(" %f", &PIB2);

                densidadeCidade2 = (float) Populacao2 / Area2;
                PIBperCapta2     = (float) PIB2 / Populacao2;
                SuperPoder2      = (float) Populacao2 + Area2 + PIB2 + Ponto_Turistico2 + densidadeCidade2 + PIBperCapta2;

                printf("\n\n\nCódigo da carta: %c0%c\n", Estado2, Codigo_Carta2);
                printf("Estado: %c\n", Estado2);    
                printf("Nome da cidade: %s\n", Nome_Cidade2);
                printf("População Total: %i\n", Populacao2);
                printf("Área: %.2f Km²\n", Area2);
                printf("Densidade Populacional: %.2f\n", densidadeCidade2);
                printf("Pontos turísticos %i\n", Ponto_Turistico2);
                printf("PIB: %.2f\n", PIB2);
                printf("PIB per Capta: %.2f\n", PIBperCapta2);
                printf("Super Poder: %.2f\n\n\n", SuperPoder2);

                CartaB = SuperPoder2;
                
                





                if (CartaA > CartaB){
                    printf("Carta A é a vencedora\n\n\n\n");
                }   else if (CartaA == CartaB){
                    printf("O jogo empatou\n\n\n\n");
                } else{
                    printf("A carta B é vencedora\n\n\n\n");
                };

            break;

            default:
                break;
            }



        case 2:
            printf("Você deverá informar os status de sua carta para que seja realizada a comparação\n");
            printf("com as cartas do oponente\n\n\n\n");     
            opcao1 = 0;  
            break;

        case 3:  
            condicao = 2;
            printf("O jogo está sendo encerrado!!!\n\n\n\n");              
            break;            

        default:
            printf("Opção inválida!\n\n\n\n");
            break;
        }
    }







    
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
