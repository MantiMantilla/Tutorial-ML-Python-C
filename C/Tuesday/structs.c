#include <stdio.h> 
#include <math.h> 
/* Estructura Punto bidimensional */
struct Punto {
    int x;
    int y;
}; 

double distancia(struct Punto p1, struct Punto p2){ /* calcula distancia entre dos puntos */
    struct Punto delta = { p1.x - p2.x, p1.y - p2.y };
    double dist = sqrt((double)delta.x * delta.x + (double)delta.y * delta.y);
    return dist;
}

int main (void) { /* main llama a f1*/
    struct Punto p1;
    p1.x = 2;
    p1.y = 4; 
    struct Punto p2 = { 5, 6 };
    printf("distancia: %e", distancia(p1,p2));
    return 0; 
}
