#include <stdio.h>
#include <locale.h> 

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[100];
    int idade;
    float peso;
    int opcao; 
    
    printf("-------------------\n");
    printf(" FICHA DE REGISTRO \n");
    printf("-------------------\n");
    
    printf("Aperte (1) para continuar.\n");
    printf("Aperte (2) para fechar o programa.\n");

    
    scanf("%d", &opcao);
    getchar(); 

    if (opcao == 2) {
        printf("Programa fechado.\n");
        return 0;  
    }

    printf("Ola! Seja bem-vindo a nossa ficha de registro.\n");
    printf("Preencha seus dados conforme e informado abaixo para preencher nosso formulário, e voce tera sua ficha de registro!!!\n");
    printf("\n");

    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin);
    printf("\n");

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("\n");

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("\n");

    printf("-------------------\n");
    printf(" FICHA DE REGISTRO \n");
    printf("-------------------\n");
    
    printf("Seu nome e: %s", nome);  
    printf("Sua idade e: %d \n", idade);
    printf("Seu peso atual e: %.2f kg \n", peso); 

    return 0;
