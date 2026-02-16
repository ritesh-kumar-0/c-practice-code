// Arrays as Function Argument 
#include<stdio.h>

void printNumber(int arr[], int n);  // Function declaration (prototype)

int main(){
    int arr[] = {1,2,3,4,5,6};  // Declare and initialize array
    printNumber(arr,6);   // Pass array and its size to function
    return 0;    // Return 0 means successful execution

}
// Function definition
void printNumber(int arr[], int n){
    for(int i=0; i<n; i++){      // Loop runs from index 0 to n-1
        printf("%d\t", arr[i]);
    }
    printf("\n");

}