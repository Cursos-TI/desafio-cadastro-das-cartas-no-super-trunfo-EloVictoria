#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    

        printf("Desafio  'Super Triunfo'\n");
        printf("Cadastro da carta\n");
    
        char letra; //Estado.
        char codigo[4]; //Código da carta.
        char nome [30]; //Nome da cidade.
        int populacao; //População da cidade
        float area; //Área da em Km².
        float pib; //Produto interno bruto da cidade
        int pontos_turisticos; //Número de pontos turísticos.
    
        printf("Defina o Estado com um caracter de 'A ate H': ");
        scanf("%c", &letra);
    
        printf("Digite o código da carta: ");
        scanf("%s", &codigo);
    
        printf("Digite o nome da cidade: ");
        scanf("%s", &nome);
    
        printf("digite a população da cidade: ");
        scanf("%d", &populacao);
    
        printf("Digite a área da cidade (em km²):  ");
        scanf("%f", &area);
    
        printf("Digite o valor do PIB da cidade: ");
        scanf("%f", &pib);
    
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos_turisticos);
    
        // Exibição de dados da carta 1
        printf("\n Dados da carta cadastrada:\n");
    
        printf("Letra de representação do estado: %c\n", letra);
        printf("Código da carta: %s\n", codigo);
        printf("Nome da cidade: %s\n", nome);
        printf("População: %d\n", populacao);
        printf("Área (em km²): %f\n", area);
        printf("PIB: %f\n", pib);
        printf("Número de pontos turísticos: %d\n", pontos_turisticos);
    
    
        printf("\nCadastro da segunda carta\n");
    
        char letra_2; //Estado.
        char codigo_2[4]; //Código da carta.
        char nome_2 [30]; //Nome da cidade.
        int populacao_2; //População da cidade
        float area_2; //Área da cidade em Km².
        float pib_2; //PIB da cidade
        int pontos_turisticos2; //Número de pontos turísticos.
    
        printf("Defina o Estado com um caracter de 'A ate H': ");
        scanf("%c", &letra_2);
    
        printf("Digite o código da carta: ");
        scanf("%s", &codigo_2);
    
        printf("Digite o nome da cidade: ");
        scanf("%s", &nome_2);
    
        printf("digite a população da cidade: ");
        scanf("%d", &populacao_2);
    
        printf("Digite a área da cidade (em km²):  ");
        scanf("%f", &area_2);
    
        printf("Digite o valor do PIB da cidade: ");
        scanf("%f", &pib_2);
    
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos_turisticos2);
    
        // Exibição de dados da carta 2
        printf("\n Dados da carta cadastrada:\n");
    
        printf("Letra de representação do estado: %c\n", letra_2);
        printf("Código da carta: %s\n", codigo_2);
        printf("Nome da cidade: %s\n", nome_2);
        printf("População: %d\n", populacao_2);
        printf("Área (em km²): %f\n", area_2);
        printf("PIB: %f\n", pib_2);
        printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    
    
        return 0;
    }

