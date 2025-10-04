#include<stdio.h>
#include<limits.h>
int main(){
int n;
printf("Enter the size of a array :");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int max=INT_MIN;
int smax=INT_MIN;
for(int i=0;i<=n-1;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
for(int i=0;i<=n-1;i++){
    if(arr[i]!=max && arr[i]>smax){
        smax=arr[i];
    }
}
printf("The 2nd largest number is :%d",smax);
    return 0;
}