#include <stdio.h>
#include <locale.h>

int main() {
    int opcao, numquarto;
    char nomecomp, descservico, pedido, CPF ;

    printf("Sistema de Hotel\n");
    printf("1. Fazer Check-in\n");
    printf("2. Chamar Servico de Quarto\n");
    printf("3. Fazer Pedido\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1:
        printf("Informe seu nome completo:");
        scanf("%s", &nomecomp);
        printf("Informe seu CPF");
        scanf("%s", &CPF);
        printf("Digite o numero do quarto: ");
        scanf("%d", &numquarto);
        printf("Check-in realizado com sucesso!\n");
        printf("Nome: %d, Quarto: %d\n", nome, numquarto);
        break;
        
        case 2:
        printf("Digite o numero do quarto: ");
        scanf("%d", &numquarto);
        printf("Serviços disponíveis:\n");
        printf("1. Limpeza e arrumação\n");
        printf("2. Solicitações especiais\n");
        printf("3. Serviço de lavanderia\n");
        printf("4. Assistência técnica\n");
        printf("Escolha uma opcao: ");
        scanf("%s", &descservico);
        printf("Servico solicitado para o Quarto %d: %d", numquarto, descservico);
        break;
        
        case 3:
        printf("Digite o numero do quarto: ");
        scanf("%d", &numquarto);
        printf("Informe o seu pedido: ");
        scanf("%s", &pedido);
        printf("Pedido solicitado para o Quarto %d em processo, aguarde\n", numquarto);
        break;
        
        default:
        printf ("Opção invalida. Programa encerrado");
        return 1;
    }

    return 0;
}