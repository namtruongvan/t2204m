#include<stdio.h>
#include<string.h>
int main(){
	char s1[100], s2[100];
	printf("Nhap s1:\n");
	scanf("%s", s1);
	
	printf("Nhap s2:\n");
	scanf("%s", s2);
	printf("Chuoi vua nhap s1: %s\n", s1);//hello
	printf("Chuoi vua nhap s2: %s\n", s2);//wold
	
	strcat(s1, s2);// s1+s2
	printf("Chuoi vua nhap s1: %s\n", s1);//hellowold
	printf("Chuoi vua nhap s2: %s\n", s2);//wold
	
	strcat(s2, s1);// s2+s1
	printf("Chuoi vua nhap s1: %s\n", s1);//hellowold
	printf("Chuoi vua nhap s2: %s\n", s2);//woldhellowold
	
	strcpy(s1, s2);// s1 = s2
	printf("Chuoi vua nhap s1: %s\n", s1);//woldhellowold
	printf("Chuoi vua nhap s2: %s\n", s2);//woldhellowold
	
	if(strcmp(s1,s2) == 0){
		printf("Hai chuoi giong nhau \n");
	}else{
		
		printf("Hai chuoi khong giong nhau \n");
	}
	
	int kt = strlen(s1);//15
	printf("So luong ky tu cua s1:%d\n", kt);
	
	printf("Ky tu 98 la: %c", 98);
}
