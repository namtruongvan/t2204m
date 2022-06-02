#include<stdio.h>
int main (){
	
    for(int i=1;i<=20;i++){
		printf("----------\n");
		printf("before continue i = %d\n",i);
		
		 if(i==5){
		 continue;	
		 }
	printf("after continue i = %d\n",i);
	}
}
