#include <stdio.h>

int main() {
    float mat[3][4];  // 3x3 matrix + constants
    float x, y, z;
    float ratio;
    int i, j, k;

    printf("Enter coefficients and constants for each equation (a b c d for ax + by + cz = d):\n");
    
    // Input augmented matrix
    for(i = 0; i < 3; i++) {
        printf("Equation %d: ", i+1);
        for(j = 0; j < 4; j++) {
            scanf("%f", &mat[i][j]);
        }
    }

    // Forward elimination
    for(i = 0; i < 2; i++) {
        if(mat[i][i] == 0.0) {
            printf("Error: Zero pivot element encountered.\n");
            return 1;
        }

        for(j = i + 1; j < 3; j++) {
            ratio = mat[j][i] / mat[i][i];
            for(k = i; k < 4; k++) {
                mat[j][k] -= ratio * mat[i][k];
            }
        }
    }

    // Back substitution
    z = mat[2][3] / mat[2][2];
    y = (mat[1][3] - mat[1][2] * z) / mat[1][1];
    x = (mat[0][3] - mat[0][2] * z - mat[0][1] * y) / mat[0][0];

    printf("\nSolution:\n");
    printf("x = %.3f\n", x);
    printf("y = %.3f\n", y);
    printf("z = %.3f\n", z);

    return 0;
}
