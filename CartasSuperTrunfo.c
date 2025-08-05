#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Armazenamento das variáveis.
    // Carta 1:
    char estado, codigo[5], cidade[20];
    int populacao, numerodept;
    float area, pib, densidadepopulacional, pibpercapita;

    // Armazenamento das variáveis.
    // Carta 2:
    char estado2, codigo2[5], cidade2[20];
    int populacao2, numerodept2;
    float area2, pib2, densidadepopulacional2, pibpercapita2;

    // Preenchimento das variáveis através do scanf com entrada padrão para a carta 1.
    printf("Vamos começar preenchendo as informações da primeira carta.\n");
    printf("Represente um estado com uma letra de A a H:\n");
    scanf(" %c", &estado);

    printf("Insira um código para a sua carta:\n");
    scanf("%s", codigo);

    printf("Insira uma cidade do estado escolhido:\n");
    scanf("%s", cidade);

    printf("Insira a população da cidade:\n");    
    scanf("%i", &populacao);

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%i", &numerodept);

    printf("Qual a area dessa cidade em km²?\n");
    scanf("%f", &area);

    printf("Qual o PIB dessa cidade?\n");
    scanf("%f", &pib);
    printf("\n");

    densidadepopulacional = populacao / area;
    pibpercapita = pib / populacao;

    // Preenchimento das variáveis através do scanf com entrada padrão para a carta 2.
    printf("Agora a segunda carta.\n");
    printf("Represente um estado com uma letra de A a H:\n");
    scanf(" %c", &estado2);

    printf("Insira um código para a sua carta:\n");
    scanf("%s", codigo2);

    printf("Insira uma cidade do estado escolhido:\n");
    scanf("%s", cidade2);

    printf("Insira a população da cidade:\n");    
    scanf("%i", &populacao2);

    printf("Insira o numero de pontos turisticos:\n");
    scanf("%i", &numerodept2);

    printf("Qual a area dessa cidade em km²?\n");
    scanf("%f", &area2);

    printf("Qual o PIB dessa cidade?\n");
    scanf("%f", &pib2);
    printf("\n");

    // Calcula a Densidade Populacional e o PIB per Capita, utilizando os Operadores Matemáticos.
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // Exibe as informações da carta 1 contidas nas variáveis através do printf para o usuário.
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado);
    printf("Código: %s  \n", codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %i \n", populacao);
    printf("Área da cidade: %.2f km² \n", area);
    printf("PIB da cidade: %.2f \n", pib);
    printf("Número de pontos turísticos: %d \n", numerodept);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional);
    printf("PIB per Capita: %.2f reais \n", pibpercapita);
    printf("\n");

    // Exibe as informações da carta 2 contidas nas variáveis através do printf para o usuário.
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s  \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %i \n", populacao2);
    printf("Área da cidade: %.2f km² \n", area2);
    printf("PIB da cidade: %.2f \n", pib2);
    printf("Número de pontos turísticos: %d \n", numerodept2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais \n", pibpercapita2);
    printf("\n");
    
    return 0;
}
