#include<stdio.h>
#include<string.h>
int main(){
char s1[1000],s2[1000];
 //	// khai bao xau str, xau str luu tru duoc 99 phan tu 
//    char str[100];
//	//nhap du lieu vao xau str
//	scanf("%s",str);
//	// hien thi xau str ra man hinh
//	printf("%s", str);
//	return 0;
printf("nhap s1:"); 
scanf("%s",s1);
printf("nhap s2 :");
scanf("%s",s2);

 printf("chuoi vua nhap s1 : %s\n",s1);
  printf("chuoi vua nhap s2 : %s\n",s2);
  
    strcat(s1,s2);// s1 =s1 +s2;
  printf("chuoi vua nhap s1 : %s\n",s1);
  printf("chuoi vua nhap s2 : %s\n",s2);
  
  
   if(strcmp(s2,s2)==0){
   	printf("hai chuoi  giong nhau \n");
   }else{
   	printf("hai chuoi khong giong nhau \n");
   }
}
