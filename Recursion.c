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


//Print the sum of ‘1’ to ‘n’ (Return Type)
//#include <stdio.h>

int sumNumbers(int n) {
    if (n == 1)
        return 1; 
    return n + sumNumbers(n - 1);
}


int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = sumNumbers(n);
    printf("Sum of numbers from 1 to %d: %d\n", n, sum);
    return 0;
}

