#include <stdio.h> // standard input/output  

int f1(int x, int y){ /* f1 recibe dos enteros y retorna el máximo */
    return x < y ? y: x;
}

int main (void) { /* main llama a f1*/
    int a = 2, b = 3, c; 
    c = f1(a,b);
    printf("result: %d", c);
    return 0;
}
