#include<stdio.h>
int main(){

int n;
printf("nhap n=");
scanf("%d",&n);
int arr[n];
printf("nhap mang :\n");
for(int i =0;i<n;i++){
	scanf("%d",&arr[i]);
	int m = i+1;
	for(int j =0;j<m-1;j++){
		for(int k=0;k<m-j-1;k++){
		
		if(arr[k]>arr[k+1]){
			int tmp = arr[k];
			arr[k] = arr[k+1];
			arr[k+1]=tmp;
		}
	}
}
}
}