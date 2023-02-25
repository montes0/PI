#include <stdio.h>

// Exercício 2

void swapM (int *x, int *y){
    int va = *x;
    *x = *y;
    *y = va;
}

// Exercício 3

void swap (int v[], int i, int j){
    int va = v[i];
    v[i] = v[j];
    v[j] = va;
}

// Exercício 4

int soma (int v[], int N){
    int i, soma = 0;
    for(i=0; i<N ;i++){
        soma += v[i];
    }
    return soma;
}

// Exercício 5

void inverteArray (int v[], int N){
    int i;
    for(i=0; i<N/2; i++){
        swap(v,i,N-i-1);
    }
}

// Exercício 6

int maximum (int v[], int N, int *m){
    if(N <= 0)
        return -1;
    int i, max=0;
    for(i=0; i<N; i++){
        if(v[i] > max)
            max = v[i];
    }
    *m = max;
    return 0;
}

// Exercício 7

void quadrados(int q[], int N){
    int i;
    q[0] = 0;
    for(i = 1; i < N; i++){
        q[i] = q[i-1]+(2*(i-1)+1);
    }
}

// Exercício 8

void pascal_aux (int v[], int n) {
    int i;
    v[0] = 1;
    v[n] = 1;
    for (i=n-1; i>0; i--){
        v[i] = v[i] + v[i-1]; 
    }
}    

void pascal (int n) {
    int k, i;
    int v[n+1];
    for(k=0; k<n; k++){ 
        pascal_aux (v,k);
        for(i=0; i<=k; i++)
            printf("%d ",v[i]);
        putchar('\n');
    }
}