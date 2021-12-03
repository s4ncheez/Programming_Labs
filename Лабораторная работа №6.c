#include <stdio.h>
#include <malloc.h>

int main() {
    float a[4]; //объявление массива и указателя
    float *pa;
    pa = &a[0];
    for (int i = 0; i < 4; i ++) {
        scanf("%f", pa + i); //заполнение массива
    }
    printf("i -> a[i] \n");
    for (int i = 0; i < 4; i ++) {
        printf("%d -> %f", i, *(pa + i)); //вывод элементов массива
        printf ("\n");
    }
    float *p;
    int n;
    scanf("%d", &n);
    p = (float*)malloc(n * sizeof(float)); //создание массива в динамической памяти
    for (int i = 0; i < n; i ++) {
        scanf("%f", &p[i]); //заполнение массива
    }
    printf("i -> a[i]");
    for (int i = 0; i < n; i++) {
        printf("%d -> %f", i, p[i]); //вывод элементов массива
        printf("\n");
    }
    free(p);
    return 0;
}
