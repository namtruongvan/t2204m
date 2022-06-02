#include<stdio.h>
int main(){
	for(int a = 1;a<=5;a++){
		if(a==2 || a == 4){
			for(int b = 1;b<=4;b++){
				printf("*");
			}
		}else{
			for(int b =1 ; b<=5;b++){
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
