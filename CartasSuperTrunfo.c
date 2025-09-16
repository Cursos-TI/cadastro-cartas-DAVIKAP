#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado1, Estado2 = 'Ceará';
    char Código1[4], Código2[4] = "A01";
    char Cidade1[100], Cidade2[100] = "Rio de Janeiro";
    int População1, População2  = 123456;
    float Área1, Área2 = 123456.09;
    float PIB1, PIB2 = 987654.62;
    int Turismo1, Turismo2 = 32;
  
  // Área para entrada de dados

    printf("Carta 1: \n");
    
    printf("Digite a letra inicial do Estado: ", Estado1);
    scanf("%c", &Estado1);
    printf("A letra do Estado foi esta: %c\n", Estado1);

    printf("Digite o Código: ", Código1);
    scanf("%s", &Código1);
    printf("O Código foi este: %s\n", Código1);

    printf("Digite a primeira palavra do nome da Cidade: ", Cidade1);
    scanf("%s", &Cidade1);
    printf ("A primeira palavra do nome da Cidade foi esta: %s\n", Cidade1);

    printf("Digite a População: ", População1);
    scanf("%d", &População1);
    printf("A População foi esta: %d\n", População1);

    printf("Digite a Área: ", Área1);
    scanf("%lf", &Área1);
    printf("A Área foi esta: %f km2\n", Área1);

    printf("Digite o PIB: ", PIB1);
    scanf("%lf", &PIB1);
    printf("O PIB foi este: R$ %f\n", PIB1);

    printf("Digite a quantidade de pontos turísticos: ", Turismo1);
    scanf("%d", &Turismo1);
    printf("O número de pontos turísticos foi este: %d\n\n", Turismo1);

    printf("Carta 2: \n");

    printf("Digite a letra inicial do Estado: ", Estado2);
    scanf("%c", &Estado2);
    printf("A letra do Estado foi esta: %c\n", Estado2);

    printf("Digite o Código: ", Código2);
    scanf("%s", &Código2);
    printf("O Código foi este: %s\n", Código2);

    printf("Digite a primeira palavra do nome da Cidade: ", Cidade2);
    scanf("%s", &Cidade2);
    printf ("A primeira palavra do nome da Cidade foi esta: %s\n", Cidade2);

    printf("Digite a População: ", População2);
    scanf("%d", &População2);
    printf("A População foi esta: %d\n", População2);

    printf("Digite a Área: ", Área2);
    scanf("%lf", &Área2);
    printf("A Área foi esta: %f km2\n", Área2);

    printf("Digite o PIB: ", PIB2);
    scanf("%lf", &PIB2);
    printf("O PIB foi este: R$ %f\n", PIB2);

    printf("Digite a quantidade de pontos turísticos: ", Turismo2);
    scanf("%d", &Turismo2);
    printf("O número de pontos turísticos foi este: %d\n\n", Turismo2);
  
  // Área para exibição dos dados da cidade

    printf("Carta 1: \n");

    printf("Estado: %c\n", Estado1);

    printf("Código: %s\n", Código1);

    printf("Primeira palavra do nome da cidade: %s\n", Cidade1);

    printf("População: %d\n", População1);

    printf("Área: %f km2\n", Área1);

    printf("PIB: R$ %f\n", PIB1);
    
    printf("Número de pontos turísticos: %d\n\n", Turismo1);

    printf("Carta 2: \n");

    printf("Estado: %c\n", Estado2);

    printf("Código: %s\n", Código2);

    printf("Primeira palavra do nome da cidade: %s\n", Cidade2);

    printf("População: %d\n", População2);

    printf("Área: %f km2\n", Área2);

    printf("PIB: R$ %f\n", PIB2);
    
    printf("Número de pontos turísticos: %d\n", Turismo2);
  
return 0;
} 
