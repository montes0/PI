#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
int valor;
struct nodo *pai, *esq, *dir;
} *ABin;

int moda(int v[], int N, int *m){
    int i, j, freq, max=0, flag=0;

    for(i=0;i<N;i++){
        freq = 1
        for(j=i+1;j<N;j++){
            if(v[i]==v[j]) freq++;
        }
        if (freq>max){
            max = freq;
            *m = v[i];
            flag = 0;
        }
        else if (freq==max) flag=1;
    }    
    if (flag) return 0;
    return max;
}


int procura (LInt *l, int x){

}

int freeAB(ABin a){
    if (!a) return 0;

    int esq= freeAB(a->esq);
    int dir= freeAB(a->dir);

    free(a);
    return 1+esq+dir;
}

void caminho(Abin a){
    if(a && a->pai){
        caminho(a->pai);

        if ((a->pai)->dir==a) printf (" dir \n");
        else printf(" esq \n");
    }
}
