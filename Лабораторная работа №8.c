#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main ()
{
    int i, j, size1, size2, k1, k2, q, cm, cp;
    char c;
    printf("Размеры строк: ");
    scanf("%d %d", &size1, &size2); //ввод размеров строк с клавиатуры
    c = getchar();
    k1 = size1 + 1;
    k2 = size2 + 1;
    char * str1 = (char*) malloc(sizeof(char) * k1); //динамическое выделение памяти на первую строку
    char * str2 = (char*) malloc(sizeof(char) * k2); //динамическое выделение памяти на вторую строку
    i = j = 0;
    while (k1 > 0)
    {
        c = getchar();
        if (c != '\n' && i < size1) str1[i++] = c; //заполнение строки
        else k1 = str1[i] = 0;
    }
    while (k2 > 0)
    {
        c = getchar();
        if (c != '\n' && j < size2) str2[j++] = c; //заполнение строки
        else k2 = str2[j] = 0;
    }
    int spn;
    char *ch, sym, *strcat, *strcp;
    printf("Длина отрезка одной строки, не содержащей вторую: ");
    spn = strcspn(str1, str2); //нахождение длины отрезка строки, не содержащей другую
    printf("%d \n", spn);
    printf("Символ для поиска в строке: ");
    scanf("%c", &sym);
    ch = strrchr(str1, sym); //нахождение последнего вхождения символа в строку
    printf("Последнее вхождение символа в строку: ");
    if (ch != NULL){
        printf("%d \n", ch - str1);}
    else printf("символ отсутствует в строке \n");
    printf("Количество символов для действий со строками: q, cp = ");
    scanf("%d %d", &q, &cp);
    cm = strcmp(str1, str2); //сравнение строк
    printf("Сравнение строк: %d \n", cm);
    strcat = strncat(str1, str2, q); //конкатенация строк
    printf("Конкатенация с q символами: %s \n", strcat);
    strcp = strncpy(str1, str2, cp); //копирование символов одной строки в другую
    printf("Копирование cp символов: %s \n", strcp);
    free(str1);
    free(str2);
    return 0;
}