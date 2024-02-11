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
#include<stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int product = 1;
    for (int i = 1; i <= n; i++) {
        product = product * i;
        printf("Factorial of %d is: %d\n", i, product);
    }
    return 0;
}
