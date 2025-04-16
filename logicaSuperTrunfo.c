#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // DEFINIÇÃO DAS VARIÁVEIS
    // Carta 1
    char estado_A[20];
    char codigo_carta_A[3];
    char nome_cidade_A[20];
    int populacao_A;
    float area_A;
    float PIB_A;
    int pontos_turisticos_A;

    float densidade_populacional_A;
    float PIB_per_capita_A;
    // Carta 2
    char estado_B[20];
    char codigo_carta_B[3];
    char nome_cidade_B[20];
    int populacao_B;
    float area_B;
    float PIB_B;
    int pontos_turisticos_B;

    float densidade_populacional_B;
    float PIB_per_capita_B;
    // Variaveis de comparação entre cartas
    char* atributo_de_comparacao;
    int escolha;
    float atributo_A, atributo_B;

    // CADASTRO DAS CARTAS:
    // Carta 1
    printf("# CADASTRANDO CARTAS DE SUPERTRUNFO\n");
    printf("# CADASTRANDO DA PRIMEIRA CARTA\n");
    printf("1. Digite o estado da cidade: ");
    scanf("%s", &estado_A);
    printf("2. Digite o código da cidade (Letra de \"a\" a \"h\" + um número de 1 a 4): ");
    scanf("%s", &codigo_carta_A);
    printf("3. Digite nome: ");
    scanf(" %s", &nome_cidade_A);
    printf("4. Digite população: ");
    scanf("%d", &populacao_A);
    printf("5. Digite área: ");
    scanf("%f", &area_A);
    printf("6. Digite PIB: ");
    scanf("%f", &PIB_A);
    printf("7. Digite número de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_A);
    // Carta 2
    printf("\n# CADASTRANDO DA SEGUNDA CARTA\n");
    printf("1. Digite o estado da cidade: ");
    scanf("%s", &estado_B);
    printf("2. Digite o código da cidade (Letra de \"a\" a \"h\" + um número de 1 a 4): ");
    scanf("%s", &codigo_carta_B);
    printf("3. Digite nome: ");
    scanf(" %s", &nome_cidade_B);
    printf("4. Digite população: ");
    scanf("%d", &populacao_B);
    printf("5. Digite área: ");
    scanf("%f", &area_B);
    printf("6. Digite PIB: ");
    scanf("%f", &PIB_B);
    printf("7. Digite número de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_B);

    // CALCULAR DENSIDADE POPULCIONAL E PIB_PER_CAPTA
    // Carta 1
    densidade_populacional_A = (float) populacao_A / area_A;
    PIB_per_capita_A = PIB_A / (float) populacao_A;
    // Carta 2
    densidade_populacional_B = (float) populacao_B / area_B;
    PIB_per_capita_B = PIB_B / (float) populacao_B;

    // MENU DE ESCOLHA DE ATRIBUTO A SER COMPARADO
    printf("\nESCOLHA UM ATRIBUTO PARA COMPARAR AS CARTAS\n");
    printf("[1] População\n");
    printf("[2] Área\n");
    printf("[3] PIB\n");
    printf("[4] Número de pontos turísticos\n");
    printf("[5] Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &escolha);
    
    // DEFININFO OS ATRIBUTOS DE COMPARAÇÃO
    switch (escolha)
    {
    // População
    case 1:
        atributo_de_comparacao = "Populacao";
        atributo_A = (float) populacao_A;
        atributo_B = (float) populacao_B;
        break;
    // Área
    case 2:
        atributo_de_comparacao = "Área";
        atributo_A = area_A;
        atributo_B = area_B;
        break;
    // PIB
    case 3:
        atributo_de_comparacao = "PIB";
        atributo_A = PIB_A;
        atributo_B = PIB_B;
        break;
    // Número de pontos turísticos
    case 4:
        atributo_de_comparacao = "Número de pontos turísticos";
        atributo_A = (float) pontos_turisticos_A;
        atributo_B = (float) pontos_turisticos_B;
        break;
    // Densidade demográfica
    case 5:
        atributo_de_comparacao = "Densidade demográfica";
        atributo_A = densidade_populacional_A;
        atributo_B = densidade_populacional_B;
        break;
    // Escolha inválida
    default:
        printf("Escolha inválida\n");
        break;
    }

    // EXIBIÇÃO DE INFORMAÇÕES GERAIS
    printf("\n# COMPARAÇÃO DE CARTAS (Atributo: %s): \n", atributo_de_comparacao);
    printf("Carta 1 - %s (%s): %f\n", nome_cidade_A, codigo_carta_A, atributo_A);
    printf("Carta 2 - %s (%s): %f\n", nome_cidade_B, codigo_carta_B, atributo_B);
    printf("Resultado: ");

    // DEFININFO CARTA VENCEDORA
    // Se os atributos comparados forem iguais (empate)
    if (atributo_A == atributo_B){
        printf("Empate entre as cartas!\n");
    } else{
        // Se a comparação for de densidade populacional
        if (atributo_de_comparacao == "Densidade demográfica"){
            // Se carta 1 vencer
            if (atributo_A < atributo_B){
                printf("Carta 1 (%s) venceu!", nome_cidade_A);
            // Se carta 2 vencer
            } else {
                printf("Carta 2 (%s) venceu!", nome_cidade_B);
            }
        // Se a comparação NÃO for de densidade populacional
        } else{
            // Se carta 1 vencer
            if (atributo_A > atributo_B){
                printf("Carta 1 (%s) venceu!", nome_cidade_A);
            // Se carta 2 vencer
            } else {
                printf("Carta 2 (%s) venceu!", nome_cidade_B);
            }
        }
    }
    
    // FINALIZANDO O PROGRAMA
    printf("\n\nPROGRAMA FINALIZADO\n\n");

    return 0;
}
