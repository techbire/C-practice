//print 1 to 20
// #include<stdio.h>
// int main(){
// int i;
// for(i=1;i<=10;i++){
//      printf("%d",i);
//      printf(".hello\n");

// }

// }


//print even number till 20
// #include<stdio.h>
// int main(){
// int i;
// for(i=2;i<=20;i=i+2){
//      printf("%d \n",i);
// }


// }

//print the odd number till nth term
// #include<stdio.h>
// int main(){
// int n;
// printf("enter the nth term for odd number");
// scanf("%d",&n);
// int i;
// for(i=1;i<=2*n-1;i=i+2){
//      printf("%d \n",i);
// }

// }




//print the gp starting with 3,12,48....till nth term
// #include<stdio.h>
// int main(){
// int n;
// printf("enter the nth term");
// scanf("%d",&n);
// int i;
// int a=3;
// for(int i=1;i<=n;i++)
// {printf("%d ",i);
// a=a*4;}
// }



//print the 100,97,93...0

// #include<stdio.h>

// int main() {
//     int a = 100;
//     for (int i = 1;a>0; i++) {
//         printf("%d ", a);
//         a = a - 3;
//     }
//  return 0;
// }



// prime checker
// #include<stdio.h>
// int main(){
// int n;
// printf("enter a number");
// scanf("%d",&n);
// int a=0;
// for(int i=2;i<n-1;i++){
// if(n%i==0){
// a=1;
// break;
// }}
// if (n==1) printf("1 is neither prime nor composite");
// else if (a==0) printf("the given number is prime");
// else printf("the given number is composite");
// return 0;}



//writing odd no. till 100 with continue
// #include<stdio.h>
// int main(){
//     for (int i=1;i<=100;i++){
//         if(i%2==0)
//         {
//             continue;
//         }
//         printf("%d ",i);
    
// }}

//count the number
// #include<stdio.h>
// int main(){
//     int n;
// printf("enter a number\n");
// scanf("%d",&n);
// int c=0;
// while(n!=0){
//     n=n/10;
//     c++;
// }

// printf("%d",c);

// }


//sumation of a number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     int sum=0;
//     int lastdigit=0;
//     while(n!=0){
//         lastdigit=n%10;
//         sum=sum+lastdigit;
//         n=n/10;
//     }
//     printf("the sumation of number is: %d",sum);
// }


//sumation of a number but only even number
// #include<stdio.h>

// int main() {
//     int n;
//     printf("enter a number: ");
//     scanf("%d", &n);

//     int sum = 0;
//     int lastdigit = 0;

//     while (n != 0) {
//         lastdigit = n % 10;
//         if (lastdigit % 2 == 0) {
//             sum = sum + lastdigit;
//         }
//         n = n / 10;
//     }

//     printf("Sum of even digits: %d\n", sum);

//     return 0;
// }



//reversing a number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number");
//     scanf("%d",&n);
//     int lastdigit=0;
//     int reversedNumber=0;
//     while(n>0){
// lastdigit=n%10;
// reversedNumber=reversedNumber*10+lastdigit;
// n=n/10;}
//   printf("Reversed number: %d\n", reversedNumber);
  
// }



//sum of the till given number
// #include<stdio.h>
// int main(){
// int n;
// printf("enter a number\n");
// scanf("%d",&n);
// int sum=0;
// for(int i=1;i<=n;i++){
//     sum=sum+i;
// }
// printf("the sum of the till given number: %d",sum);

// }

//Print sum of series - 1+2-3+4-5+6.. upto ‘n’ terms
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the n number: \n");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=1;i<=n;i++){    
//         if(i%2==0) sum=sum+i;
//         else sum=sum-i;
      
//         }
//         printf("sum: %d",sum);

// }

//factorial of the given number
// #include<stdio.h>
// int main(){
//     int n;
//     printf("");
//     scanf("%d",&n);
//     int product=1;
//     for(int i=1;i<=n;i++){
//     product=product*i;
//     }
// printf("%d",product);
// }



//finding factorial till given number
// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int product = 1;
//     for (int i = 1; i <= n; i++) {
//         product = product * i;
//         printf("Factorial of %d is: %d\n", i, product);
//     }
//     return 0;
// }


