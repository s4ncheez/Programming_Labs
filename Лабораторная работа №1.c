#include <stdio.h>
#include <stdlib.h>

int main(int argv, char ** argc)
{
    float a; // объявление переменной a типа float
    char b; // объявление переменной b типа char
    scanf("%f %c", &a,&b); // ввод переменных с клавиатуры
    printf("%f %c", a,b); // вывод переменных
    return 0;
}
