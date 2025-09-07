#include <stdio.h>

float f(float x, float y){
    return x*y;
}

int main() {
    
    float h, x, y, q, k1, k2, k3, k4;
    
    printf("Enter the step length: ");
    scanf("%f", &h);
    
    printf("Enter the initial value of x: ");
    scanf("%f", &x);
    
    printf("Enter the initial value of y: ");
    scanf("%f", &y);
    
    printf("Enter the value of y(x) to be found: ");
    scanf("%f", &q);
   
   do{

    k1= h*f(x, y);
    k2= h*f(x + (h/2), y + (k1/2));
    k3= h*f(x + (h/2), y + (k2/2));
    k4= h*f(x+h, y+k3);
    
    y= y + ((k1+2*k2+2*k3+k4)/6);
    
    
    x = x+h;
    
    printf("\nFor y(%f)", x);
    printf("\n");
    printf("\nk1=%f \nk2=%f \nk3=%f \nk4=%f \n", k1, k2, k3, k4);

   }while (x < q);

    
   printf("\nValue at y(%f) is %f", q, y);


    return 0;
}