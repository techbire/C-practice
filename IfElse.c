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



//switch cases
// #include<stdio.h>
// int main(){
// int  n;
//     printf("enter the year");
//     scanf("%d",&n);
//     switch(ch){case'a':case'A':case'e':case'E':case'i':case'I':case'o':case'O':case'u':case'U':printf("this is vowel");break;
//     default:printf("invalid");}
// }





// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the year: ");
//     scanf("%d", &n);

//     switch ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
//         case 1:
//             printf("%d is a leap year", n);
//             break;
//         default:
//             printf("%d is not a leap year", n);
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int a, b;
//     char ch;
//     scanf("%d %d %c", &a, &b, &ch);
    
//     switch(ch) {
//         case '+':
//             printf("%d", a + b);
//             break;
//         case '-':
//             printf("%d", a - b);
//             break;
//         case '*':
//             printf("%d", a * b);
//             break;
//         default:
//             printf("\nINVALID");
//             break;
//     }
    
//     return 0;
// }




// #include <stdio.h>

// int main() {
//     float a, b, c, d;
//     printf("Enter four angles of a quadrilateral (separated by spaces): ");
//     scanf("%f %f %f %f", &a, &b, &c, &d);

//     int sum = (int)(a + b + c + d);  // Convert the sum to an integer

//     switch (sum) {
//         case 360:
//             printf("It is a quadrilateral\n");
//             break;
//         default:
//             printf("This is not a quadrilateral\n");
//             break;
//     }

//     return 0;
// }




// #include <stdio.h>

// int main() {
//     int res = 25, city = 35, high = 55;
//     int roadtype;
//     int speed;

//     printf("Enter road type (1, 2, or 3): ");
//     scanf("%d", &roadtype);

//     printf("Enter speed: ");
//     scanf("%d", &speed);

//     switch (roadtype) {
//     case 1:
//         if (speed < res) {
//             printf("below");
//         } else if (speed == res) {
//             printf("normal");
//         } else {
//             printf("above");
//         }
//         break;

//     case 2:
//         if (speed < city) {
//             printf("below");
//         } else if (speed == city) {
//             printf("normal");
//         } else {
//             printf("above");
//         }
//         break;

//     case 3:
//         if (speed < high) {
//             printf("below");
//         } else if (speed == high) {
//             printf("normal");
//         } else {
//             printf("above");
//         }
//         break;

//     default:
//         printf("Invalid road type");
//         break;
//     }

//     return 0;
// }
