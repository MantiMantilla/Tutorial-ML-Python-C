#include <stdio.h> // standard input/output  

int f1(int x, int y){ /* f1 recibe dos enteros y retorna el máximo */
    int res;
    if (x < y){
        res = y;
    }
    else{
        res = x;    
    }
    return res;
}

int main (void) { /* main llama a f1*/
    int a = 2, b = 3, c; 
    c = f1(a,b);
    printf("result: %d", c);
    return 0;
}
