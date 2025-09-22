#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char Estado;
  char CodigoDaCarta[20];
  char NomeDaCidade[50];

  int Populacao, NumeroDePontosTuristicos;
  float Area, PIB;

  // Área para entrada de dados
  printf("Carta1 \n");

  printf("Uma letra que represente seu estado: \n");
  scanf("%c", &Estado);

  printf("Digite a letra do seu estado, junto com um número de 01 a 04 (ex: C01, B02) \n");
  scanf("%s", CodigoDaCarta);

  printf("Nome da sua cidade: \n");
  scanf("%s", NomeDaCidade);

  printf("O número de habitantes da sua cidade: \n");
  scanf("%d", &Populacao);

  printf("A aréa da cidade em quilometros quadrados \n");
  scanf("%f", &Area);

  printf("O produto interno Bruto da cidade \n");
  scanf("%f", &PIB);

  printf("A quantidade de pontos turisticos da sua cidade: \n");
  scanf("%i", &NumeroDePontosTuristicos);

  // Área para exibição dos dados da cidade
  printf("-Estado: %c \n-CodigoDaCarta: %s \n-NomeDaCidade: %s \n-População: %d\n", Estado, CodigoDaCarta, NomeDaCidade, Populacao);
  printf("-Area: %f \n-PIB: %f \n-NúmeroDePontosTurísticos: %i \n", Area, PIB, NumeroDePontosTuristicos);

  char NomeDoEstado;
  char Codigo[30];
  char Cidade[40];

  int Habitantes, Turismo;
  float AreaDaCidade, PibDacidade;

  printf("Carta2 \n");

  printf(" - Digite uma letra de 'A' a 'H' que represente seu estado: \n");
  scanf(" %c", &NomeDoEstado);

  printf(" - A letra do seu estado seguida de número de 01 a 04(Ex: A02, B03): \n");
  scanf(" %s", Codigo);

  printf(" - Digite o nome da sua cidade: \n");
  scanf("%s", Cidade);

  printf(" - Número de habitantes da sua cidade: \n");
  scanf("%d", &Habitantes);

  printf("- A quantidade de pontos turisticos da sua cidade: \n");
  scanf("%i", &Turismo);

  printf(" - A área da sua cidade em quilomêtros quadrados: \n");
  scanf("%f", &AreaDaCidade);

  printf(" - O produto interno Bruto da cidade: \n");
  scanf("%f", &PibDacidade);

  printf("-estado: %c \n-codigodacarta: %s \n-nomedacidade %s \n-populacao: %d \n", NomeDoEstado, Codigo, Cidade, Habitantes);
  printf("-numerodepontosturisticos: %i \n-area: %f \n-pib: %f \n", Turismo, AreaDaCidade, PibDacidade);

  return 0;
}
