//take input and print output
// #include <stdio.h>

// int main() {
//     int m, n, i, j;
//     printf("Enter the number of rows: ");
//     scanf("%d", &m);
//     printf("Enter the number of columns: ");
//     scanf("%d", &n);

   
//     int a[m][n];

//     printf("Enter the elements of the array:\n");
//     for (i = 0; i < m; i++) {
//         for (j = 0; j < n; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("The array elements are:\n");
//     for (i = 0; i < m; i++) {
//         for (j = 0; j < n; j++) {
//             printf("%d ", a[i][j]); 
//         }
//         printf("\n");  
//     }

//     return 0;
// }




//sum of given matrix
// #include <stdio.h>

// int main() {
//     int sum, m, n, i, j;
//     printf("Enter the number of rows: ");
//     scanf("%d", &m);
//     printf("Enter the number of columns: ");
//     scanf("%d", &n);

   
//     int a[m][n];

//     printf("Enter the elements of the array:\n");
//     for (i = 0; i < m; i++) {
//         for (j = 0; j < n; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("The sum of array elements are:\n");
//     for (i = 0; i < m; i++) {
//         for (j = 0; j < n; j++) {
//             sum+=a[i][j];
//         }
//     }
//  printf("%d ", sum); 
//     return 0;
// }


//sum of given two matrix


// #include <stdio.h>

// int main() {
//     int a[2][2], b[2][2], c[2][2];


//     printf("Enter elements for matrix a:\n");
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }


//     printf("Enter elements for matrix b:\n");
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             scanf("%d", &b[i][j]);
//         }
//     }

//     printf("Sum of matrices a and b:\n");
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             c[i][j] = a[i][j] + b[i][j];
//             printf("%d ", c[i][j]); 
//         }
//         printf("\n"); 
//     }

//     return 0;
// }
