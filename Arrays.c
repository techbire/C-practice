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

//------------------------------------------------------
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

//------------------------------------------------------
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
//------------------------------------------------------
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

//------------------------------------------------------
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

//------------------------------------------------------
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

//------------------------------------------------------
//Reversing the data
// #include <stdio.h>

// int main() {
//     int numbers[100]; // Assuming a maximum of 100 numbers
//     int count;

//     printf("Enter the number of elements: ");
//     scanf("%d", &count);

//     printf("Enter %d numbers: ", count);
//     for (int i = 0; i < count; i++) {
//         scanf("%d", &numbers[i]);
//     }

//     // Reversing the numbers
//     int temp;
//     for (int i = 0; i < count / 2; i++) {
//         temp = numbers[i];
//         numbers[i] = numbers[count - i - 1];
//         numbers[count - i - 1] = temp;
//     }
//     printf("Reversed numbers: ");
//     for (int i = 0; i < count; i++) {
//         printf("%d ", numbers[i]);
//     }
//     printf("\n");

//     return 0;
// }



//------------------------------------------------------
//inserting an element into the array

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
//------------------------------------------------------
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
//------------------------------------------------------
//sum/pairs finder
// #include<stdio.h>

// int main() {
//     int sum;
//     int x[] = {1, 2, 3, 4, 5, 6, 7};

//     printf("Give me a number: ");
//     scanf("%d", &sum);

//     printf("Pairs with sum %d are: ", sum);
//     for(int i = 0; i < 7; i++) {
//         for(int j = 0; j < 7; j++) {
//             if(x[i] + x[j] == sum) {
//                 printf("(%d,%d) ", x[i], x[j]);
//             }
//         }
//     }

//     return 0;
// }

//second highest number

// #include <stdio.h>
// #include<limits.h>

// int main() {
// int arr[7]={1,2,3,4,4,2,1};
// int max=INT_MIN;
// int smax=INT_MIN;
// for(int i=0;i<=6;i++){
//     if(max<arr[i]){
//         smax=max;
//         max=arr[i];
//     }
//     else if(smax<arr[i]){
//         smax=arr[i];
//     }
// }
// printf("%d",smax);
// }
//------------------------------------------------------

//reversing the array
// #include <stdio.h>

// int main() {
// int arr[7]={2,3,4,5,6,7,8};
// int brr[7];
// for(int i=0;i<7;i++){
//     brr[i]=arr[6-i];
// }
// for(int i=0;i<7;i++){
// printf("%d ",brr[i]);}
//     return 0;
// }

//------------------------------------------------------
//removing duplicates
// #include <stdio.h>
// #include <stdbool.h>

// int main() {
//     int arr[7] = {1,1,2,2, 3, 4, 5};

//     for (int i = 0; i < 7; i++) {
//         bool flag = false;
//         for (int j = 0; j < i; j++) {
//             if (arr[i] == arr[j]) {
//                 flag = true;
//                 break; 
//             }
//         }
//         if (!flag) {
//             printf("%d ", arr[i]);
//         }
//     }
//     return 0;
// }
//------------------------------------------------------
//print only unique element
// #include<stdio.h>

// int main() {
//     int size;
//     scanf("%d", &size);
//     int arr[size];

//     for(int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Unique elements: ");
//     for(int i = 0; i < size; i++) {
//         for(int x = i+1; x < size; x++) {
//             if (arr[i] != arr[x]) {
//                 printf("%d ", arr[i]);
//                 break;
//             }
            
//         }
//     }

//     return 0;
// }
//------------------------------------------------------
// sum of left diagonal

// #include <stdio.h>

// int main() {
//     int sum = 0, m, n, i;
//     printf("Enter the number of rows: ");
//     scanf("%d", &m);
//     printf("Enter the number of columns: ");
//     scanf("%d", &n);

//     int a[m][n];

//     printf("Enter the elements of the array:\n");
//     for (i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for (i = 0; i < m; i++) {
//         sum += a[i][i];
//     }

//     printf("Sum of the left diagonal: %d\n", sum);

//     return 0;
// }

//------------------------------------------------------
// sum of right diagonal

// #include <stdio.h>

// int main() {
//     int sum = 0, m, n, i;
//     printf("Enter the number of rows: ");
//     scanf("%d", &m);
//     printf("Enter the number of columns: ");
//     scanf("%d", &n);

