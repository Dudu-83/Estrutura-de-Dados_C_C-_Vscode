#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main (){
    SetConsoleOutputCP(65001);

    int x = 10;
    int *pt_x;

    printf("O valor de x: %d\n", x); // Valor de X inicialmente
    printf("O valor de endereço *pt_x: %p\n", (void*)pt_x); // Valor de endereço pt_x

    pt_x = &x; // Endereço alocado no ponteiro pt_x

    printf("O valor de endereço *pt_x: %p\n", (void*)&x); // Valor do Endereço de x

    *pt_x = 50; // colocando valor 

    printf("O valor de endereço *pt_x : %p\n", (void*)pt_x);
    printf("O valor de x: %d\n", x);

return(0);
};