#include <stdio.h>
#include <math.h>

float f(float x) {
    // return x*x*x - 9*x + 1;
    // return x*x*x - 2*x - 5; 
    // return x + log(x) -2;
    // return exp(x) - 3 * x; // Example function: e^x - 3x
    // return 2*x - 3*sin(x) - 5;
    // return pow(x,x) + 2*x - 6;
    return pow(x,3) - 1.1*x*x + 4*x - 4.4;

}

int main() {
    float a, b, c;

    printf("Enter lower and upper bounds (a b): ");
    scanf("%f %f", &a, &b);
    
   
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

    } while ((b - a) > 0.01);

    printf("\nRoot: %.2f\n", c);
    return 0;
}
