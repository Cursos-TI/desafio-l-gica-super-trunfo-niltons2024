#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

  xemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

       // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    
}
#include <stdio.h> 

int main (){

char Estado;
char Codigo1;
char Codigo2;
char Cidade1;
char Cidade2;
int Populacao1;
int Populacao2;
float Area1;
float Area2;
float PIB1;
float PIB2;
int Pontosturisticos1;
int Pontosturisticos2;


printf("Entre com o estado:");
scanf("%c \n", &Estado);
printf("Entre com o Codigocarta1:");
scanf("%s \n", &Codigo1);
printf("\n Entre com o Codigocarta2:");
scanf("%s \n", &Codigo2);
printf("\n Entre com Cidade1:");
scanf("%s \n", &Cidade1);
printf("\n Entre com Cidade2:");
scanf("%s \n", &Cidade2);

printf(" \n Entre com populacao1: \n");
scanf("%d \n", &Populacao1);

printf("Entre com populacao2: \n");
scanf("%d \n", &Populacao2);

printf("Entre com Area1: \n");
scanf("%f \n", &Area1);

printf("Entre com Area2: \n");
scanf("%f \n", &Area2);

printf("Entre com PIB1: \n");
scanf("%f \n", &PIB1);

printf("Entre com PIB2: \n");
scanf("%f \n", &PIB2);

printf("Entre com pontos turisticos1: \n");
scanf("%d \n", &Pontosturisticos1);

printf("Entre com pontos turisticos2: \n");
scanf("%d \n", &Pontosturisticos2);


if (Populacao1>Populacao2) {
    printf("População de A1 é maior. \n");
}else {
    printf("População de A1 é menor. \n");
}

if (Area1>Area2) {
    printf("Area de A1 maior que A2 \n");
}else {
    printf("Area de A1 menor que A2 \n");
}

if (PIB1>PIB2) {
    printf("PIB de A1 maior que PIB de A2 \n");
}else {
    printf("PIB de A1 menor que PIB de A2 \n");
}

if (Pontosturisticos1>Pontosturisticos2) {
    printf("A1 tem mais Pontos Turisticos que A2 \n");
}else {
    printf("A1 tem menos Pontos Turisticos que A2 \n");
}

if (Pontosturisticos1>Pontosturisticos2, PIB1>PIB2, Area1>Area2, Populacao1>Populacao2) {
    printf("Carta Vencedora A1! \n");
}else {
    printf("Carta Vencedora A2! \n");
}

}