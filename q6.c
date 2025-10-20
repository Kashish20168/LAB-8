#include <stdio.h>

int main() {
    int i, j, n, flag = 1;
    
    printf("Enter the size of the matrix (n for n x n): ");
    scanf("%d", &n);

    int mat[n][n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j && mat[i][j] != 1) {  
                flag = 0;
            }
            else if (i != j && mat[i][j] != 0) { 
                flag = 0;
            }
        }
    }

    if (flag == 1)
        printf("The matrix is an Identity Matrix.\n");
    else
        printf("The matrix is NOT an Identity Matrix.\n");

    return 0;
}
