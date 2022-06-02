#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int uoc = 0;
	for(int i= 2; i< n-1;i++){
		if(n%i==0){
			uoc ++;
		}
	}
	if(uoc == 0){
		printf(" la so nguyen to",n);
	}else{
		printf(" khong la so nguyen to",n);
	}
	return 0;
}
