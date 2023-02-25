#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct celula {
    char *palavra;
    int ocorr;
    struct celula * prox;
} * Palavras;


void libertaLista (Palavras l) {
    Palavras *temp;
    while(l) {
        temp=(&l);
        l=l->prox;
        free(temp);
    }
}

Lista quantasP (Palavras l){
    int l=0;

    while(l){
        len++;
        l=l->prox
    }
    return len;
}

void listaPal (Palavras l){
    while(l){
        printf("[Palavra] %s | [Ocorrência] %d\n",l->palavra,l->ocorr);
        l=l->prox 
    }
}

// ? dúvida
char * ultima (Palavras l){
    if (!l) return NULL;
    while(l->prox) l=l->prox;
    return l->palavra;    
}

Palavras acrescentaInicio (Palavras l,char *p){
    Palavras new = malloc(sizeof(struct cedula));

    new->palavra = strdup(p);
    new->ocorr = 1;
    new->prox = 1;

    return new;
}

Palavras acrescentaFim (Palavras l,char *p){
    Palavras temp=l, new = malloc(sizeof(struct cedula));

    new->palavra = strdup(p);
    new->ocorr = 1;
    new->prox = NULL;
// ? dúvida nesta parte
    if (!l) return new;

    while(temp->prox){
        temp=temp->prox;
    }

    temp->prox = new;
    return 1;
}


