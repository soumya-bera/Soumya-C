#include<stdio.h>
int main(){
    int a,b,c,d;
    int arr[a][b];
    int brr[c][d];
    int x,y;
    printf("Enter the row size of the 1st matrix :");
    scanf("%d",&a);
    printf("Enter the column size of the 1st matrix :");
    scanf("%d",&b);
    printf("\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("Enter the row size of the 2nd matrix :");
    scanf("%d",&c);
    printf("Enter the row size of the 2nd matrix :");
    scanf("%d",&d);
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    int add[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            add[x][y]=arr[i][j]+brr[i][j];
        }
    }
        printf("\n");
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                printf("%d",add[i][j]);
            }
            printf("\n");
        }
    
    return 0;
}