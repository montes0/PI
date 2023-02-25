/* Main function of the C program. */

#include <stdio.h>

void quadrado (int n){
    int i = 0;
    int j = 0;
    while (i<n) {
        while (j<n) {
            putchar('#');
            j++;
        }
        putchar('\n');
        i++;
        j = 0;
    }
    printf ("Quadrado %d já está feito...\n", n);
}

void xadrez (int n){
    for (int i=0; i<n ; i++){
        for(int j=0;j<n;j++) {
            if ( (i+j) % 2 == 0) putchar ('#');
            else putchar('_');
        }
        putchar('\n');
    }
    printf ("Xadrez %d já está feito...\n", n);
}

void trianguloH (int n){
    printf ("TrianguloH %d ainda não está feito...\n", n);
}

void trianguloV (int n){
        int i,j,k;
    for(i=0; i<n; i++) {
        for(j=0; j<n-i; j++)
            putchar(' ');
        for(k=0; k<(2*i-1); k++)
            putchar('*');
        putchar('\n');
    }
    printf ("TrianguloV %d já está feito...\n", n);
}

int circulo (int raio){
    printf ("Circulo %d ainda não está feito...\n", raio);
    return 0;
}

int main()
{
    quadrado (5);
    xadrez (5);
    trianguloH (5);
    trianguloV (5);
    printf ("\nForam usados %d caracteres para fazer o circulo\n", circulo (5));
    return 0;
}
