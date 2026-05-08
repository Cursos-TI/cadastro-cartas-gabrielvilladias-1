#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[1], estado2[1];
  char codigo1[3], codigo2[3];
  char nome1[50], nome2[50];
  int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
  float area1, area2, pib1, pib2, densidade1, densidade2, pibpercapita1, pibpercapita2;

  // Área para entrada de dados cidade 1
  printf("Cadastro de cartas Jogo - Super Trunfo: \n");
  printf("Carta 1: \n");
  printf("Digite o estado: \n");
  scanf("%s", &estado1);
  printf("Digite o código: \n");
  scanf("%s", &codigo1);
  printf("Digite o nome da cidade: \n");
  scanf("%s", &nome1);
  printf("Digite a população: \n");
  scanf("%d", &populacao1);
  printf("Digite a área (km²): \n");
  scanf("%f", &area1);
  printf("Digite o PIB (R$): \n");
  scanf("%f", &pib1);
  printf("Digite o número de Pontos turísticos: \n");
  scanf("%d", &pontos_turisticos1);

  densidade1 = populacao1/area1;
  pibpercapita1 = (float) pib1/populacao1;

  // Área para exibição dos dados da cidade 1
  printf("Carta 1: \n");
  printf("Estado: %s \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da cidade: %s \n", nome1);
  printf("População: %d \n", populacao1);
  printf("Área (km²): %.2f \n", area1);
  printf("PIB (R$): %.2f \n", pib1);
  printf("número de Pontos turísticos: %d \n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pibpercapita1);

  // Área para entrada de dados
  printf("Cadastro de cartas Jogo - Super Trunfo: \n");
  printf("Carta 2: \n");
  printf("Digite o estado: \n");
  scanf("%s", &estado2);
  printf("Digite o código: \n");
  scanf("%s", &codigo2);
  printf("Digite o nome da cidade: \n");
  scanf("%s", &nome2);
  printf("Digite a população: \n");
  scanf("%d", &populacao2);
  printf("Digite a área (km²): \n");
  scanf("%f", &area2);
  printf("Digite o PIB (R$): \n");
  scanf("%f", &pib2);
  printf("Digite o número de Pontos turísticos: \n");
  scanf("%d", &pontos_turisticos2);

  densidade2 = populacao2/area2;
  pibpercapita2 = (float) pib2/populacao2;  

  // Área para exibição dos dados da cidade 2
  printf("Carta 2: \n");
  printf("Estado: %s \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da cidade: %s \n", nome2);
  printf("População: %d \n", populacao2);
  printf("Área (km²): %.2f \n", area2);
  printf("PIB (R$): %.2f \n", pib2);
  printf("número de Pontos turísticos: %d \n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pibpercapita2);

return 0;
} 
