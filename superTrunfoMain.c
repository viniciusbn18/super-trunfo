#include <stdio.h>
#include <string.h>

int main()
{
  // Declaração das variáveis
  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char nomeCidade1[50], nomeCidade2[50];
  unsigned long int populacao1, populacao2;
  double area1, area2;
  double pib1, pib2;
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

  // Calculando a densidade populacional e PIB per apita de cada carta

  float densidadePopulacional1 = populacao1 / area1;
  float densidadePopulacional2 = populacao2 / area2;
  float pibPerCapita1 = pib1 / populacao1;
  float pibPerCapita2 = pib2 / populacao2;

  printf("\nDensidade Populacional da carta 1: %.2f", densidadePopulacional1);
  printf("\nDensidade populacional da carta 2: %.2f", densidadePopulacional2);

  // Super poder
  float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
  float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

  // Comparações
  printf("\nComparação de Cartas:\n");
  printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
  printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);
  return 0; // Retorna 0 para o sistema operacional
}
