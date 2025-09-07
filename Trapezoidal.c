#include<stdio.h>
#include<math.h>    

float f(float x) {
    return 4*x - 3*x*x;
}


int main(){

    float a, b, n, h;
    printf("Enter lower limit(a), upper limit(b) and number of intervals(n): ");
    scanf("%f %f %f", &a, &b, &n);
    
    // printf("Enter lower limit(a), upper limit(b) step length(h): ");
    // scanf("%f %f %f", &a, &b, &h);

    h = (b - a) / n;
    

    printf(" Xi\t Yi = f(Xi)\t Yi(i=0,10)\t Yi(i=1,3,5,7,9)\t Yi(i=2,4,6,8)\n");

    float i = 0;
    float Xi = i/n;
    float Yi = f(Xi);

    for(float i = 0; i <=n; i++){
        

        printf("%.2f",i);

        if(Xi == a || Xi == b){            
        printf("%.2f\t", Yi);
        }else{
            // printf("\n");
            printf("  \t X \n ");
        }
    }

       for( int i = a+1; i < n; i++){
        if(i%2 != 0){
            printf("%.2f\t", Yi);
       }else{
            printf("X\t");
        }
       }
       
       for( Xi = 1; i < n; i++){
        if( Xi%2 == 0){
            printf("%.2f\t", Yi);
        }else{
            printf("X\t");
        }

    }  
    







    return 0;
}
