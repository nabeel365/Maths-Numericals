#include <stdio.h>
#include <math.h>

float f(float x) {
    return x*x*x - 9*x + 1;
}

int main() {
    float a = 2, b = 3, c;
    
   
    printf("steps\t a\t b\t c=(a+b)/2\t f(c)\n");

    int steps = 0;
    do {
        c = (a + b) / 2;

        printf("%d\t %.4f\t %.4f\t %.4f\t %.4f\n", steps, a, b, c, f(c));


        if (f(c) < 0)
            a = c;
        else
            b = c;

        steps++;

    } while ((b - a) > 0.001);

    printf("\nRoot: %.2f\n", c);
    return 0;
}
