#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);

    int ** pt2; /*ponteiro para ponteiro do tipo inteiro*/
    int * pt1; /*ponteiro para o tipo inteiro*/
    int x = 10;

    pt2 = &pt1;
    pt1 = &x;

    printf("Valor de x: %d\n\n", x);

    *pt1 = 30;

    printf("Valor de x: %d\n\n", x);

    **pt2 = 50;

    printf("Valor de x: %d\n", x);

return(0);
};

