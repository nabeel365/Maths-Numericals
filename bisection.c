#include <stdio.h>

// Declare the function prototype before main
float bisection(float x) {
    float bisect = x*x*x - 9*x + 1;   // Declare variable
    return bisect;                    // Add semicolon
}

int main() {
   
    
    float a, b, c, fc;
    
     printf("Enter lower and upper limits: ");
     
    scanf("%f %f", &a, &b);

    
    
    
    
   
    printf("%f\t %f\t", a, b);
    
    c = (a+b)/2;
    printf("%f\t", c);
    
    fc = bisection(c);
    printf("%f\t", fc); 
    
    
   
 
   if (fc > 0) {
    b = fc;
} else {
    a = fc;
};



        
     
    
    
    return 0;
}


