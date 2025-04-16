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
    densidade_populacional_A = (float) populacao_A / area_A;
    PIB_per_capita_A = PIB_A / (float) populacao_A;
    
    densidade_populacional_B = (float) populacao_B / area_B;
    PIB_per_capita_B = PIB_B / (float) populacao_B;

    // COMPARAÇÃO DE CARTAS E EXIBIÇÃO DO RESULTADO:
    atributo_de_comparacao = "populacao";

    printf("\n# COMPARAÇÃO DE CARTAS (Atributo: %s): \n", atributo_de_comparacao);
    printf("Carta 1 - %s (%s): %i\n", nome_cidade_A, codigo_carta_A, populacao_A);
    printf("Carta 2 - %s (%s): %i\n", nome_cidade_B, codigo_carta_B, populacao_B);
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    
    if (populacao_A > populacao_B) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade_A);
    } else if (populacao_A < populacao_B){
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade_B);
    } else {
        printf("Resultado: Empate entre as cartas!\n");
    } 
    
    printf("\nPROGRAMA FINALIZADO\n");

    return 0;
}
