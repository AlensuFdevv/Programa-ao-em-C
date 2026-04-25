#include <stdio.h>

    int main() {
    
    //----------Informações da carta 1----------

    char estado1;
    char codigo1[30];
    char cidade1[30];
    int populaçao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    

    printf("Cadastre a carta 1: \n");
    printf("Digite o estado de A-H: \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta de (01-04): \n");
    scanf("%s", codigo1);
    
    printf("Digite a cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a populaçao: \n");
    scanf("%d", &populaçao1);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite os Pontos Turisticos \n");
    scanf("%d", &pontosturisticos1);

    //--------------Informações da Carta 2---------------

    char estado2;
    char codigo2[30];
    char cidade2[30];
    int populaçao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("Cadastre a carta 2: \n");
    printf("Digite o estado de A-F: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta de (01-04): \n");
    scanf("%s", codigo2);
    
    printf("Digite a cidade: \n");
    scanf("%s", cidade2);
    
    printf("Digite a populaçao: \n");
    scanf("%d", &populaçao2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite os Pontos Turisticos: \n");
    scanf("%d", &pontosturisticos2);

    return 0;

}  

