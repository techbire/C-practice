// printing squared stars with input based
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }





// printing stars with input based r and c
// #include <stdio.h>
// int main()
// {
//     int r, c;
//     printf("Enter row: ");
//     scanf("%d", &r);
//     printf("Enter column: ");
//     scanf("%d", &c);
//     for (int i = 1; i <= r; i++)
//     {
//         for (int i = 1; i <= c; i++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// printing star trinagle
//  #include<stdio.h>
//  int main(){
//  int n;
//  printf("enter a number: ");
//  scanf("%d",&n);
//  for(int i=1;i<=n;i++){
//      for(int j=1;j<=i;j++){
//          printf("*");
//      }
//  printf("\n");

// }

// }

// printing reverse star triangle
// method-1
//  #include<stdio.h>
//  int main(){
//  int n;
//  printf("enter a number: ");
//  scanf("%d",&n);
//  for(int i=1;i<=n;i++){
//      for(int j=1;j<=n+1-i;j++){
//          printf("*");
//      }

// printf("\n");

// }

// }

// printing reverse star triangle
// method-2
//  #include<stdio.h>
//  int main(){
//  int n;
//  printf("enter a number: ");
//  scanf("%d",&n);
//  int a=n;
//  for(int i=1;i<=n;i++){
//      for(int j=1;j<=a;j++){
//          printf("*");

//     }
// a--;
// printf("\n");

// }

// }

// printing number triangle
//  #include<stdio.h>
//  int main(){
//  int n;
//  printf("enter a number: ");
//  scanf("%d",&n);
//  for(int i=1;i<=n;i++){
//      for(int j=1;j<=i;j++){
//      printf("%d",j);
//  }
//  printf("\n");
//  }

// }

//printing odd number triangle
// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         int a = 1;
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", a);  // Add a space between numbers
//             a = a + 2;
//         }
//         printf("\n");
//     }

//     return 0;



//alphabet square
// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of rows for the Alphabet Triangle: ");
//     scanf("%d", &n);

//     if (n < 1 || n > 26) {
//         printf("Invalid input. Please enter a number between 1 and 26.\n");
//         return 1;  // Return an error code
//     }

//     for (int i = 1; i <= n; i++) {
//         char currentChar = 'A';  // Start with the first alphabet
//         for (int j = 1; j <= i; j++) {
//             printf("%c ", currentChar);
//             currentChar = (currentChar + 1 > 'Z') ? 'A' : currentChar + 1;  // Loop back to 'A' after 'Z'
//         }
//         printf("\n");
//     }

//     return 0;
// }

//alphabet triangle
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of rows for the Alphabet Triangle: ");
//     scanf("%d", &n);
//   if (n < 1 || n > 26) {
//         printf("Invalid input. Please enter a number between 1 and 26.\n");
//         return 1;  // Return an error code
//     }
//         for (int i = 1; i <= n; i++) {
//         char currentChar = 'A';  // Start with the first alphabet
//         for (int j = 1; j <= i; j++) {
//             printf("%c ", currentChar);
//             currentChar++;  // Move to the next alphabet
//         }
//         printf("\n");
//     }

//     return 0;
// }
