#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {

// Área para definição das variáveis para armazenar as propriedades das cidades

int populacao1, populacao2, n_d_p_t1, n_d_p_t2, Carta1, Carta2; //n_d_p_t = Número de Pontos Turisticos
float pib1, pib2;
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

  printf("PIB: \n");
  scanf("%f", &pib1);

  printf("Número de Pontos Turisticos: \n");
  scanf("%d", &n_d_p_t1);

//Área para exibição dos dados da cidade

//Carta1
   printf("Carta 1: %d\nPaís: %s\nCódigo da Carta: %s\nEstado: %s\nCidade: %s\nPopulação: %d\nPIB: %.1f\nNúmero de Pontos Turisticos: %d\n", Carta1, pais, codigo1, estado1, cidade1, populacao1, pib1, n_d_p_t1);



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

  printf("PIB: \n");
  scanf("%f", &pib2);

  printf("Número de Pontos Turisticos: \n");
  scanf("%d", &n_d_p_t2);

//Área para exibição dos dados da cidade

//Carta2
  printf("Carta 1: %d\nPaís: %s\nCódigo da Carta: %s\nEstado: %s\nCidade: %s\nPopulação: %d\nPIB: %.1f\nNúmero de Pontos Turisticos: %d\n", Carta2, pais, codigo2, estado2, cidade2, populacao2, pib2, n_d_p_t2);
   

return 0;
} 
