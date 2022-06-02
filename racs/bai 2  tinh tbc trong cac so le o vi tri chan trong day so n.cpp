#include<stdio.h>
int main(){
	int n ;
	printf(" nhap n =  ");
	scanf ( "%d", &n);
	int arr[n];// nhap gia tri cho mang
	printf(" nhap mang \n");
	for(int i = 0 ; i < n;i++){
		scanf("%d",&arr[i]);
		
	}
	// tinh tong cac so le vao luong so le
	
	int sum=0,dem=0;
	for(int i= 0;i<n;i++){ // xet ary[i] co phai so le hay khong 
	if(i%2==0){
	}else{
		if(arr[i]%2!=0){
		sum +=arr[i];
		dem++;;
	}}
		}printf(" tbc so le o vi tri chan la : %f", (float)sum/dem);
}
