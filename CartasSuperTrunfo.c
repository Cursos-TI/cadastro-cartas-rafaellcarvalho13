#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {

// Área para definição das variáveis para armazenar as propriedades das cidades

int populacao1, populacao2, n_d_p_t1, n_d_p_t2, Carta1, Carta2; //n_d_p_t = Número de Pontos Turisticos
float pib1, pib2, area1, DensidadePopulacional1, PIB_PC1, area2, DensidadePopulacional2, PIB_PC2;
char pais[50] = "Brasil";
char codigo1[20];
char codigo2[20];
char estado1[20];
char estado2[20];
char cidade1[20];
char cidade2[20];
    
// Área para entrada de dados Cartar 1

  printf("Escolha sua Carta: \n");
  scanf("%d", &Carta1);

  printf("Codigo: \n");
  scanf("%s", codigo1);

  printf("Estado: \n");
  scanf("%s", estado1);

  printf("Cidade: \n");
  scanf("%s", cidade1);

  printf("População: \n");
  scanf("%d", &populacao1);

  printf("Área da Cidade: \n");
  scanf("%f", &area1);

  printf("PIB: \n");
  scanf("%f", &pib1);

  printf("Número de Pontos Turisticos: \n");
  scanf("%d", &n_d_p_t1);

//Área para exibição dos dados da cidade

//Carta1
  printf("Carta 1: %d\nPaís: %s\nCódigo da Carta: %s\nEstado: %s\nCidade: %s\nPopulação: %d\nAréa da Cidade: %.2f\nPIB: %.2f\nNúmero de Pontos Turisticos: %d\n", Carta1, pais, codigo1, estado1, cidade1, populacao1, area1, pib1, n_d_p_t1);
  DensidadePopulacional1 = (float) (populacao1 / area1);
  printf("Densidade Populacinal: %.2f\n", DensidadePopulacional1);
  PIB_PC1 = (float) (pib1 / populacao1 );
  printf("PIB per Capita: %.2f\n", PIB_PC1);


// Área para entrada de dados Carta 2

  printf("Escolha sua Carta: \n");
  scanf("%d", &Carta2);

  printf("Codigo: \n");
  scanf("%s", codigo2);

  printf("Estado: \n");
  scanf("%s", estado2);

  printf("Cidade: \n");
  scanf("%s", cidade2);

  printf("População: \n");
  scanf("%d", &populacao2);

  printf("Área da Cidade: \n");
  scanf("%f", &area2);

  printf("PIB: \n");
  scanf("%f", &pib2);

  printf("Número de Pontos Turisticos: \n");
  scanf("%d", &n_d_p_t2);

//Área para exibição dos dados da cidade

//Carta2
  printf("Carta 1: %d\nPaís: %s\nCódigo da Carta: %s\nEstado: %s\nCidade: %s\nPopulação: %d\nAréa da Cidade: %.2f\nPIB: %.2f\nNúmero de Pontos Turisticos: %d\n", Carta1, pais, codigo1, estado1, cidade1, populacao1, area2, pib1, n_d_p_t1);
  DensidadePopulacional2 = (float) (populacao2 / area2);
  printf("Densidade Populacinal: %.2f\n", DensidadePopulacional2);
  PIB_PC2 = (float) (pib2 / populacao2 );
  printf("PIB per Capita: %.2f\n", PIB_PC2);

return 0;
} 
