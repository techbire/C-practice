//printingArrays
// #include<stdio.h>
// int main(){
//     int arr[5];
//     for(int i=0;i<=4;i++){
//         printf("enter element number %d- ",i+1);
//         scanf("%d",&arr[i]);
      
//     }
//      printf("THE DATA IS : ");
//        for(int i=0;i<=4;i++){
       
//      printf("%d ",arr[i]); 
// }}


//Given array of marks, print marks less than 35
// #include<stdio.h>
// int main(){
//     int marks[10]={34,37,65,27,23,69,97,56,45,8};
//     for(int i=0;i<10;i++){
//         if (marks[i]<35){
//         printf("%d ",i);}
//     }
// return 0;
// }


//sum of given array
//#include <stdio.h>
// int main() {
//    int arr[5]={3,4,5,2,1}; 
//    int sum = 0;
//    for(int i=0; i<5; i++){ 
//        sum += arr[i];
//    }
//    printf("%d",sum);
//    return 0;
// }

//multiply of given array
// #include <stdio.h>

// int main() {
//    int arr[5]={3,4,5,2,7}; 
//    int mul = 1;
//    for(int i=0; i<5; i++){ 
//        mul *= arr[i];
//    }
//    printf("%d",mul);
//    return 0;
// }


//finding maximum element
// #include <stdio.h>

// int main() {
//    int arr[5]={3,4,5,2,5}; 
//    int max=arr[0];
//    for(int i=1; i<5; i++){ 
//        if(max<arr[i]){
//            max=arr[i];
//        } 
//    }
//    printf("%d",max);
//    return 0;
// }


//swapping number with arrays

// #include <stdio.h>

// void fun(int x[]){
//     int temp=x[0];
//     x[0]=x[1];
//     x[1]=temp;
//     return;
// }
// int main(){
//     int arr[]={2,3};
//     fun(arr);
//     printf("after swapping:%d,%d",arr[0],arr[1]);
//     return 0;
// }


//inserting an element into the array
// Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     int a[100], n, value, pos;

//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
    
//     printf("Enter the elements of the array: ");
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     printf("Enter the value to insert: ");
//     scanf("%d", &value);
    
//     printf("Enter the position to insert the value: ");
//     scanf("%d", &pos);

//     // Shift elements to the right to make space for the new value
//     for(int i = n - 1; i >= pos - 1; i--) {
//         a[i + 1] = a[i];
//     }

//     // Insert the value at the specified position
//     a[pos - 1] = value;


//     n++;

//     printf("Array after insertion: ");
//     for(int i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");

//     return 0;
// }
