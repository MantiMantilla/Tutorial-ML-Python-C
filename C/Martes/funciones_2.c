#include <stdio.h> // standard input/output  

int f2(int x, int y);

void f1(void){ /*f1 llama a f2*/
    int a=1, b=2, c;
    printf("Antes de f2\n");
    printf("a: %d, b: %d, c: %d\n", a, b, c);
    
    c = f2(a,b); 
    printf("Pasado f2\n");
    printf("a: %d, b: %d, c: %d\n", a, b, c);    
}

int f2(int x, int y){ /* f2 recibe dos enteros y retorna un entero */
    x *= 2;
    ++y;
    return x + y;
}

int main (void) { /* main llama a f1*/
    f1();
    return 0;
}
