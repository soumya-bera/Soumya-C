#include<stdio.h>
void reverse (int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
    }
}
int main(){
    int n;
    printf("Enter the size of an array :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,n); 
    printf("The reverse of the array :");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}