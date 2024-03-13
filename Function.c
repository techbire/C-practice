//adding two number


// METHOD-1 Function Declaration and Definition:
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




// METHOD-2 Function Declaration and Definition with Return:
// #include <stdio.h>

// int add(int, int);

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     int s = add(a, b);
//     printf("%d", s);
// }

// int add(int a, int b) {
//     return a + b;
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
// #include <stdio.h>

// Function to calculate the factorial of a number
// unsigned long long factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }




// // Function to calculate nCr
// unsigned long long nCr(int n, int r) {
//     if (n < r) {
//         return 0;  // Invalid input, n should be greater than or equal to r
//     }

//     return factorial(n) / (factorial(r) * factorial(n - r));
// }

// int main() {
//     int n, r;

//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     printf("Enter the value of r: ");
//     scanf("%d", &r);

//     // Calculate and print nCr
//     printf("%dC%d = %llu\n", n, r, nCr(n, r));

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



//neon number
// #include <stdio.h>

// void square(int x);

// int main() {
//     int x, sum = 0, y;
//     printf("Enter a number: ");
//     scanf("%d", &x);
    
//     while(x > 0) {
//         y = x % 10;
//         sum += y;
//         x = x / 10;
//     }
    
//     printf("Sum of digits: %d\n", sum);
//     square(sum);
    
//     return 0;
// }

// void square(int x) {
//     int sq = x * x;
//     printf("Squared Value of sum: %d\n", sq);
    
//     if (x == sq) {
//         printf("%d is a Neon number.\n", x);
//     } else {
//         printf("%d is not a Neon number.\n", x);
//     }
// }
