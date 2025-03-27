#include <stdio.h>
#include <string.h>

int main()
{
  // Declaração das variáveis
  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char nomeCidade1[50], nomeCidade2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;

  // Leitura dos dados da primeira carta
  printf("Digite os dados da primeira carta:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado1);
  printf("Código da Carta: ");
  scanf(" %s", codigo1);
  printf("Nome da Cidade: \n");
  getchar();                                   // Limpa o buffer do teclado
  fgets(nomeCidade1, 50, stdin);               // fgets para ler strings com espaços
  nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; // Remove o \n do final da string

  printf("População: ");
  scanf(" %d", &populacao1);
  printf("Área (em km²): ");
  scanf(" %f", &area1);
  printf("PIB (em bilhões de reais): ");
  scanf(" %f", &pib1);
  printf("Número de Pontos Turísticos: ");
  scanf(" %d", &pontosTuristicos1);

  // Leitura dos dados da segunda carta
  printf("\nDigite os dados da segunda carta:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado2);
  printf("Código da Carta: ");
  scanf(" %s", codigo2);
  printf("Nome da Cidade: ");
  getchar();                                      // Limpa o buffer do teclado
  fgets(nomeCidade2, sizeof(nomeCidade2), stdin); // fgets para ler strings com espaços
  nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;    // Remove o \n do final da string

  printf("População: ");
  scanf(" %d", &populacao2);
  printf("Área (em km²): ");
  scanf(" %f", &area2);
  printf("PIB (em bilhões de reais): ");
  scanf(" %f", &pib2);
  printf("Número de Pontos Turísticos: ");
  scanf(" %d", &pontosTuristicos2);

  // Exibição das informações da primeira carta
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

  // Exibição das informações da segunda carta
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

  return 0; // Retorna 0 para o sistema operacional
}
