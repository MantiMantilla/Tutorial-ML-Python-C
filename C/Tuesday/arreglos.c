/* Dias de cada mes */
#include <stdio.h>

int main(void)
{
    //int days[12] = {0};

    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int num_elems = sizeof(days) / sizeof(days[0]);
    printf("sizeof(days): %ld\n", sizeof(days));
    printf("sizeof(days[0]): %ld\n", sizeof(days[0]));

    for(int i = 0; i < num_elems; ++i)
        printf("Mes %d tiene %d dias.\n", i+1, days[i]);

    return 0;
}
