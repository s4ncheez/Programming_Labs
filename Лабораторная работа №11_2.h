#ifndef LAB11_TRIANGLE_H
#define LAB11_TRIANGLE_H

#include <math.h>

struct Triangle {
    int xy1[2], xy2[2], xy3[2];
};

float Perimeter (struct Triangle *T);
float Square (struct Triangle *T);

#endif //LAB11_TRIANGLE_H
