#include <stdio.h>

int min (int x, int y) { //функция для нахождения минимума из чисел
    if (x > y) return y;
    else return x;
}

int max (int x, int y) { //функция для нахождения максимума из чисел
    if (x > y) return x;
    else return y;
}

int greatest_common_divisor(int x, int y) { //функция для нахождения НОД
    int div = 0;
    for (int i = 1; i <= min(x, y); i++ ) {
        if (x % i == 0 && y % i == 0) div = i;
    }
    return div;
}

void array_from_number (int number, int *array) {
    int count = 0;
    while (number) {
        array[count] = number % 10;
        number /= 10;
        count++;
    }
}

int smallest_common_multiple (int x, int y) { //функция для нахождения НОК
    int mult = max(x, y) * (min(x, y) / greatest_common_divisor(x, y));
    return mult;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2); //ввод чисел с клавиатуры
    printf("НОД: %d; НОК: %d \n", greatest_common_divisor(num1, num2), smallest_common_multiple(num1, num2));
    printf("Вводим число: ");
    int number;
    scanf("%d", &number);
    int array[100];
    printf("Элементы массива, состоящего из цифр числа: ");
    array_from_number(number, array);
    for (int i = 0; i < 5; i++) {
        printf("%d", array[i]);
    }
    return 0;
}