#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    int arr[n];
    int brr[n];

    // Taking input
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Reversing the array
    for(int i = 0; i < n; i++){
        brr[i] = arr[n - 1 - i];
    }

    // Printing reversed array
    for(int i = 0; i < n; i++){
        printf("%d ", brr[i]);
    }

    return 0;
}