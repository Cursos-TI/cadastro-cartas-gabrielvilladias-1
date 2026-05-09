#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[2], estado2[2];
  char codigo1[4], codigo2[4];
  char nome1[50], nome2[50];
  unsigned long int populacao1, populacao2;
  int pontos_turisticos1, pontos_turisticos2;
  float area1, area2, pib1, pib2, densidade1, densidade2, pibpercapita1, pibpercapita2, superpoder1, superpoder2;

  // Área para entrada de dados cidade 1
  printf("Cadastro de cartas Jogo - Super Trunfo: \n");
  printf("Carta 1: \n");
  printf("Digite o estado: \n");
  scanf("%s", estado1);
  printf("Digite o código: \n");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade: \n");
  scanf(" %[^\n]", nome1);
  printf("Digite a população: \n");
  scanf("%lu", &populacao1);
  printf("Digite a área (km²): \n");
  scanf("%f", &area1);
  printf("Digite o PIB (R$): \n");
  scanf("%f", &pib1);
  printf("Digite o número de Pontos turísticos: \n");
  scanf("%d", &pontos_turisticos1);

  densidade1 = populacao1/area1;
  pibpercapita1 = (float) pib1/populacao1;
  superpoder1 = (float)populacao1+area1+pib1+pontos_turisticos1+pibpercapita1/densidade1;

  // Área para exibição dos dados da cidade 1
  printf("Carta 1: \n");
  printf("Estado: %s \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da cidade: %s \n", nome1);
  printf("População: %lu \n", populacao1);
  printf("Área (km²): %.2f \n", area1);
  printf("PIB (R$): %.2f \n", pib1);
  printf("Número de Pontos turísticos: %d \n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pibpercapita1);

  // Área para entrada de dados
  printf("Cadastro de cartas Jogo - Super Trunfo: \n");
  printf("Carta 2: \n");
  printf("Digite o estado: \n");
  scanf("%s", estado2);
  printf("Digite o código: \n");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade: \n");
  scanf(" %[^\n]", nome2);
  printf("Digite a população: \n");
  scanf("%lu", &populacao2);
  printf("Digite a área (km²): \n");
  scanf("%f", &area2);
  printf("Digite o PIB (R$): \n");
  scanf("%f", &pib2);
  printf("Digite o número de Pontos turísticos: \n");
  scanf("%d", &pontos_turisticos2);

  densidade2 = populacao2/area2;
  pibpercapita2 = (float) pib2/populacao2;
  superpoder2 = (float)populacao2+area2+pib2+pontos_turisticos2+pibpercapita2/densidade2;  

  // Área para exibição dos dados da cidade 2
  printf("Carta 2: \n");
  printf("Estado: %s \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da cidade: %s \n", nome2);
  printf("População: %lu \n", populacao2);
  printf("Área (km²): %.2f \n", area2);
  printf("PIB (R$): %.2f \n", pib2);
  printf("Número de Pontos turísticos: %d \n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pibpercapita2);

  // Comparação das duas cartas
  printf("Comparação de Cartas:\n");
  printf("População: Carta 1 venceu %d\n", populacao1>populacao2);
  printf("Área: Carta 1 venceu %d\n", area1>area2);
  printf("PIB: Carta 1 venceu %d\n", pib1>pib2);
  printf("Pontos Turísticos: Carta 1 venceu %d\n", pontos_turisticos1>pontos_turisticos2);
  printf("Densidade Populacional: Carta 2 venceu %d\n", densidade1>densidade2);
  printf("PIB per Capita: Carta 1 venceu %d\n", pibpercapita1>pibpercapita2);
  printf("Super Poder: Carta 1 venceu %d\n", superpoder1>superpoder2 );
  
return 0;
} 
