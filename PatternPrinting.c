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

// printing star triangle
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
// }


//alphabet square
// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     for(int i = 1; i <= n; i++) {
//         int a =1;
//         for(int j = 1; j <= n; j++) {
//             int d = a + 64;
//             char ch = (char)d;
//             printf("%c", ch);
//             a++;
//         }
//         printf("\n");
//     }

//     return 0;
// }





//alphabet triangle
// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     for(int i = 1; i <= n; i++) {
//         int a =1;
//         for(int j = 1; j <= i; j++) {
//             int d = a + 64;
//             char ch = (char)d;
//             printf("%c", ch);
//             a++;
//         }
//         printf("\n");
//     }

//     return 0;
// }

//method-02 without typecasting(easy)
// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%c", 'A' + j - 1);
//         }
//         printf("\n");
//     }

//     return 0;
// }





//print starplus
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
//             int a=n/2+1;
//             if (j==a||i==a){
    
//             printf("*");}
//             else{printf(" ");}
//         }
//         printf("\n");
//     }
// }



// printing hollow triangular star
// #include<stdio.h>
// int main() {
//     int r, c;
    
//     printf("Enter the row value\n");
//     scanf("%d", &r);
//     printf("Enter the column value\n");
//     scanf("%d", &c);

//     for (int i = 1; i <= r; i++) {
//         for (int j = 1; j <= c; j++) {
//             if (i == 1 || i == r || j == 1 || j == c) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

//printing starcross
// #include <stdio.h>

// int main() {
//     int size;
//     printf("Enter the size of the star cross: ");
//     scanf("%d", &size);
//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size; j++) {
//             if (i == size / 2 || j == size / 2) {
//                 printf("* ");
//             } else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// return 0;
// }


//floyd's triangle
// #include<stdio.h>
// int main(){
// int n,a=1;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d",a);
//             a=a+1;  
//         }
       
//         printf("\n");
//         }
//     }



//0,1 triangle
//method-1
// #include<stdio.h>
// int main(){
//     int n,a;
//     scanf("%d",&n);
//     for (int i=0;i<=n;i++){
//         if(i%2!=0) a=1;
//         else a=0;
//         for (int j=0;j<=i;j++){
         
//             printf("%d",a);
//             if (a==0) a=1;
//             else a=0;
//         }
//         printf("\n");
//     }
// }

//method-2
// #include<stdio.h>
// int main(){
//     int n,a;
//     scanf("%d",&n);
//     for (int i=0;i<=n;i++){
       
//         for (int j=0;j<=i;j++){
//           if((i+j)%2==0) a=1;
//         else a=0;
//             printf("%d",a);
       
//         }
//         printf("\n");
//     }
// }


//printing star triangle mast
// #include<stdio.h>
// int main(){
//     int n;
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         printf(" "); }
//         for(int k=1;k<=i;k++)
//         {printf("*");}

// printf("\n");
// }
//}



//printing rhombus

// #include <stdio.h>

// int main() {
// int n;
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=((n*2)-i);j++){
//        if(j<=n-i){printf(" ");}
//        else{printf("*");}
//     }
//     printf("\n");
// }

//     return 0;
// }

//method-02
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         // Print spaces before the first 'x' in each row
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }

//         // Print 'x' characters
//         for (int j = 1; j <= n; j++) {
//             printf("x");
//         }

//         printf("\n");
//     }

//     return 0;
// }




//printing alphabet triangle mast
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         // Print spaces
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }

//         // Print characters
//         for (int k = 1; k <= i; k++) {
//             printf("%c", 'A' + k - 1);
//         }

//         printf("\n");
//     }

//     return 0;
// }



//StarPyramid
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of rows for the star pyramid: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         // Print spaces
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }

//         // Print stars
//         for (int k = 1; k <= 2 * i - 1; k++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }
