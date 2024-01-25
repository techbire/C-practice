// hello world
//  #include <stdio.h>
//  int main() {
//     // printf() displays the string inside quotation
//     printf("Hello, World!");
//     return 0;
//  }



// float to int (factional part)
//  #include<stdio.h>
//  int  main(){
//       float x;
//       scanf("%f",&x);
//       int y;
//       y=(int)x;
//       printf("%d",y);
//  }



// checking number even or odd
//  #include<stdio.h>
//  int main(){
//       int x;
//       scanf("%d",&x);
//       if(x%2==0){
//          printf("even")  ;
//       }

//      else{
//           printf("odd");
// }
// }





// postive number making
//  #include<stdio.h>
//  int main(){
//       int x;
//       printf("enter a number");
//       scanf("%d",&x);
//       if (x<0){
//            x=x*(-1);
//            printf("%d",x);
//       }
//       else{
//            printf("%d",x);
//            }
//       }




// profit and loss
//  #include<stdio.h>
//  int main()
//  {
//  int cp;
//  printf("enter the cost price");
//  scanf("%d",&cp);
//  int sp;
//  printf("enter the sell price");
//  scanf("%d",&sp);
//  if (sp>cp){printf("profit bana h mere bhai");}
//  else{printf("leh bete kara diya n loss");}

// }



//greater finder
// #include<stdio.h>
// int main(){
// int a,b,c;
// printf("enter first number");scanf("%d",&a);
// printf("enter second number");scanf("%d",&b);
// printf("enter third number");scanf("%d",&c);
// if (a>b){
//      if (a>c){printf("a is greater");}
//      else{printf("c is greater");}
// }
// if (b>a){
//      if (b>c){
//      printf("b is greater");}
//      else{printf("c is grearter");}

// }}



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

#include<stdio.h>

int main() {
    int a = 100;
    for (int i = 1;a>0; i++) {
        printf("%d ", a);
        a = a - 3;
    }
 return 0;
}
