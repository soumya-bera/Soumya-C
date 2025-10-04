#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter size of a array :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int min=INT_MAX;
    for(int i=0;i<=n-1;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    } printf("%d",min);
    return 0;
}