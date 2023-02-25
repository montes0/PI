#include <stdio.h>
#include <stdlib.h>

typedef struct slist {
    int valor;
    struct slist *prox;
} *LInt;

typedef struct nodo {
	int valor;
	struct nodo *esq, *dir;
} *ABin;

int limpaEspacos (char t[]){
    int i,j;

    for(i=0,j=0;t[i]!='\0';i++;){
        if(!(t[i]== ' ' && t[i+1]==' ')){
            t[j++]=t[i];
        }
    }
    t[j] = '\0';

    return j;
}

void transposta (int N, float m [N] [N]){
    
}