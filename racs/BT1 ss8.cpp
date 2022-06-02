#include<stdio.h>
#include<string.h>
int main(){
	char s1[100], s2[100];
	printf("nhap chuoi s1 :\n");
	scanf("%s",s1);
	
	printf("nhap chuoi s2 : \n");
	scanf("%s",s2);
	int kt = strlen(s1);
	printf("So luong ky tu cua s1:%d\n", kt);
	
	int kt2 = strlen(s2);
	printf("so luong ky tu cua s2 :%d \n", kt2);
	if(kt > kt2){
		printf(" chuoi s1  lon nhat ");
		
	}else if( kt2 > kt){
		printf(" chuoi s2 lon nhat");
		
	}else{
		printf(" ca 2 chuoi co so nguyen tu bang nhau ");
	}return 0;
}
