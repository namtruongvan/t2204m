#include<stdio.h>
int main(){
	int n;// tim ra mang
	printf(" nhap n = ");
	scanf ( " %d", &n);
	int arr[n];
	// nhap gia tri cho mang 
	printf(" nhap mang ; \n");
	for(int i = 0 ; i<n;i++){
		scanf("%d", &arr[i]);
	}
	// tinh tong cac so le va so luong so le 
	int sum = 0 , dem = 0;
	for(int i = 0 ; i<n ; i++){
			// xet xem arr[i] co phai so le hay khong
			if(arr[i] %2 !=0){
				sum += arr[i];
				dem++;
				
				
			}
	}
printf(" trung binh cong : %f",(float)sum/dem);

}


