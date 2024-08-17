
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d", &n);
    if (n < 3) {
        printf("Wrong input! Try again.\n");
    } else {
        int a[n][n];
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                a[i][j] = j - i + 1;
            }
        }
        printf("The matrix is:\n");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
