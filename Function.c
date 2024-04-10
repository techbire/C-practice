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

//--------------------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------------------
    
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


//--------------------------------------------------------------------------------------------------------------

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


//--------------------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------------------
//pointer
//printing and updating
// #include <stdio.h>

// int main()
// {
// int *b; //pointer
// int a=5;
// b=&a;
// printf("%d %d %u %u %u %u",a,*b,&a,b,&*b,*&b);
//     *b=100;
//   printf("Updated *b: %d\n", *b);
//     }

//--------------------------------------------------------------------------------------------------------------



//find area of circle by pointers
// #include <stdio.h>

// int main()
// {
// double radius,area=0.0;
// double *pradius = &radius,*parea =&area;
// printf("enter the radius");
// scanf("%lf",pradius);
// *parea=3.14*(*pradius)*(*pradius);
// printf("\n the area of the radius of %.2lf=%.2lf",*pradius,*parea);

// }

//--------------------------------------------------------------------------------------------------------------
//factorial by pointer
// #include<stdio.h>

// int main() {
//     int n, fact = 1;
//     int *ptr = &fact; // Pointer to store the result

//     printf("Enter the number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         *ptr *= i; // Update the value stored at ptr with the factorial
//     }

//     printf("Factorial of %d is: %d\n", n, *ptr);

//     return 0;
// }



//printing ncr in right angled triangle 
//1st method 

// #include<stdio.h>
// int factorial(int x) {
//     int fact = 1;
//     for (int i = 2; i <= x; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// int main() {
//     int num;
//     printf("Enter the number of rows for Pascal's triangle: ");
//     scanf("%d", &num);
    
//     for (int i = 0; i < num; i++) {
//         for (int j = 0; j <= i; j++) {
//             printf("%d ", factorial(i) / (factorial(j) * factorial(i - j)));
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------

//2nd method without using factorial
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter n: ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         int first=1;
//         for(int j=0;j<=i;j++){
//             printf("%d ",first);
//             first=first*(i-j)/(j+1);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------

//printing ncr in pascal triangle 
// #include<stdio.h>
// int factorial(int x){
//     int fact=1;
//     for(int i=2;i<=x;i++){
//         fact=fact*i;}
//         return fact;}
        
        
//         int main(){
//             int num;
//             printf("enter the num");
//             scanf("%d",&num);
        
//             for(int i=0;i<num;i++){
//             for (int k = 0; k < num - i - 1; k++) {
//             printf("  ");
//         }
//             for(int j=0;j<=i;j++){
//                 int ncr=factorial(i)/(factorial(j)*factorial(i-j));
//             printf("%4d ",ncr);
//             }printf("\n");
//             } 
    
//             return 0;

// }

//--------------------------------------------------------------------------------------------------------------
    
// swapping a number
// #include <stdio.h>
// void swap(int *x,int *y){
// int temp;
// temp=*x;
// *x=*y;
// *y=temp;
// return;}
// int main(){
//     int a=9;
//     int b=2;
//     swap(&a,&b);
//     printf("%d\n",a);
//     printf("%d",b);
//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------
    
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

//--------------------------------------------------------------------------------------------------------------

    
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

//--------------------------------------------------------------------------------------------------------------
    
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


//--------------------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------------------

//print hcf
// #include <stdio.h>

// int min(int a, int b) {
//     if (a < b) {
//         return b;
//     } else {
//         return a;
//     }
// }

// int hcf(int a, int b) {
//     int hcf; // Declare hcf outside the loop for proper access

//     for (int i = min(a, b); i >= 1; i--) {
//         if (a % i == 0 && b % i == 0) {
//             hcf = i;
//             break;
//         }
//     }

//     return hcf;
// }

// int main() {
//     int a, b;
//     printf("Enter the value of a: ");
//     scanf("%d", &a);
//     printf("Enter the value of b: ");
//     scanf("%d", &b);

//     int highestCommonFactor = hcf(a, b);

//     printf("%d HCF is %d\n",highestCommonFactor);

//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------
//checking armstrong_number(LESS TIME COMPLEXITY)
// #include <stdio.h>

// void checkArmstrong(int n) {
//     int original = n, sum = 0;
//     while (n > 0) {
//         int digit = n % 10;
//         sum += digit * digit * digit;
//         n /= 10;
//     }
//     if (sum == original)
//         printf("%d is an Armstrong number.\n", original);
//     else
//         printf("%d is not an Armstrong number.\n", original);
// }

// int main() {
//     int number;
//     printf("Enter an integer: ");
//     scanf("%d", &number);
//     checkArmstrong(number);
//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------
//checking armstrong_number(MORE TIME COMPLEXITY)

// #include <stdio.h>

// int countDigits(int n) {
//     int count = 0;
//     while (n != 0) {
//         count++;
//         n /= 10;
//     }
//     return count;
// }

// void checkArmstrong(int n) {
//     int original = n, sum = 0;
//     int digits = countDigits(n);
//     while (n > 0) {
//         int digit = n % 10;
//         int power = 1;
//         for (int i = 0; i < digits; i++) {
//             power *= digit;
//         }
//         sum += power;
//         n /= 10;
//     }
//     if (sum == original)
//         printf("%d is an Armstrong number.\n", original);
//     else
//         printf("%d is not an Armstrong number.\n", original);
// }

// if sum!=original
//     while (n > 0) {
//         int digit = n % 10;
//         sum += digit * digit * digit;
//         n /= 10;
//     }


// int main() {
//     int number;
//     printf("Enter an integer: ");
//     scanf("%d", &number);
//     checkArmstrong(number);
//     return 0;
// }

// The first code snippet does not explicitly calculate the number of digits. It directly cubes each digit and adds them together.
// The second code snippet includes a separate function countDigits to determine the number of digits before calculating the Armstrong property.

