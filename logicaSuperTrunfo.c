#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    // Definição das variáveis para armazenar as propriedades das cidades
   
   char estado1 [30];
   char codigo1 [4];
   char nome1 [30];
   int populacao1;
   float area1;
   float pib1;
   int pontosTuristicos;
   float densidade1;
   float pibPerCapita;
    
    // Cadastro das Cartas
   =========== CARTA 01 ===========

    printf("Digite o estado: \n");
    scanf("%s", estado1); 

    printf("Digite o código: \n");
    scanf("%s", codigo1);

    printf("Digite o nome: \n");
    scanf("%s", nome1);

    printf("Digite a população: \n");
    scanf("%d", populacao1);

    printf("Digite a área: \n");
    scanf("%f", area1);

    printf("Digite o PIB: \n");
    scanf("%f", pib1);

    printf("Digite o número de pontos turísticos: \n");
    sacnf("%d", pontosTuristicos);
 
    // Cálculos 
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
