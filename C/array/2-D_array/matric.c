#include<stdio.h>
int main(){
	int n;
	int m;
	int arr[n][m];
	int brr[n][m];
	printf("Enter number of rows of the first matrix :");
	scanf("%d",&n);
	printf("Enter number of columns of the first matrix :");
	scanf("%d",&m);
	printf("Enter the eliment of first matrix :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Enter number of rows of the second matrix :");
	scanf("%d",&n);
	printf("Enter number of columns of the second matrix :");
	scanf("%d",&m);
	printf("Enter the eliment of second matrix :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&brr[i][j]);
		}
	}
	int res[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			 res[i][j]=arr[i][j]-brr[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d",res[i][j]);
		}
	}
	
	return 0;
}