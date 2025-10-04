#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of a array :");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(arr[j]==n-1){
    for(int i=n-1;i<2*n-1;i++){
        brr[i]=arr[n-1-i];
    }
}
    }
    for(int i=0;i<=n-1;i++){
        printf("%d ",brr[i]);
    } 
    return 0;
}