#include <stdio.h>

int main() {
    int X;
    float Y;
    scanf("%d %f", &X, &Y);
    if (X % 5 == 0 && (X + 0.50) <= Y) {
        Y = Y - X - 0.50;
    }
    printf("%.2f\n", Y);
    
    return 0;
}