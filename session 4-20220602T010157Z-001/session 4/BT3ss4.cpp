#include<stdio.h>
int main(){
	int ary[5],x;
	printf("Nhap mang :\n");
	for(int i = 0 ; i<5 ; i++){
		scanf(" %d",&ary[i]);
	}
	printf("Nhap vao so x : ");
	scanf(" %d",&x);
	
	for(int i=0;i<5;i++){
			printf(" %d khong co trong mang ",x);
		if(x==ary[i]){
			printf(" %d co trong mang ",x);
			break;
		}
	
	}return 0 ;		
}

