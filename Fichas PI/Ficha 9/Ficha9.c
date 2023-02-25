#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int valor;
    struct nodo *esq, *dir;
} * ABin;

ABin newABin (int r, ABin e, ABin d) {
    ABin a = malloc (sizeof(struct nodo));
    
    if (a!=NULL) {
    a->valor = r; a->esq = e; a->dir = d;
    }
    
    return a;
}

int altura (ABin a){
    if (a==NULL) return 0;
    return (altura(a->esq)>altura(a->dir) ? 1 + altura(a->esq) : 1 + altura(a->dir));
}

int nFolhas (ABin a){
    if ((a->esq)==NULL || (a->dir)==NULL) return 1;

    return nFolhas(a->esq)+nFolhas(a->dir);
}

ABin maisEsquerda (ABin a){
    if (a==NULL || a->esq==NULL) return a;

    return maisEsquerda(a->esq);
}

// ? não percebo
void imprimeNivel (ABin a, int l){
    if(a) {    
        if(l==0) printf("%d\n", a->valor);
        
        else {
            imprimeNivel(a->esq, l-1);
            imprimeNivel(a->dir, l-1);
        }
    }
}

int procuraE (ABin a, int x){
    if(a) {
        int found = 0;
        if(a->valor==x) found = 1;
        
        found = procuraE(a->esq, x) || procuraE(a->dir, x);
        
        return found;  
    }
}