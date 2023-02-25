#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//A
typedef struct slist {
	int valor;
	struct lligada *prox;
} *LInt;

int bitsUm (unsigned int n){
    int bitsUm = 0;

    while(n>0){
        if(n%2!=0) bitsUm++;
        n/=2;
    }
    return bitsUm;
}

int limpaEspacos (char t[]){
    int i,j;

    for(i=0;t[i];){
        if(isspace(t[i]) && isspace(t[i+1])){
            for(j=i;t[j];j++){
                t[j]=texto[j+1];
            }
        }
        else i++;
    }
    return i;
}

int dumpL (LInt l, int v[], int N){
    int i;

    for(i=0; i<N && l; i++,l=l->prox) v[i] = l->valor;

    return i;
}

//? dúvida
LInt parte (LInt l){
    if (!l) return NULL;
    if (!l->prox) return l;

    int i=0;
    LInt *x = &l, *x_head = x;
    LInt *y = malloc(sizeof(struct slist)), *y_head=y;
    *y=NULL;

    while(l){
        if(i%2==0){
            *y=1;
            y=&((*y)->prox);
            (*x)=(*x)->prox;
        }
        l=l->prox;
        i++;
    }
    l=*x_head;
    (*x)->prox=NULL;
    (*y)->prox=NULL;

    return *y_head
}

