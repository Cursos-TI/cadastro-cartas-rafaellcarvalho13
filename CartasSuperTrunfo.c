#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char Pais[40] = "Brasil";
    int populacao1 = 270000000; 
    int populacao2 = 250000000;
    float pib1 = 80.7;
    float pib2 = 85.8;
    char codigo_da_carta1[20] = "A01";
    char codigo_da_carta2[20]= "A02";
    char estado1[20] = "Alagoas";
    char estado2[20] = "Sergipe";
    char cidade1[20] = "Maceió";
    char cidade2[20] = "Aracaju";
    char Carta1[1];
    char Carta2[1];
    
  // Área para entrada de dados
     printf("Escolha sua Carta!\n");
     scanf("%s", Carta1);

  // Área para exibição dos dados da cidade

  // Carta1
    printf("País: %s\n", Pais);
    printf("Carta 1: %s\n", Carta1);
    printf("Código da Carta: %s\n", codigo_da_carta1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.1f\n", pib1);

  // Carta2
    printf("Escolha sua Carta!\n");
    scanf("%s", Carta2);

    printf("País: %s\n", Pais);
    printf("Carta 2: %s\n", Carta2);
    printf("Código da Carta: %s\n", codigo_da_carta2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.1f\n", pib2);

return 0;
} 
