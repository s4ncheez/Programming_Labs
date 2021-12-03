#include "triangle.h"

float Perimeter (struct Triangle *T) {
    float A, B, C;
    A = sqrt (pow(T->xy2[0] - T->xy1[0], 2) + pow(T->xy2[1] - T->xy1[1], 2));
    B = sqrt (pow(T->xy3[0] - T->xy2[0], 2) + pow(T->xy3[1] - T->xy2[1], 2));
    C = sqrt (pow(T->xy3[0] - T->xy1[0], 2) + pow(T->xy3[1] - T->xy1[1], 2));
    float per;
    per = A + B + C;
    return per;
}

float Square (struct Triangle *T) {
    float A, B, C;
    A = sqrt (pow(T->xy2[0] - T->xy1[0], 2) + pow(T->xy2[1] - T->xy1[1], 2));
    B = sqrt (pow(T->xy3[0] - T->xy2[0], 2) + pow(T->xy3[1] - T->xy2[1], 2));
    C = sqrt (pow(T->xy3[0] - T->xy1[0], 2) + pow(T->xy3[1] - T->xy1[1], 2));
    float semi_per;
    semi_per = (A + B + C) / 2;
    float square;
    square = sqrt(semi_per * (semi_per - A) * (semi_per - B) * (semi_per - C));
    return square;
}