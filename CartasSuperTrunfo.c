#include <stdio.h>


int main() {
    

        printf("Desafio  'Super Trunfo'\n");
        printf("Cadastro da carta\n");
    
        char letra; //Estado.
        char codigo[4]; //Código da carta.
        char nome [30]; //Nome da cidade.
        int populacao; //População da cidade
        float area; //Área da em Km².
        float pib; //Produto interno bruto da cidade
        int pontos_turisticos; //Número de pontos turísticos.
        float densidade_populacional; //Densidade populacional = Área/população
        float pib_percapita; //PIB per capita = população/pib

        printf("Defina o Estado com um caracter de 'A até H': ");
        scanf(" %c", &letra);
    
        printf("Digite o código da carta 'exemplo, A01': ");
        scanf(" %s", codigo);
    
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

        densidade_populacional = (populacao / area);

    
        // Exibição de dados da carta 1
        printf("\n Dados da carta cadastrada:\n");
    
        printf("Letra de representação do estado: %c\n", letra);
        printf("Código da carta: %s\n", codigo);
        printf("Nome da cidade: %s\n", nome);
        printf("População: %d\n", populacao);
        printf("Área (em km²): %f\n", area);
        printf("PIB: %f\n", pib);
        printf("Número de pontos turísticos: %d\n", pontos_turisticos);
        printf("Densidade Populacional: %f\n", densidade_populacional);
    
        printf("\nCadastro da segunda carta\n");
    
        char letra2; //Estado.
        char codigo2[4]; //Código da carta.
        char nome2 [30]; //Nome da cidade.
        int populacao_2; //População da cidade
        float area_2; //Área da cidade em Km².
        float pib_2; //PIB da cidade
        int pontos_turisticos2; //Número de pontos turísticos.
    
        printf("Defina o Estado com um caracter de A até H:");
        scanf(" %c", &letra2);
    
        printf("Digite o código da carta 'exemplo, A02:");
        scanf("%s", codigo2);
        
        printf("Digite o nome da cidade: ");
        scanf("%s", &nome2);
    
        printf("digite a população da cidade: ");
        scanf("%d", &populacao_2);
    
        printf("Digite a área da cidade:  ");
        scanf("%f", &area_2);
    
        printf("Digite o valor do PIB da cidade: ");
        scanf("%f", &pib_2);
    
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos_turisticos2);
    
        // Exibição de dados da carta2
        printf("\n Dados da carta cadastrada:\n");
    
        printf("Letra que representa o estado: %c\n", letra2);
        printf("Código da carta: %s\n", codigo2);
        printf("Nome da cidade: %s\n", nome2);
        printf("População: %d\n", populacao_2);
        printf("Área (em km²): %f\n", area_2);
        printf("PIB: %f\n", pib_2);
        printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    
    
        return 0;
    }