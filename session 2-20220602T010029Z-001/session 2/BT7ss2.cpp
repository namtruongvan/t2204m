#include<stdio.h>
int main(){
	float n;
	printf(" nhap n:");
	scanf("%f",&n);
	float i = 1;
	float S = 0;
	while(i<=n){
		S = S + 1/i;
		i++;
		
	}
	printf(" S = %f",S);
	return 0;
}
