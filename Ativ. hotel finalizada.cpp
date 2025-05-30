#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50], CPF[11];
    int quarto;
    float valorPedidos;
} Cliente;

Cliente clientes [20];
int numClientes = 0;

void checkinCliente();
void listarClientes();
void solicitarServico(); 
void fazerPedido();

int main() {
    int opcao;
    do {
        printf("\n--== Bem-Vindo ao Hotel Grand Hyatt  ==--\n");
        printf("1-Fazer Check-in\n");
        printf("2-Listar Hospedados\n");
        printf("3-Solicitar Serviço de Quarto\n");
        printf("4-Restaurante\n");
        printf("5-Sair\n");
        printf("Selecione uma Opção: ");
        scanf("%d", &opcao);
        getchar();
        switch (opcao) {
            case 1: checkinCliente(); break;
            case 2: listarClientes(); break;
            case 3: solicitarServico(); break;
            case 4: fazerPedido(); break;
            case 5: printf("\n!Até Mais!;\n"); break;
            default: printf("Opção inválida!\n");
        }
    } while (opcao != 5);
    return 0;
}


void checkinCliente() {
    if (numClientes > 20) {
        printf ("Limite de Hospedados Atingido!\n");
        
    }else{
        printf("Nome: "); 
        scanf(" %[^\n]", clientes[numClientes].nome);
        
        printf("CPF: "); 
        scanf("%s", clientes[numClientes].CPF);
        
        printf("Quarto: "); 
        scanf("%d", &clientes[numClientes].quarto);
        clientes[numClientes].valorPedidos = 0;
        numClientes++;
    }
    
}


void listarClientes() {
    for (int i = 0; i < numClientes; i++)
        printf("\n%d - %s, CPF: %s, Quarto: %d, Despesas: R$ %.2f\n", i+1, clientes[i].nome, clientes[i].CPF, clientes[i].quarto, clientes[i].valorPedidos);
}


void solicitarServico() {
    
    printf("\n!Solicite um Serviço!\n");
    printf("Informe seu Quarto: ");
    int informar;
    scanf("%d", &informar);
    printf("1-Limpeza e Organização do Quarto\n");
    printf("2-Especial\n");
    printf("3-Lavanderia\n");
    printf("4-Técnica\n");
    printf("Escolha: ");
    int escolha; 
    scanf("%d", &escolha);
    printf("Serviço solicitado para o quarto %d, já estamos a caminho!\n", informar);
    
}


void fazerPedido() {
    int opcao, escolha, numQuarto;
    float total = 0;
    
    printf("Informe o numero do quarto : ");
    scanf("%d", &numQuarto);
   
do {
        printf("\n--== Bem-vindo ao nosso restaurante ==--\n");
        printf("Escolha uma opção:\n");
        printf("1 - Pratos Principais\n");
        printf("2 - Lanches e Petiscos\n");
        printf("3 - Sobremesas\n");
        printf("4 - Bebidas\n");
        printf("5 - Finalizar Pedido\n");
        printf("Selecione uma Opção: ");
        scanf("%d", &opcao);
        getchar();
        
        switch (opcao) {
            case 1:
                printf("\nPratos Principais:\n");
                printf("1 - Filé de frango - R$ 25,00\n");
                printf("2 - Bife à cavalo - R$ 30,00\n");
                printf("3 - Massa ao molho branco - R$ 22,00\n");
                printf("Escolha um prato: ");
                scanf("%d", &escolha);
                if (escolha == 1) total += 25.00;
                else if (escolha == 2) total += 30.00;
                else if (escolha == 3) total += 22.00;
                else printf("Opção inválida!\n");
                break;

            case 2:
                printf("\nLanches e Petiscos:\n");
                printf("1 - Hambúrguer artesanal - R$ 18,00\n");
                printf("2 - Batata frita - R$ 12,00\n");
                printf("3 - Nuggets - R$ 15,00\n");
                printf("Escolha um lanche: ");
                scanf("%d", &escolha);
                if (escolha == 1) total += 18.00;
                else if (escolha == 2) total += 12.00;
                else if (escolha == 3) total += 15.00;
                else printf("Opção inválida!\n");
                break;

            case 3:
                printf("\nSobremesas:\n");
                printf("1 - Pudim - R$ 10,00\n");
                printf("2 - Brownie - R$ 12,00\n");
                printf("3 - Sorvete - R$ 8,00\n");
                printf("Escolha uma sobremesa: ");
                scanf("%d", &escolha);
                if (escolha == 1) total += 10.00;
                else if (escolha == 2) total += 12.00;
                else if (escolha == 3) total += 8.00;
                else printf("Opção inválida!\n");
                break;

            case 4:
                printf("\nBebidas:\n");
                printf("1 - Suco natural - R$ 7,00\n");
                printf("2 - Refrigerante - R$ 6,00\n");
                printf("3 - Café - R$ 5,00\n");
                printf("Escolha uma bebida: ");
                scanf("%d", &escolha);
                if (escolha == 1) total += 7.00;
                else if (escolha == 2) total += 6.00;
                else if (escolha == 3) total += 5.00;
                else printf("Opção inválida!\n");
                break;

            case 5:
                printf("\nPedido finalizado! Total a pagar: R$ %.2f\n", total);
                printf("Até mais!\n");
                break;

            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 5);
    
     
    for(int i = 0; i < numClientes; i++) {
        if(clientes[i].quarto == numQuarto) {
            clientes[i].valorPedidos += total;
        }
    }
    
}