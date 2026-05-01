#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    
    printf("Olá Mundo em C\n");
    system("pause");
    return 0;
}