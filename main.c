#include <stdio.h>

int main() {
    float a, b, c;

    scanf("%f %f", &a, &b);

    if (a + b >= 180 || a <= 0 || b <= 0) {
        printf("Valores invalidos\n");
        return 1;
    }

    c = 180 - a - b;

    printf("%.2f\n", c);

    return 0;
}
