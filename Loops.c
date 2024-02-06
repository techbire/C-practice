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