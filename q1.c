#include <stdio.h>

int main() {
    int i, j;
    int q1[2][2] = { {100, 200}, {150, 250} };
    int q2[2][2] = { {120, 180}, {130, 220} }; 
    int total[2][2]; 


    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            total[i][j] = q1[i][j] + q2[i][j];
        }
    }

    // Displaying result
    printf("Total Sales in Half Year (in thousands):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", total[i][j]);
        }
        printf("\n");
    }

    return 0;
}
