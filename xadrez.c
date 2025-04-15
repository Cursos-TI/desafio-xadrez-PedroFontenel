#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    int casas;         // Número de casas para movimentar
    char direcao;      // Direção escolhida pelo usuário (um caractere)
    int opcao;         // Opção escolhida no menu
    char continuar = 'S';    // Flag para controlar o loop

    while (continuar == 'S' || continuar == 's') { // Loop principal do programa

    printf("***XADREZ***\n");
    printf("Escolha uma peça para mover:\n");
    printf("1 - Torre\n"); // Move-se em linha reta horizontalmente ou verticalmente. 
    printf("2 - Bispo\n"); // Move-se na diagonal.
    printf("3 - Rainha\n"); // Move-se em todas as direções.

    /* CODIGO NAO ESTA PRONTO

    printf("4 - Peão\n");
    printf("5 - Cavalo\n");
    printf("6 - Rei\n");

    */

    printf("Digite o número correspondente à peça: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1: //Torre

        printf("\nVocê escolheu a TORRE.\n");
        printf("Digite a quantidade de casas que a peça irá andar (no máximo 8): ");
        scanf("%d", &casas);

        if (casas < 1 || casas > 8)
        {
            printf("Número de casas inválido! Deve ser entre 1 e 8.\n");
            return 0;
        }

        printf("Escolha a direção:\n");
        printf("D - DIREITA\nE - ESQUERDA\nC - CIMA\nB - BAIXO\n");
        printf("Digite a letra correspondente: ");
        scanf(" %c", &direcao);

        printf("Movimento da torre:\n");

        for (int i = 1; i <= casas; i++)

        if (direcao == 'D' || direcao == 'd') {
            printf("Casa %d: Movendo para a direita\n", i);
        } else if (direcao == 'E' || direcao == 'e') {
            printf("Casa %d: Movendo para a esquerda\n", i);
        } else if (direcao == 'C' || direcao == 'c') {
            printf("Casa %d: Movendo para cima\n", i);
        } else if (direcao == 'B' || direcao == 'b') {
            printf("Casa %d: Movendo para baixo\n", i);
        } else {
            printf("Direção inválida! Programa encerrado.\n");
        }
        break;

    case 2: //Bispo

        printf("\nVocê escolheu o BISPO.\n");
        printf("Digite a quantidade de casas que a peça irá andar (no máximo 8): ");
        scanf("%d", &casas);

        if (casas < 1 || casas > 8) 
        {
            printf("Número de casas inválido! Deve ser entre 1 e 8.\n");
            return 0;
        }

        printf("Escolha a direção:\n");
        printf("D - CIMA, DIREITA\nE - CIMA, ESQUERDA\nC - BAIXO, DIREITA\nB - BAIXO, ESQUERDA\n");
        printf("Digite a letra correspondente: ");
        scanf(" %c", &direcao);

        printf("Movimento do bispo:\n");

        for (int i = 1; i <= casas; i++)

        if (direcao == 'D' || direcao == 'd')
        {
            printf("Casa %d: Movendo para cima e para direita\n", i);
        } else if (direcao == 'E' || direcao == 'e') {
            printf("Casa %d: Movendo para cima e para esquerda\n", i);
        } else if (direcao == 'C' || direcao == 'c') {
            printf("Casa %d: Movendo para baixo e para direita\n", i);
        } else if (direcao == 'B' || direcao == 'b') {
            printf("Casa %d: Movendo para baixo e para esquerda\n", i);
        } else {
            printf("Direção inválida! Programa encerrado.\n");
        }
        break;

    case 3: //Rainha

        printf("\nVocê escolheu a RAINHA.\n");
        printf("Digite a quantidade de casas que a peça irá andar (no máximo 8): ");
        scanf("%d", &casas);

        if (casas < 1 || casas > 8)
        {
            printf("Número de casas inválido! Deve ser entre 1 e 8.\n");
            return 0;
        }

        printf("Escolha a direção:\n");
        printf("D - DIREITA\nE - ESQUERDA\nC - CIMA\nB - BAIXO\nA - CIMA, DIREITA\nS - CIMA, ESQUERDA\nF - BAIXO, DIREITA\nG - BAIXO, ESQUERDA\n");
        printf("Digite a letra correspondente: ");
        scanf(" %c", &direcao);

        printf("Movimento da Rainha:\n");

        for (int i = 1; i <= casas; i++)

        if (direcao == 'D' || direcao == 'd') {
           printf("Casa %d: Movendo para a direita\n", i);
        } else if (direcao == 'E' || direcao == 'e') {
           printf("Casa %d: Movendo para a esquerda\n", i);
        } else if (direcao == 'C' || direcao == 'c') {
           printf("Casa %d: Movendo para cima\n", i);
        } else if (direcao == 'B' || direcao == 'b') {
           printf("Casa %d: Movendo para baixo\n", i);
        } else if (direcao == 'A' || direcao == 'a') {
            printf("Casa %d: Movendo para CIMA, DIREITA\n", i);
        } else if (direcao == 'S' || direcao == 's') {
            printf("Casa %d: Movendo para cima, esquerda\n", i);
        } else if (direcao == 'F' || direcao == 'f') {
            printf("Casa %d: Movendo para baixo, direita\n", i);
        } else if (direcao == 'G' || direcao == 'g') {
            printf("Casa %d: Movendo para baixo, esquerda\n", i);
        } else {
           printf("Direção inválida! Programa encerrado.\n");
        } 
        break;

    case 4: //Peão

        do 
        {
            printf("\nDigite a quantidade de casas (1): ");
            scanf("%d", &casas);
            
        } while (casas < 1 || casas > 1); // Validação do valor

          printf("O peão irá andar %d casa para cima.\n", casas);

        break;

    case 5:
    case 6:
    default: // 

        printf("Lamento nao conseguir entender sua ação!!!");

        break;
    }

    printf("\nDeseja continuar? (S/N): ");
    scanf(" %c", &continuar);
}

    printf("Programa encerrado.\n");

    return 0;
}
