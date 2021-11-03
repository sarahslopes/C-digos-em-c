#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



 char letra;
 char clientes[100];
// int contas[200];
 //int transacoes[1000];
 
 ///struct cliente{
    // char nome[50];
    // int CPF[50];
    // int telefone[30];
    // char endereco[100];
 //}

char menu_1(){ //menu principal
    
    printf("=============== Bem vindo! =================\n");
    printf("Digite um comando para prosseguir:\n");
    printf("C – Gerenciar Clientes\n");
    printf("T – Gerenciar Contas\n");
    printf("S - Sair\n");
    
}

char menu_2(char letra){
    char C, c;
    
        if(letra == 'C'){
            printf("============ Gerenciar Clientes ============\n");
            printf("Digite um comando para prosseguir:\n");
            printf("C – Cadastrar um cliente\n");
            printf("L – Listar todos os clientes cadastrados\n");
            printf("B – Buscar cliente já cadastrado\n");
            printf("A – Atualizar um cliente cadastrado\n");
            printf("E – Excluir um cliente cadastrado\n");
            printf("S – Sair\n");
    } 
}
    
char menu_3(char letra){
     char T;
 
        if(letra == 'T'){
            printf("Digite um comando para prosseguir:\n");
            printf("R – Listagem de todas as contas cadastradas.\n");
            printf("C – Cadastrar uma conta para um cliente\n");
            printf("L – Listar todas as contas de um cliente\n");
            printf("W – Realizar um saque em uma conta\n");
            printf("D – Realizar um depósito em uma conta.\n");
            printf("W – Realizar um saque em uma conta\n");
            printf("T – Realizar transferência entre contas\n");
            printf("E – Exibir extrato de uma conta\n");
            printf("S – Sair\n");
    }
}

char cadastro (char letra){
    char c;
    
    if(letra == 'c'){
        printf("Informe os dados do cliente:\n");
        printf("Código:\n");
        printf("Nome:\n");
        printf("CNPJ/CPF:\n");
        printf("Telefone:\n");
        printf("Endereço:\n");
    }

}
    
    char sair(char letra){
        if(letra == 'S'){
                system ('clear');
        }
        
    }

int main() {

    menu_1(letra);

    
    scanf("%c", &letra); 
    
    
   if(letra == 'C'){
        menu_2(letra);
   }
    
     if(letra == 'c'){
          cadastro(letra);
    }
   
   if(letra == 'T'){
        menu_3(letra);
   }
   
     if(letra == 'S'){
        sair(letra);
   }

   
    return 0;
    
    
}
