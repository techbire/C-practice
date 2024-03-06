
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows for the number pyramid: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print increasing numbers
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
