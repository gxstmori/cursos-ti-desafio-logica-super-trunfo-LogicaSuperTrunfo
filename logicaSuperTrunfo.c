#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estad1[30], estad2[30];
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int popul1, popul2;
    int turismo1, turismo2;
    float area1, area2;
    float pib1, pib2; 
    
  // Variáveis para o jogo (escolha de atributos e pontuação)
    char atributo1, atributo2;
    int pontos1 = 0, pontos2 = 0;
    
  // Área para entrada de dados - Carta 1
    printf("Cadastro Carta 1:\n");
    printf("Digite o Estado: ");
    scanf(" %[^\n]", estad1);  // Corrigido: retirado o &
    printf("Digite o Codigo desta Carta: ");
    scanf(" %s", codigo1);
    printf("Digite a Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a População: ");
    scanf(" %d", &popul1);
    printf("Digite a Area: ");
    scanf(" %f", &area1);  
    printf("Digite o PIB: ");
    scanf(" %f", &pib1);
    printf("Digite nº de Ptos Turísticos: ");
    scanf(" %d", &turismo1);

  // Calculo densidade e pib per capita Carta 1
    float densidade1 = popul1/area1;
    float pibpCapita1 = (pib1*1000000000/popul1);
  // Área para exibição dos dados da cidade 1
    printf("\nCarta 01: \n");
    printf("Estado: %s\n", estad1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", popul1);
    printf("Area: %.2f\n", area1);
    printf("PIB(Bilhões): %.2f \n", pib1);    
    printf("Nº de Ptos Turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB Per Capita: %.2f\n", pibpCapita1);

  // Área para entrada de dados Carta 2
    printf("\nCadastro Carta 2:\n");
    printf("Digite o Estado: ");
    scanf(" %[^\n]", estad2);  // Corrigido: um espaço e sem &
    printf("Digite o Codigo desta Carta: ");
    scanf(" %s", codigo2);
    printf("Digite a Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a População: ");
    scanf(" %d", &popul2);
    printf("Digite a Area: ");
    scanf(" %f", &area2);  
    printf("Digite o PIB: ");
    scanf(" %f", &pib2);
    printf("Digite nº de Ptos Turísticos: ");
    scanf(" %d", &turismo2);
    // Calculo densidade e pib per capita Carta 2
    float densidade2 = popul2/area2;
    float pibpCapita2 = (pib2*1000000000/popul2);

    printf("\nCarta 02: \n");
    printf("Estado: %s\n", estad2);  // Corrigido: era %c, agora %s
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", popul2);  // Corrigido: era %c, agora %d
    printf("Area: %.2f\n", area2);
    printf("PIB(Bilhões): %.2f \n", pib2);    
    printf("Nº de Ptos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB Per Capita: %.2f\n", pibpCapita2);
    //////////
    printf("\n========================================\n");
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("P - População\n");
    printf("A - Área\n");
    printf("D - Densidade Populacional\n");
    printf("T - Pontos Turísticos\n");
    printf("I - PIB per Capita\n");
    printf("Digite sua escolha: ");
    scanf(" %c", &atributo1);
   
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
   switch (atributo1) {
        case 'P':
        case 'p':
            pontos1 += (popul1 > popul2) ? 1 : 0;
            pontos2 += (popul2 > popul1) ? 1 : 0;
            printf("Primeiro atributo selecionado: População\n");
            break;
            
        case 'A':
        case 'a':
            pontos1 += (area1 > area2) ? 1 : 0;
            pontos2 += (area2 > area1) ? 1 : 0;
            printf("Primeiro atributo selecionado: Área\n");
            break;
            
        case 'D':
        case 'd':
            // Densidade: menor valor vence
            pontos1 += (densidade1 < densidade2) ? 1 : 0;
            pontos2 += (densidade2 < densidade1) ? 1 : 0;
            printf("Primeiro atributo selecionado: Densidade Populacional\n");
            break;
            
        case 'T':
        case 't':
            pontos1 += (turismo1 > turismo2) ? 1 : 0;
            pontos2 += (turismo2 > turismo1) ? 1 : 0;
            printf("Primeiro atributo selecionado: Pontos Turísticos\n");
            break;
            
        case 'I':
        case 'i':
            pontos1 += (pibpCapita1 > pibpCapita2) ? 1 : 0;
            pontos2 += (pibpCapita2 > pibpCapita1) ? 1 : 0;
            printf("Primeiro atributo selecionado: PIB per Capita\n");
            break;
            
        default:
            printf("Opção inválida! Encerrando o jogo.\n");
            return 1;
    }
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
 // Área para escolha do segundo atributo
    printf("\nEscolha o segundo atributo para comparar:\n");
    printf("P - População\n");
    printf("A - Área\n");
    printf("D - Densidade Populacional\n");
    printf("T - Pontos Turísticos\n");
    printf("I - PIB per Capita\n");
    printf("Digite sua escolha: ");
    scanf(" %c", &atributo2);

  // Verificar se os atributos são diferentes
    if ((atributo1 == atributo2) || (atributo1 == atributo2 - 32) || (atributo1 == atributo2 + 32)) {
        printf("\nErro: Você escolheu o mesmo atributo!\n");
        printf("Por favor, escolha dois atributos diferentes.\n");
        return 1;
    }

  // Comparação do segundo atributo 
    switch (atributo2) {
        case 'P':
        case 'p':
            pontos1 += (popul1 > popul2) ? 1 : 0;
            pontos2 += (popul2 > popul1) ? 1 : 0;
            printf("Segundo atributo selecionado: População\n");
            break;
            
        case 'A':
        case 'a':
            pontos1 += (area1 > area2) ? 1 : 0;
            pontos2 += (area2 > area1) ? 1 : 0;
            printf("Segundo atributo selecionado: Área\n");
            break;
            
        case 'D':
        case 'd':
            // Densidade
            pontos1 += (densidade1 < densidade2) ? 1 : 0;
            pontos2 += (densidade2 < densidade1) ? 1 : 0;
            printf("Segundo atributo selecionado: Densidade Populacional\n");
            break;
            
        case 'T':
        case 't':
            pontos1 += (turismo1 > turismo2) ? 1 : 0;
            pontos2 += (turismo2 > turismo1) ? 1 : 0;
            printf("Segundo atributo selecionado: Pontos Turísticos\n");
            break;
            
        case 'I':
        case 'i':
            pontos1 += (pibpCapita1 > pibpCapita2) ? 1 : 0;
            pontos2 += (pibpCapita2 > pibpCapita1) ? 1 : 0;
            printf("Segundo atributo selecionado: PIB per Capita\n");
            break;
            
        default:
            printf("Opção inválida! Encerrando o jogo.\n");
            return 1;
    }

  // Determinar o vencedor
    printf("\n========================================\n");
    printf("RESULTADO DA BATALHA\n");
    printf("========================================\n");
    printf("Carta 1 (%s): %d pontos\n", cidade1, pontos1);
    printf("Carta 2 (%s): %d pontos\n", cidade2, pontos2);
    printf("----------------------------------------\n");

  // Determinar vencedor if-else
    if (pontos1 > pontos2) {
        printf("Vencedor: Carta 1 - %s!\n", cidade1);
    } else if (pontos2 > pontos1) {
        printf("Vencedor: Carta 2 - %s!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    
    printf("========================================\n");

    return 0;
}
