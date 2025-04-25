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
    char* atributo_de_comparacao1;
    char* atributo_de_comparacao2;
    int escolha1, escolha2;
    float atributo_A1, atributo_B1, atributo_A2, atributo_B2;
    char* resultado1;
    char* resultado2;
    char* resultado3;
    float soma_A, soma_B;

    // CADASTRO DAS CARTAS:
    // Carta 1
    printf("# CADASTRANDO CARTAS DE SUPERTRUNFO\n");
    printf("* Cadastro da primeira carta\n");
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
    printf("\n* Cadastro da segunda carta\n");
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

    // ESCOLHA DO PRIMEIRO ATRIBUTO A SER COMPARADO
    printf("\nESCOLHA DOIS ATRIBUTOS PARA COMPARAR AS CARTAS\n");
    printf("Escolha primeiro atributo\n");
    printf("[1] População\n");
    printf("[2] Área\n");
    printf("[3] PIB\n");
    printf("[4] Número de pontos turísticos\n");
    printf("[5] Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &escolha1);
    
    // DEFININDO PRIMEIRO ATRIBUTO DE COMPARAÇÃO
    switch (escolha1)
    {
    case 1: // População
        atributo_de_comparacao1 = "Populacao";
        atributo_A1 = (float) populacao_A;
        atributo_B1 = (float) populacao_B;
        break;
    case 2: // Área
        atributo_de_comparacao1 = "Área";
        atributo_A1 = area_A;
        atributo_B1 = area_B;
        break;
    case 3: // PIB
        atributo_de_comparacao1 = "PIB";
        atributo_A1 = PIB_A;
        atributo_B1 = PIB_B;
        break;
    case 4: // Número de pontos turísticos
        atributo_de_comparacao1 = "Número de pontos turísticos";
        atributo_A1 = (float) pontos_turisticos_A;
        atributo_B1 = (float) pontos_turisticos_B;
        break;
    case 5: // Densidade demográfica
        atributo_de_comparacao1 = "Densidade demográfica";
        atributo_A1 = densidade_populacional_A;
        atributo_B1 = densidade_populacional_B;
        break;
    default: // Escolha inválida
        printf("Escolha inválida\n");
        break;
    }

    // ESCOLHA DO SEGUNDO ATRIBUTO (MENU ALTERNATIVO)
    printf("\nEscolha segundo atributo (Diferente do primeiro)\n");
    switch (escolha1) // Altera o menu para que não exiba a informação que já foi escolhida
    {
    case 1:
        printf("[ ] inválida\n");
        printf("[2] Área\n");
        printf("[3] PIB\n");
        printf("[4] Número de pontos turísticos\n");
        printf("[5] Densidade demográfica\n");
        break;
    case 2:
        printf("[1] População\n");
        printf("[ ] inválida\n");
        printf("[3] PIB\n");
        printf("[4] Número de pontos turísticos\n");
        printf("[5] Densidade demográfica\n");
        break;
    case 3:
        printf("[1] População\n");
        printf("[2] Área\n");
        printf("[ ] inválida\n");
        printf("[4] Número de pontos turísticos\n");
        printf("[5] Densidade demográfica\n");
        break;
    case 4:
        printf("[1] População\n");
        printf("[2] Área\n");
        printf("[3] PIB\n");
        printf("[ ] inválida\n");
        printf("[5] Densidade demográfica\n");
        break;
    case 5:
        printf("[1] População\n");
        printf("[2] Área\n");
        printf("[3] PIB\n");
        printf("[4] Número de pontos turísticos\n");
        printf("[ ] inválida\n");
        break;
    default:
        break;
    }
    printf("Escolha: ");
    scanf("%d", &escolha2);
    
    // DEFININDO SEGUNDO ATRIBUTO DE COMPARAÇÃO
    switch (escolha2) {
    case 1: // População
        atributo_de_comparacao2 = "Populacao";
        atributo_A2 = (float) populacao_A;
        atributo_B2 = (float) populacao_B;
        break;
    case 2: // Área
        atributo_de_comparacao2 = "Área";
        atributo_A2 = area_A;
        atributo_B2 = area_B;
        break;
    case 3: // PIB
        atributo_de_comparacao2 = "PIB";
        atributo_A2 = PIB_A;
        atributo_B2 = PIB_B;
        break;
    case 4: // Número de pontos turísticos
        atributo_de_comparacao2 = "Número de pontos turísticos";
        atributo_A2 = (float) pontos_turisticos_A;
        atributo_B2 = (float) pontos_turisticos_B;
        break;
    case 5: // Densidade demográfica
        atributo_de_comparacao2 = "Densidade demográfica";
        atributo_A2 = densidade_populacional_A;
        atributo_B2 = densidade_populacional_B;
        break;
    default: // Escolha inválida
        printf("Escolha inválida\n");
        break;
    }
    
    // RESULTADOS
    printf("\n# RESULTADOS: \n");

    if (escolha1 == escolha2) { // Se as duas escolhas forem iguais (ERRADO)
        printf("Os atributos escolhidos deveriam ser diferentes");

    } else { // Se as duas escolhas forem diferentes (CORRETO)
        // DEFINIÇÃO DE RESULTADOS
        // comparação 1
        if (atributo_A1 == atributo_B1){
            // caso de empate
            resultado1 = "empate!";
        } else if (atributo_de_comparacao1 == "Densidade demográfica"){
            // na densidade demográfica, o menor atributo vence
            resultado1 = (atributo_A1 < atributo_B1) ? nome_cidade_A : nome_cidade_B;
        } else {
            // Em outros atributos, o maior vence
            resultado1 = (atributo_A1 > atributo_B1) ? nome_cidade_A : nome_cidade_B;
        }

        // Comparação 2
        if (atributo_A2 == atributo_B2){
            // caso de empate
            resultado2 = "empate!";
        } else if (atributo_de_comparacao2 == "Densidade demográfica"){
            // na densidade demográfica, o menor atributo vence
            resultado2 = (atributo_A2 < atributo_B2) ? nome_cidade_A : nome_cidade_B;
        } else {
            // Em outros atributos, o maior vence
            resultado2 = (atributo_A2 > atributo_B2) ? nome_cidade_A : nome_cidade_B;
        }
        
        // Comparação 3 - Soma dos atributos escolhidos
        soma_A = atributo_A1 + atributo_A2;
        soma_B = atributo_B1 + atributo_B2;

        if (soma_A == soma_B){
            resultado3 = "empate";
        } else {
            resultado3 = (soma_A > soma_B) ? nome_cidade_A : nome_cidade_B;
        }

        // EXIBIÇÃO DOS RESULTADOS
        printf("Comparação do atributo: %s \n", atributo_de_comparacao1);
        printf("%s (%s): %f\n", nome_cidade_A, codigo_carta_A, atributo_A1);
        printf("%s (%s): %f\n", nome_cidade_B, codigo_carta_B, atributo_B1);
        printf("Primeiro resultado: %s! \n", resultado1);
        
        printf("\nComparação do atributo: %s \n", atributo_de_comparacao2);
        printf("%s (%s): %f\n", nome_cidade_A, codigo_carta_A, atributo_A2);
        printf("%s (%s): %f\n", nome_cidade_B, codigo_carta_B, atributo_B2);
        printf("Segundo resultado: %s! \n", resultado2);

        printf("\nComparação da soma dos atributos: \n");
        printf("%s (%s): %f\n", nome_cidade_A, codigo_carta_A, soma_A);
        printf("%s (%s): %f\n", nome_cidade_B, codigo_carta_B, soma_B);
        printf("RESULTADO FINAL: %s! \n", resultado3);
    }
    // FINALIZANDO O PROGRAMA
    printf("\n\nPROGRAMA FINALIZADO\n\n");

    return 0;
}
