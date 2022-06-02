#include<stdio.h>
#include<string.h>

// nhap vao chuoi ki tu chuyen doi thanh chu  in hoa
int main(){
   
   char name[100];
   printf("nhap ten sinh vien :\n");
   scanf("%s",name);
   int nkt = strlen(name); //nkt = do dai cua chuoi
   for(int i =0 ;i<nkt;i++){
   	if(name[i]>=97 && name[i] <= 122 ){
   	 name[i] = name[i] - 32;
	   }
}
   printf("sau khi chuyen doi: %s\n ",name);
 }
