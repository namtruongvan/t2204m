#include<stdio.h>
int main(){
    int n;// input n
    printf("nhap n=");
    scanf("%d",&n);
    if(n<2){
    	printf("%d khong phai so nguyen to ",n);
    	
    	
	}else{
		int ut3 = 0;
		for(int i=2;i<=n/2;i++){
			if(n%i==0){
				ut3++;
				printf("%d khong phai la so nguyen to",n);
				break;
				
			}
		}
		if(ut3 == 0){
			printf ("%d la so nguyen to ", n);
			
		}
	}
