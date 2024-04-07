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

//------------------------------------------------------
//sum of given squared matrix

// #include <stdio.h>

// int main() {
//   int size,sum=0;
//   scanf("%d",&size);
//   int arr[size][size];
//   for(int i=0;i<size;i++){
//       for(int j=0;j<size;j++){
//           scanf("%d",&arr[i][j]);
//       }
//   }
//   for(int i=0;i<size;i++){
//       for(int j=0;j<size;j++){
//           sum+=arr[i][j];
//       }
//   }
//   printf("%d",sum);

//     return 0;
// }

//------------------------------------------------------

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

//------------------------------------------------------
//transpose of matrix
// #include<stdio.h>

// int main() {
//     int row, col;
//     scanf("%d %d", &row, &col);
//     int matrix[row][col];

//     // Taking input for the matrix
//     for(int i = 0; i < row; i++) {
//         for(int j = 0; j < col; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     // Transposing the matrix
//     int transpose[col][row];
//     for (int i = 0; i < col; i++) {
//         for (int j = 0; j < row; j++) {
//             transpose[i][j] = matrix[j][i];
//         }
//     }

//     printf("The transposed matrix is:\n");
//     for (int i = 0; i < col; i++) {
//         for (int j = 0; j < row; j++) {
//             printf("%d ", transpose[i][j]);
//         }
//         printf("\n");
//     } 
    
//     return 0;
// }






