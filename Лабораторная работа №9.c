#include <stdio.h>

int main() {
    char line[1024];
    gets(line); //ввод строки
    int count_n = 0, count_sm = 0, count_big = 0;
    int i = 0;
    while (line[i] != '\0') {
        if (line[i] >= '0' && line[i] <= '9') count_n++; //подсчёт цифр
        if (line[i] >= 'a' && line[i] <= 'z') count_sm++; //подсчёт строчных букв
        if (line[i] >= 'A' && line[i] <= 'Z') count_big++; //подсчёт заглавных букв
            i++;
        }
    printf("Количество цифр: %d; Количество строчных букв: %d; Количество заглавных букв: %d \n", count_n, count_sm, count_big);

    int num;
    scanf("%d", &num); //ввод числа
    const char *words[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    printf("Числу %d соответствует числительное %s", num, words[num]);
    return 0;
}