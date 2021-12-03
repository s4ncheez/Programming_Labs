#include <stdio.h>
#include "triangle.h"

int main() {
    struct Triangle T;
    for (int i = 0; i < 2; i++) {
        scanf("%d", &T.xy1[i]);
    }
    for (int i = 0; i < 2; i++) {
        scanf("%d", &T.xy2[i]);
    }
    for (int i = 0; i < 2; i++) {
        scanf("%d", &T.xy3[i]);
    }
    float p = Perimeter(&T);
    float s = Square(&T);
    printf("Периметр треугольника равен: %f , его площадь равна: %f", p, s);
    return 0;
}