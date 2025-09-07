#include <stdio.h>
#include <math.h>

float f(float x){
    return x*x*x + 2*x - 2;

}

int main(){

    float a, b, Hn, Xn_plus1;

    printf("Enter lower and upper bounds: ");
    scanf("%f %f", &a, &b);

    printf("Steps\t a(-ve)\t b(+ve)\t f(a)\t \t f(b)\t Hn\t Xn+1\t f(Xn+1)"); 

    
    int steps = 1;
    do{

        

        Hn = (fabs(f(a))*(b-a))/(fabs(f(a))+fabs(f(b)));
        Xn_plus1 = a + Hn;

        

        printf("\n%d\t %.4f\t %.4f\t %.4f\t %.4f\t %.4f\t %.4f\t %.4f", 
               steps, a, b, f(a), f(b), Hn, Xn_plus1, f(Xn_plus1));

              


                if(f(Xn_plus1) < 0){
               a= Xn_plus1;
               }
                else{   
                b = Xn_plus1;
                }

        steps++;

   
        
        
       

    }while(a == Xn_plus1);

    
printf("\nRoot is: %.4f", Xn_plus1);
  
    



    return 0;
}