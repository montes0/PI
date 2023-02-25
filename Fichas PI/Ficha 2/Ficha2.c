#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Exercício 1
float multInt1 (int n, float m){
    float r = 0;
   
    while(n>0){
        n--;
        r += m;
    }

    return r;
}

//Exercício 2

float multInt2 (int n, float m){
    float r = 0;
    
    while(n>=1){
        n /= 2;
        m *= 2;
        if(n%2 != 0) r+= m;
    }
    
    return r;
}

// Exercício 3

int mdc1(int a, int b){
    int menor, c, r;
    
    if (a < b){
        menor = b;
    } else menor = a;
    
    for(c=1; c<=menor; c++){
        if(a%c == 0 && b%c == 0)
            r = c;
    }

    return r;
}

// Exercício 4 

int mdc2 (int a, int b){
    while (a > 0 && b > 0) {
        if (a == b)
            return a;
        else{
            if (b > a)
                b = b - a;
            else
                a = a - b;
        }
    }
}

int main()
{  int a,b,r1,r2;
   float f, f1, f2;
    
   printf ("Input de 2 valores para as funções de multiplicação: ");
   scanf ("%d", &a); scanf ("%f", &f);
   f1 = multInt1 (a,f);
   f2 = multInt2 (a,f);
   printf ("Resultados das multiplicações: %f, %f\n", f1, f2);
   
   printf ("Input de 2 valores para as funções de mdc: ");
   scanf ("%d", &a); scanf ("%d", &b);

   r1 = mdc1 (a,b);
   r2 = mdc2 (a,b);

   printf ("Resultados do mdc: %d, %d\n", r1, r2);
   
   return 0;
}