#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argv, char ** argc)
{
    int b; // объявление переменной b типа int
    float z1, z2; // объявление переменных z1 и z2 типа float
    scanf ("%d", &b); // ввод переменной b с клавиатуры
    z1 = sqrt(2 * b + 2 * sqrt(pow(b, 2) - 4)) / (sqrt(pow(b, 2) - 4) + b + 2); // функция для z1
    z2 = 1 / sqrt(b + 2); // функция для z2
    printf("z1 = %f z2 = %f", z1, z2); // вывод переменных
    return 0;
}