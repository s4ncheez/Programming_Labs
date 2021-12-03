#include <stdio.h>
#include <math.h>

enum Music { 
    Classic,
    Pop,
    Electronic,
    Rap,
    NewAge,
    Rock
};

struct Triangle { 
    int xy1[2], xy2[2], xy3[2];
};

struct Element { 
    unsigned On:1;
    unsigned SD:1;
    unsigned CompactFlash:1;
    unsigned MemoryStick:1;
};

union Card_Reader { 
    int status;
    struct Element st;
};

float Perimeter (struct Triangle*T) { 
    float A, B, C;
    A = sqrt (pow(T->xy2[0] - T->xy1[0], 2) + pow(T->xy2[1] - T->xy1[1], 2));
    B = sqrt (pow(T->xy3[0] - T->xy2[0], 2) + pow(T->xy3[1] - T->xy2[1], 2));
    C = sqrt (pow(T->xy3[0] - T->xy1[0], 2) + pow(T->xy3[1] - T->xy1[1], 2));
    float per;
    per = A + B + C;
    return per;
}

int main() {
    union Card_Reader c_r;
    struct Triangle T;
    struct Element st;
    for (int i = 0; i < 2; i++) { 
        scanf("%d", &T.xy1[i]);
    }
    for (int i = 0; i < 2; i++) {
        scanf("%d", &T.xy2[i]);
    }
    for (int i = 0; i < 2; i++) {
        scanf("%d", &T.xy3[i]);
    }
    printf("Rock = %d, Perimeter = %f \n", Rock, Perimeter(&T));
    scanf("%x", &c_r.status);
    printf("%d %d %d %d \n", c_r.st.On, c_r.st.SD, c_r.st.CompactFlash, c_r.st.MemoryStick);
    return 0;
}