#include <stdio.h>

int main() {
    int i, j, k; // объявление переменных i, j и k типа int
    int a[9]; // объявление массива и его размера
    for (i = 0; i < 9; i ++) {
        scanf ("%d", &a[i]); // заполнение массива с клавиатуры
    }
    printf ("index a[index] \n"); // вывод "шапки" для вывода массива
    for (i = 0; i < 9; i ++)
        printf ("%d %d \n", i, a[i]); // вывод элементов массива
    int m[2][2], n[2][2], mn[2][2]; // объявление матриц m, n и mn - результата перемножения m на n
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j ++) {
            scanf("%d", &m[i][j]); // заполнение матрицы m с клавиатуры
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j ++) {
            scanf("%d", &n[i][j]); // заполнение матрицы n с клавиатуры
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j ++) {
            mn[i][j] = 0;
            for (k = 0; k < 2; k ++) {
                mn[i][j] += m[i][k] * n[k][j]; // перемножение матриц m и n
            }
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j ++) {
            printf("%d", mn[i][j]); // вывод элементов матрицы mn
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}