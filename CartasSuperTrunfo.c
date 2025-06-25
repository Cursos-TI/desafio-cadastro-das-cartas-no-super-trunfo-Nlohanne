#include <stdio.h>
// Info Professor Estacio: Adicionei notas ao codigo afim de facilitar o meu entendimento conforme escrevia.Peco desculpas pelo excesso de comentarios.

// importa a biblioteca de Input e output para escrever na tela e ler no teclado.

// todo o programa em C comeca a executar dentro da funcao main
int main () {

// As caixas/variaveis estao sendo criadas aqui para armazenar as informacoes 
// Aspas duplas sao colocadas nas strings = textos. Sem aspas o compilador nao entende o que e texto.
  


// Carta 1 
char estado1;
char codigo1[4];
char nomeCidade1[50];
int populacao1;
float area1, pib1;
int pontosTuristicos1;

// Carta 2
char estado2;
char codigo2[4];
char nomeCidade2[50];
int populacao2;
float area2, pib2;
int pontosTuristicos2;

// Exibe texto para coletar dados da carta 1  
printf("Insira os dados da Carta 1:\n");
printf("Informe o estado (letra de A a H):");
scanf(" %c", &estado1);
// O espaco antes de %c e importante para ignorar caracteres invisiveis como /n
printf("Informe o codigo1 da carta (ex: A01) : ");
scanf(" %s", codigo1);

printf ("Informe o nome da Cidade1: ");
scanf(" %[^\n]", nomeCidade1);

printf("Populacao1: ");
scanf("%d", &populacao1);

printf("Area1 (km): ");
scanf("%f", &area1);

printf ("PIB1 (em bilhoes de reais): ");
scanf ("%f", &pib1);

printf ("Numero de pontosturisticos1: ");
scanf ("%d", &pontosTuristicos1);

printf ("\n");

// Entrada de dados da carta 2

printf("Digite os dados da Carta 2:\n");
    
    printf("Estado2 (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código2 da Carta (ex: B02): ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade2: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao2: ");
    scanf("%d", &populacao2);

    printf("Area2 (km²): ");
    scanf("%f", &area2);

    printf("PIB2 (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontosturisticos2: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição das cartas
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

