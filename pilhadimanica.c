#include<stdio.h>
#include<stdlib.h>

typedef struct Pessoa{
    int info;
    struct Pessoa *next;
}PESSOA;


PESSOA* criarPessoa(){
    PESSOA *nova=(PESSOA*)malloc(sizeof(PESSOA));
    return nova;
}

void verificarVazia(PESSOA **lista){
    if((*lista)==NULL){
        return 1;
    }
    return 0;
}

int inserirFim(PESSOA **lista, int elemento){
    PESSOA *novaPessoa;//end. nova
    PESSOA *auxiliar;

    novaPessoa = criarPessoa();
    if(novaPessoa == NULL){
        printf("\nERRO: MEMORIA CHEIA");
        return 0;
    }
    novaPessoa->info = elemento;
    novaPessoa->next = NULL;
}

int inserirInicio(PESSOA **lista, int elemento){
    PESSOA *novaPessoa = criarPessoa();
    if(novaPessoa == NULL){
        printf("\nERRO: memoria cheia");
        return 0;
    }
    //if(listaVazia(lista)){
        return inserirFim(lista,elemento);
    //}
    novaPessoa->next=(*lista);
    (*lista) = novaPessoa;
    return 1;
}

int Menu(){
    printf("----------MENU----------\n");
    printf("0 - SAIR\n");
    printf("1 - VERIFICAR VAZIA\n");
    printf("2 - INSERIR PESSOA NO FIM\n");
    printf("3 - INSERIR PESSOA NO INICIO\n");
    printf("4 - IMPRIMIR LISTA DE PESSOAS\n");
    printf("5 - REMOVER PESSOA NO INICIO\n");
    printf("6 - REMOVER PESSOA NO FIM\n");
    printf("7 - PESQUISAR POR MATRICULA\n");
    printf("8 - REMOVER POR MATRICULA\n");
    printf("------------------------");
}

int main(void){
        PESSOA *q = criarPessoa();
        Menu();



 return 0;
}
