#include <stdio.h>
#include <math.h>

float f(float x) {
    return x * x * x - 4 * x - 9;
    // return x * x * x - 8 * x - 4;
}

float fx(float x) {
    // return 3 * x * x - 8;
    return 3 * x * x - 4;

}

int main() {
    float x, fx_val, f_val, h, Xn;

    printf("Enter initial guess x: ");
    scanf("%f", &x);

    printf("steps\t x\t f(x)\t fx(x)\t h= -f(x)/fx(x)\t Xn\n");

    int steps = 0;

    do {
        f_val = f(x);
        fx_val = fx(x);
        h = -f_val / fx_val;
        Xn = x + h;
        steps++;

        printf("%d\t %.4f\t %.4f\t %.4f\t %.4f\t %.4f\n", steps, x, f_val, fx_val, h, Xn);

        if (fabs(Xn - x) <= 0.00001) {
            break;
        }

        x = Xn;
        

    } while(1);

    printf("Root: %.4f\n", Xn);

    return 0;
}
