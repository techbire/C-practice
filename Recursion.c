//factorial
// #include<stdio.h>
// int factorial (int n){
// if(n==1 || n==0)
// return 1;
// return n*factorial(n-1);}

// int main(){
// int n;
// printf("Enter a number : ");
// scanf ("%d", &n) ;
// int fact = factorial(n);
// printf ("%d", fact);
// return 0;}

//------------------------------------------------------
//Print ‘n’ to ‘1’
// #include <stdio.h>


// void printNumbers(int n) {

//     if (n == 0)
//         return;
    

//     printf("%d\n", n);

//     printNumbers(n - 1);
// }

// int main() {
//     int n;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     printf("Numbers from %d to 1:\n", n);
//     printNumbers(n);

//     return 0;
// }
//------------------------------------------------------

// Print ‘1’ to ‘n’ (Extra Parameter)
// #include <stdio.h>


// void printNumbers(int n) {

//     if (n == 1) {
//         printf("1\n");
//         return;
//     }
    

//     printNumbers(n - 1);
    

//     printf("%d\n", n);
// }

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Numbers from 1 to %d:\n", n);
//     printNumbers(n);
//     return 0;
// }

//------------------------------------------------------
//Print the sum of ‘1’ to ‘n’ (Return Type)
//#include <stdio.h>

// int sumNumbers(int n) {
//     if (n == 1)
//         return 1; 
//     return n + sumNumbers(n - 1);
// }


// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int sum = sumNumbers(n);
//     printf("Sum of numbers from 1 to %d: %d\n", n, sum);
//     return 0;
// }

//------------------------------------------------------

//print nth Fibonacci Number
// #include <stdio.h>

// int fib(int n) {
//     if (n <= 1)
//         return n;
//     return fib(n - 1) + fib(n - 2);
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     printf("%d", fib(n));
//     getchar();
//     return 0;
// }

//------------------------------------------------------
//Golomb sequence
// #include <stdio.h>
// int findGolomb(int n) {
//     if (n == 1) 
//         return 1;
//     return 1 + findGolomb(n - findGolomb(findGolomb(n - 1)));
// }

// void printGolomb(int n) {
//     for (int i = 1; i <= n; i++) 
//         printf("%d ", findGolomb(i));
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     printGolomb(n);
//     return 0;
// }

//------------------------------------------------------
// a function named NthRoot which takes N and M as input parameters, recursively calculates the Nth root of M, and returns the integer. If the root is not an integer then return -1.
// #include <stdio.h>
// #include <math.h>

// double NthRoot(int n, int m, double x, double tol) {
//     double x_new = ((n - 1.0) * x + m / pow(x, n - 1)) / n;
//     if (fabs(x - x_new) < tol)
//         return x_new;
//     return NthRoot(n, m, x_new, tol);
// }

// int main() {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     double initialGuess = m;
//     double tolerance = 1e-6;
//     double root = NthRoot(n, m, initialGuess, tolerance);
//     if (fabs(round(root) - root) < tolerance) {
//         printf("%d\n", (int)round(root));
//     } else {
//         printf("-1");
//     }

//     return 0;
// }


