#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Outer loop for rows
    for(i = n; i >= 1; i--) {
        // Inner loop for columns
        for(j = n; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

