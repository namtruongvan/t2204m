#include<stdio.h>
int main(){
	int n;
	printf(" nhap m :");
	scanf("%d",&n);
	int i = 1;
	int a = 0;
	while(i<n){
		if(n%i==0){
			a +=i;
			
		}
	    i++;
	}
	if(a==n){
		printf("%d la so hoan hao",n);
	}else{
		printf("%d khong phai so hoan hao",n);
		
	}
	return 0;
}