//fibonacci number
// #include<stdio.h>
// int main(){
// int n;
// printf("enter a number\n");
// scanf("%d",&n);
// int a=1,b=1;
// int sum;
// for(int i=3;i<=n;i++){
// sum=a+b;
// a=b;
// b=sum;
// }
// printf("%d",sum);

// }

//raising a power of the number both via input
// #include<stdio.h>
// #include<math.h>
// int main(){
// int a,b;
// printf("enter a  number: ");
// scanf("%d",&a);
// printf("enter a number to raise power in that no.: ");
// scanf("%d",&b);
// int result=pow(a,b);
// printf("result:%d ",result);

// }

//checking armstrong number
// #include<stdio.h>
// int main(){
//     int number,count=0,rem,result=0,mul=1,cnt;   
//     printf("enter a number: ");
//     scanf("%d",&number);
//     int q=number;
//     while(q!=0)          //{ 371/10=37,count=1    37/10=3,count=2    3/10=0,count=3 }
//     {
//         q=q/10;
//         count++;
//     }
//     cnt=count;
//     q=number;
//     while(q!=0)
//     {
//         rem=q%10;  //{ 371%10=7,mul=1,result=1      37%10=7,mul=7*7*7=343,result=1+343=344      3%10=3,mul=3*3*3=27,result=344+27=371 }
//         while(cnt!=0)
//         {
//             mul=mul*rem;
//             cnt--;
//         }
//         result=result+mul;
//         cnt=count;
//         q=q/10;
//         mul=1;
//     }
//     if(result==number)
//     printf("%d is an Armstrong nummber",number);
//     else
//     printf("%d is not an Armstrong number",number);
//     return 0;
// }









///important question for logic building


//number to binary 
// Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     int n, i = 1, binary = 0, rem;

//     printf("Enter a decimal number: ");
//     scanf("%d", &n);

//     while (n != 0) {
//         rem = n % 2;
//         binary = binary + rem * i;
//         n = n / 2;
//         i = i * 10;
//     }

//     printf("The binary representation is: %d\n", binary);

//     return 0;
// }




//perfect number
// #include <stdio.h>

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     int foundPerfect = 0; // Flag to check if any perfect numbers are found

//     for (int i = a; i <= b; i++) {
//         int sum = 1; // Initialize sum to 1 as 1 is always a divisor

//         // Check for divisors up to the square root of the number
//         for (int j = 2; j * j <= i; j++) {
//             if (i % j == 0) {
//                 sum += j;
//                 if (j != i / j) {
//                     sum += i / j;
//                 }
//             }
//         }

//         // Check if the current number is a perfect number
//         if (sum == i) {
//             printf("%d ", i);
//             foundPerfect = 1; // Set the flag as a perfect number is found
//         }
//     }

//     // If no perfect numbers are found, print "No perfect numbers"
//     if (!foundPerfect) {
//         printf("No perfect numbers");
//     }

//     return 0;
// }



// #include<stdio.h>
// int main)f
// int a,b,n,x,y;
// scanf ("%d %d"
// , &a, &b);
// for (int i;t›a;i<b){
// x-a%i;
// y= b%i;
// if (x=0 & y==0){
// printf("%d",&ti;
// }
// } 



// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter the number: ");
//     scanf("%d", &number);

//     int sum = 0;
//     for (int i = 1; i < number; i++) {
//         if (number % i == 0) {
//             sum += i;
//         }
//     }

//     if (sum == number) {
//         printf("%d is a perfect number\n", number);
//     } else {
//         printf("%d is not a perfect number\n", number);
//     }

//     return 0;
// }

//sub number even and odd place
#include<stdio.h>

int main() {
    int number, digit, position = 1, sum_even = 0, sum_odd = 0;

    printf("Enter a sequence of digits: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;

        if (position % 2 == 0) {
            // Even position
            sum_even += digit;
        } else {
            // Odd position
            sum_odd += digit;
        }

        number /= 10;
        position++;
    }

    int result = sum_even - sum_odd;
    if (result < 0) {
        result = -result; // Calculate absolute difference
    }

    printf("Output: %d\n", result);

    return 0;
}
