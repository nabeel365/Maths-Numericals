#include <stdio.h>
#include <math.h>

float f(float x) {
    // return x * x * x - 8 * x - 4;
    return x * x * x - 4 * x - 9;

}

float fx(float x) {
    return 3 * x * x - 4;
}

float hn(float x) {
    return -f(x) / fx(x);
}

// float Xn(float x, float h) {
//     return x + h;
// }

int main() {
    float x, y, h, Xn;

    printf("Enter lower and upper bounds (x, y): ");
    scanf("%f %f", &x, &y);

    printf("steps\t x\t f(x)\t fx(x)\t h= -f(x)/fx(y)\t Xn\n");

    int steps = 0;

    do{
        f(x);
        fx(x);
        hn(x);
        Xn= x + hn(x);
        steps++;




        printf("%d\t %.4f\t %.4f\t %.4f\t %.4f\t %.4f\n", steps, x, f(x), fx(x), hn(x), Xn);
        
    }while(fabs(Xn - x) >= 0.001);









    
return 0;
}

