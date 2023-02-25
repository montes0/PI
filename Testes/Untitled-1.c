#include <stdio.h>
#include <stdlib.h>

typedef struct list{
    int valor;
    struct slist *prox;
} *LInt;

typedef struct nodo {
    int valor;
    struct nodo *pai,*esq,*dir;
} *ABin;

int swap(int *x,int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

void bubbleSort(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[i]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}

int sumhtpo (int n) {
int r = 0,j;

while (n != 1) {

r += n;
if (n%2 == 0) n = n/2; else n = 1+(3*n);
}
return r;
}


int moda(int v[], int N, int *m){
    int i,j,max=0,freq,flag=0;

    for(i=0;i<N;i++){
        freq=1;
        for(j=i+1;j<N;j++){
            if (v[i]==v[j]){
                freq++;
            } 
        }
        if(freq>max){
            max=freq;
            *m=v[i];
            flag=0;
        }else if(freq==max) flag=1;
    }
    if (flag) return 0;
    return max;
}

int procura (LInt *l, int x){
    int i;


}

void caminho(ABin a){
    if(a && a->pai){
        caminho(a->pai);

        if((a->pai)->dir==a) printf("dir\n");
        else printf ("esq\n");
    }
}



int freeAB(ABin a){
    if(!a) return 0;

    int esq = freeAB(a->esq);
    int dir = freeAB(a->dir);

    free(a);
    return 1+esq+dir;
}

int main()
{
    printf("Ex_5 \n");

    ABin b = malloc(sizeof(struct nodo));
    b->pai=NULL;
    b->valor = 1;
    b->esq = malloc(sizeof(struct nodo));
    b->esq->pai = b;
    b->esq->valor = 2;
    b->dir = malloc(sizeof(struct nodo));
    b->dir->pai = b;
    b->dir->valor = 3;

    caminho(b);
    return 0;
}