//     int a[m][n];

//     printf("Enter the elements of the array:\n");
//     for (i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &a[i][n-1-i]);
//         }
//     }

//     for (i = 0; i < m; i++) {
//         sum += a[i][n-1-i];
//     }

//     printf("Sum of the right diagonal: %d\n", sum);

//     return 0;
// }



//------------------------------------------------------
//insertion at second place
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int cards[10];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &cards[i]);
//     }

//     int insertValue;
//     scanf("%d", &insertValue);

//     // Shift elements to the right to make space for the new card
//     for (int i = n - 1; i >= 1; i--) {
//         cards[i + 1] = cards[i];
//     }

//     // Insert the new card at the second position
//     cards[1] = insertValue;

//     // Print the updated collection of cards
//     for (int i = 0; i < n + 1; i++) {
//         printf("%d ", cards[i]);
//     }

//     return 0;
// }



// ------------------------------------------------------
//deletion from first place
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int arr[10];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Shift elements to the left to remove the first element
//     for (int i = 0; i < n - 1; i++) {
//         arr[i] = arr[i + 1];
//     }

//     // Print the modified array
//     for (int i = 0; i < n - 1; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


// ------------------------------------------------------
// calculateAbsoluteDeviation
      
// #include <stdio.h>
// int main() {
//     int n;
//     float avg;
//     float sum = 0;
//     scanf("%d", &n);
//     float arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%f", &arr[i]);
//         sum += arr[i];
//     }

//     avg = sum / n;
//     for (int i = 0; i < n; i++) {
//         arr[i] -= avg; // Calculate deviation from average
//     }

//     for (int i = 0; i < n; i++) {
//      if(arr[i]<0){arr[i]=-1*arr[i];}
//         printf("%.2f ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


//------------------------------------------------------
// calculate avg number to smallest number
// #include <stdio.h>

// int main() {
//     int SIZE;
//     printf("Enter the size of the array: ");
//     scanf("%d", &SIZE);

//     int arr[SIZE];
//     int i;
//     float sum = 0;
//     int smallest_index = 0;

//     // Input elements into the array
//     printf("Enter %d numbers:\n", SIZE);
//     for (i = 0; i < SIZE; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//         if (arr[i] < arr[smallest_index]) {
//             smallest_index = i;
//         }
//     }

//     // Calculate average
//     float avg = sum / SIZE;

//     // Add average to the smallest number
//     arr[smallest_index] += avg;

//     // Output the updated array
//     printf("Array after adding average to the smallest number:\n");
//     for (i = 0; i < SIZE; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

//------------------------------------------------------
//deletion from last place
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int positions[10];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &positions[i]);
//     }

//     // Eliminate the last by reducing the size of the array
//     n--; // ye kar skte ho

//     // Print the modified positions of players
//     for (int i = 0; i < n; i++) {    // ya phir n k jagah pe n-1 pe kar skte ho place ek delete hi toh karna hai!
//         printf("%d ", positions[i]);
//     }

//     return 0;
// }


//------------------------------------------------------
//searching 
//linear searching
// #include <stdio.h>

// int main() {
//     int arr[100], size, i, key;

//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     printf("Enter the elements of the array:\n");
//     for (i = 0; i < size; i++)
//         scanf("%d", &arr[i]);

//     printf("Enter the element to search: ");
//     scanf("%d", &key);

//     // Linear search algorithm
//     for (i = 0; i < size; i++) {
//         if (arr[i] == key) {
//             printf("Element %d found at index %d\n", key, i);
//             return 0;
//         }
//     }

//     // If the key is not present in the array
//     printf("Element %d not found in the array\n", key);
//     return 0;
// }


//binary searching
// #include <stdio.h>

// int main() {
//     int n;
//     int arr[100];

//     printf("Enter the size of array: ");
//     scanf("%d", &n);
      
//     printf("Enter the elements of the sorted array:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int key;
//     scanf("%d", &key);

//     //main algo
//     int first = 0;
//     int last = n - 1;

//     while (first <= last) {
//         int mid = (first + last) / 2;
//         if (arr[mid] == key) {
//             printf("Element found at index %d\n", mid);
//             return 0;
//         } else if (arr[mid] < key) {
//             first = mid + 1;
//         } else {
//             last = mid - 1;
//         }
//     }

//     printf("Element not found\n");
//     return 1;
// }

