#include<stdio.h>
int main(){
	 int ary[10];
	 int i, total , high;
	 for(i=0; i <10;i++)
	 {
	 	
	 
	 scanf(" %d", &ary[i]);
} 
// hien thi ket qua cao nhat trong so cac gia tri da nhap 
 high = ary[0];
 for( i = 1 ; i<10; i++) {
  if(ary[i]> high)
  high = ary[i];
  
 }
 
   printf ("\n so  lon nhat trong mang la  %d", high);
} 
// tim so lon thu nhi trong mang?
  int a = ary[0];// so thu nhi 
  for(a = 0 ; a < high ; a ++){
  	if(a<high)
  	a = ary[i];

  }
  printf(" \n so lon thu nhi la %d", a);
  }
