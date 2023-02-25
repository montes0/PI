#include <stdio.h>

int maior() {
    int num, max = 0;
    do {
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    } while (num != 0);
    
    printf("O maior elemento da sequência é: %d\n", max);

    return 0;
}


int media() {
    int num, media = 0, con = 0;
    do {
        scanf("%d", &num);
            (media = media + num) {
                con++;
        }
    } while (num != 0);

    media = media / con;
    
    printf("A média da sequência é: %d\n", media);

    return 0;
}

int maior2() {
    int num, max = 0, max2 = 0;
    do {
        scanf("%d", &num);
        if (num > max) {
            max = num;
        } else{ if(max2 < num){
                    max2 = num;  
                }
            }   

    } while (num != 0);
    
    printf("O 2 maior elemento da sequência é: %d\n", max2);

    return 0;
}


int bitsUm(unsigned int x) {
    int r = 0;
    while (x != 0) {
        if (x & 1) { // verifica se o bit menos significativo é 1
            r++;
        }
        x = x >> 1; // desloca x para a direita para testar o próximo bit
    }
    return r;
}


int trailingZ (unsigned int n) {
    // a função  trailingZ  calcula o número de bits a 0  no final da 
    // representação binária de um número (i.e., o expoente da maior 
    //  potência de 2 que é divisor desse número).
    return -1;
}