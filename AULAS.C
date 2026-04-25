#include <stdio.h>

    int main(){

    // ---- Variaveis CARTA 1 -----
    char estado1[10];
    char codigo1[20];
    char cidade1[20];
    float populaçao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    int loot1;
    
    // ---- Informações-da-carta 1 ----
   
        printf("Carta numero 1: \n");
        printf("Digite o estado de A-h: \n");
        scanf("%s", &estado1);

        printf("Digite o codigo da carta de (01-04) \n");
        scanf("%s", codigo1);

        printf("Digite a cidade: \n");
        scanf("%s", cidade1);

        printf("Digite a popolução: \n");
        scanf("%f", &populaçao1);

        printf("Digite a area em km²: \n");
        scanf("%f", &area1);

        printf("Digite o PIB: \n");
        scanf("%f", &pib1);

        printf("Digite os Pontos-Turisticos: \n");
        scanf("%d", &pontosturisticos1);

    // ---- Essas são as Variaveis da carta 2 ----
    
    char estado2[10];
    char codigo2[20];
    char cidade2[20];
    int populçao2;
    float area2;
    float pib2;
    int pontosturisticos2;


    printf("Digite a carta 2: \n");
    printf("Digite o estado de A-h: \n");
    scanf("%s", &estado2);




    // ---- Informações-da-carta 2 ----















    return 0;



    #include <stdio.h>  

int main(){
    int idade, matricula;
    float altura;
    char nome[50];
    
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
   
    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do Aluno: %s - Matricula: %d \n", nome, matricula);
    printf("idade %d - Altura: %.2f",idade, altura);

    return 0;





    
}

}   