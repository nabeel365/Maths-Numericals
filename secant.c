#include<stdio.h>
#include<math.h>

float f(float x) {
    return x * exp(x) - 1;
}

int main(){

    float Xn_minus1, Xn, Xn_plus1;

    printf("Enter lower and upper bounds, Xn-1 and Xn: ");
    scanf("%f %f", &Xn_minus1, &Xn);

    printf("Steps\t Xn-1\t Xn\t f(Xn-1)\t f(Xn)\t Xn+1\t \n");

    int steps = 1;

    do{
        
    float fXn_minus1 = f(Xn_minus1);
    float fXn = f(Xn);

    Xn_plus1 = Xn - (fXn * (Xn - Xn_minus1)) / (fXn - fXn_minus1);;

        printf("\n%d\t %.4f\t %.4f\t %.4f\t %.4f\t %.4f", 
               steps, Xn_minus1, Xn, f(Xn_minus1), f(Xn), Xn_plus1);
        Xn_minus1 = Xn;
        Xn = Xn_plus1;
        steps++;

        
    }while(fabs(Xn_plus1 - Xn_minus1) >= 0.0005);

    printf("\nRoot is: %.4f", Xn_plus1);



    return 0;
}