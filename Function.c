//adding two number

// METHOD-1 Function Declaration and Definition with Return:
// #include <stdio.h>

// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     int s = add(a, b);
//     printf("%d", s);
// }



// METHOD-2 Function Declaration and Definition:
// #include <stdio.h>

// void add(int, int);

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     add(a, b);
// }

// void add(int a, int b) {
//     int s;
//     s = a + b;
//     printf("%d", s);
// }


// METHOD-3 Function Declaration and Definition without Parameters:
// #include <stdio.h>

// void add();

// int main() {
//     add();
// }

// void add() {
//     int a, b, s;
//     scanf("%d %d", &a, &b);
//     s = a + b;
//     printf("%d", s);
// }





//factorial
// #include <stdio.h>

// void fact(int);

// int main() {
//     int a;
//     scanf("%d", &a);
//     fact(a);
//     return 0;
// }

// void fact(int a) {
//     int product = 1;
//     for (int i = 1; i <= a; i++) {
//         product = product * i;
//     }
//     printf("%d", product);
// }





//printing nCr
// #include<stdio.h>
// int factorial(int x){
//     int fact=1;
//     for(int i=2;i<=x;i++){
//         fact=fact*i;
//     }
//     return fact;
// }

// int main(){
//     int n,r;
//     scanf("%d %d",&n,&r);
//     int ncr=factorial(n)/(factorial(r)*factorial(n-r));
//     printf("%d",ncr);
//     return 0;
// }

// swapping a number
// #include <stdio.h>
// void swap(int x,int y);
// int main() {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     printf("Value before swap x=%d\t y=%d\n",x,y);
//     swap(x,y);
//     printf("Value after swap x=%d\t y=%d\n",x,y);
// }
// void swap(int x,int y){
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
//     printf("Value of X / Y is %d / %d\n",x,y);
// }


//checking neon number (sum of its digit=sq of number)
// #include <stdio.h>
// void ansh(int x);
// int main() {
//     int x,sum=0,y;
//     printf("enter a number");
//     scanf("%d",&x);
//     while(x>0){
//     y=x%10;
//     sum+=y;
//     x=x/10;
//     }
//        ansh(sum); // Call to the function ansh
//     return 0;
// }
// void ansh(int x){
//     int sq;
//     sq=x*x;

// if(x==sq){printf("this is neon number");}
// else{printf("this is not neon number");}
// }


//cubing the number
// #include<stdio.h>
// void cube(int *n);
// int main(){
//     int a;
 
//     printf("enter a number: ");
//        scanf("%d",&a);
//     cube(&a);
//     printf("the cube of number is: %d\n",a);
// }
// void cube(int *n){
//     *n=(*n) * (*n) * (*n);
// }


//printing nPr
// #include <stdio.h>

// // Function to calculate factorial
// int factorial(int n) {
//     if (n == 0)
//         return 1;
//     else
//         return n * factorial(n - 1);
// }

// Function to calculate nPr
// int nPr(int n, int r) {
//     return factorial(n) / factorial(n - r);
// }

// int main() {
//     int n, r;
    
//     // Input values of n and r
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     printf("Enter the value of r: ");
//     scanf("%d", &r);
    
//     // Check if n is greater than or equal to r
//     if (n >= r) {
//         // Calculate and print nPr
//         printf("%dP%d = %d\n", n, r, nPr(n, r));
//     } else {
//         printf("Error: n should be greater than or equal to r.\n");
//     }
    
//     return 0;
// }




//pascal triangle without explicit pascal triangle
// #include <stdio.h>

// // Function to calculate factorial
// unsigned long long factorial(int n) {
//     unsigned long long fact = 1;
//     for (int i = 1; i <= n; ++i) {
//         fact *= i;
//     }
//     return fact;
// }

// int main() {
//     int rows;

//     // Input number of rows for Pascal's triangle
//     printf("Enter the number of rows for Pascal's triangle: ");
//     scanf("%d", &rows);

//     // Printing Pascal's triangle
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j <= i; j++) {
//             printf("%llu ", factorial(i) / (factorial(j) * factorial(i - j)));
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int factorial(int n) {
//     if (n == 0) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// int binomialCoefficient(int n, int k) {
//     return factorial(n) / (factorial(k) * factorial(n - k));
// }

// void printPascalsTriangle(int numRows) {
//     for (int i = 0; i < numRows; i++) {
//         for (int j = 0; j <= i; j++) {
//             printf("%d ", binomialCoefficient(i, j));
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int numRows;

//     printf("Enter the number of rows for Pascal's Triangle: ");
//     scanf("%d", &numRows);

//     printPascalsTriangle(numRows);

//     return 0;
// }


//print the prime factors of a given number
// #include <stdio.h>

// void printPrimeFactors(int n) {
//     // Print the number of 2s that divide n
//     while (n % 2 == 0) {
//         printf("%d ", 2);
//         n = n / 2;
//     }
    
//     // n must be odd at this point. So we can skip one element (i = i + 2)
//     for (int i = 3; i * i <= n; i = i + 2) {
//         // While i divides n, print i and divide n
//         while (n % i == 0) {
//             printf("%d ", i);
//             n = n / i;
//         }
//     }
    
//     // If n is a prime number greater than 2
//     if (n > 2)
//         printf("%d ", n);
// }

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
    
//     printf("Prime factors of %d are: ", n);
//     printPrimeFactors(n);
    
//     return 0;
// }




// to write a function to find the HCF of 2 given numbers without any comments
// #include <stdio.h>

// int findHCF(int num1, int num2) {
//     while (num1 != num2) {
//         if (num1 > num2)
//             num1 -= num2;
//         else
//             num2 -= num1;
//     }
//     return num1;
// }

// int main() {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
//     printf("HCF of %d and %d is %d\n", num1, num2, findHCF(num1, num2));
//     return 0;
// }

