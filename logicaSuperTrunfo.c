#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Agora com o NÍVEL MESTRE incluído!

int main() {
    
    // Definição das variáveis para armazenar as propriedades das cidades
   
   char estado1 [30];
   char codigo1 [4];
   char nome1 [30];
   int populacao1;
   float area1;
   float pib1;
   int pontosTuristicos1;
   float densidade1;
   float pibPerCapita1;
    
    // Cadastro das Cartas
      
     printf("### CARTA 01 ###\n");

    printf("Digite o estado: \n");
    scanf("%s", estado1); 

    printf("Digite o codigo: \n");
    scanf("%s", codigo1);

    printf("Digite o nome: \n");
    scanf("%s", nome1);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a area: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);
 
    // Cálculos 
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1;

   
   char estado2 [30];
   char codigo2 [4];
   char nome2 [30];
   int populacao2;
   float area2;
   float pib2;
   int pontosTuristicos2;
   float densidade2;
   float pibPerCapita2;
   
    
    // Cadastro das Cartas
    
    printf("### CARTA 02 ###\n");

    printf("Digite o estado: \n");
    scanf("%s", estado2); 

    printf("Digite o codigo: \n");
    scanf("%s", codigo2);

    printf("Digite o nome: \n");
    scanf("%s", nome2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);
 
    // Cálculos 
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    int atributo1, atributo2;

    printf("\n===== NÍVEL MESTRE =====");
    printf("\nEscolha o PRIMEIRO atributo:");

    printf("\n1. Populacao");
    printf("\n2. Area");
    printf("\n3. PIB");
    printf("\n4. PIB per Capita");
    printf("\n5. Densidade Populacional");
    printf("\n6. Pontos Turisticos");
    printf("\nEscolha: ");
    scanf("%d", &atributo1);

    // Segundo menu removendo o atributo já escolhido
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    for (int i = 1; i <= 6; i++) {
        if (i != atributo1) {
            switch(i) {
                case 1: printf("1. Populaçao\n"); 
                break;
                case 2: printf("2. area\n"); 
                break;
                case 3: printf("3. PIB\n"); 
                break;
                case 4: printf("4. PIB per Capita\n"); 
                break;
                case 5: printf("5. Densidade Populacional\n"); 
                break;
                case 6: printf("6. Pontos Turisticos\n"); 
                break;
            }
        }
    }

    scanf("%d", &atributo2);

    if (atributo2 == atributo1) {
        printf("\nVocê escolheu o mesmo atributo duas vezes! Reinicie o programa.\n");
        return 0;
    }

    float valor1A, valor1B, valor2A, valor2B;

    // Função interna para pegar o valor do atributo
    #define GET_ATTR(opcao, A, B) \
        switch(opcao){ \
            case 1: A = populacao1; B = populacao2; break; \
            case 2: A = area1; B = area2; break; \
            case 3: A = pib1; B = pib2; break; \
            case 4: A = pibPerCapita1; B = pibPerCapita2; break; \
            case 5: A = densidade1; B = densidade2; break; \
            case 6: A = pontosTuristicos1; B = pontosTuristicos2; break; \
        }

    GET_ATTR (atributo1, valor1A, valor1B);
    GET_ATTR (atributo2, valor2A, valor2B);

    // Comparação individual
    float resultado1, resultado2;

    // Caso especial: densidade menor vence
    if (atributo1 == 5)
        resultado1 = (valor1A < valor1B) ? 1 : (valor1B < valor1A) ? 2 : 0;
    else
        resultado1 = (valor1A > valor1B) ? 1 : (valor1B > valor1A) ? 2 : 0;

    if (atributo2 == 5)
        resultado2 = (valor2A < valor2B) ? 1 : (valor2B < valor2A) ? 2 : 0;
    else
        resultado2 = (valor2A > valor2B) ? 1 : (valor2B > valor2A) ? 2 : 0;

    // Soma dos atributos
    float somaA = valor1A + valor2A;
    float somaB = valor1B + valor2B;

    printf("\n===== RESULTADO FINAL =====\n");

    printf("%s: %.2f + %.2f = %.2f\n", nome1, valor1A, valor2A, somaA);
    printf("%s: %.2f + %.2f = %.2f\n", nome2, valor1B, valor2B, somaB);

    if (somaA > somaB)
        printf("\nVENCEDORA: %s\n", nome1);
    else if (somaB > somaA)
        printf("\nVENCEDORA: %s\n", nome2);
    else
        printf("\nEMPATE!\n");

    return 0;
}