#include<stdio.h>
int main (){
	int x ;
	int arr[5];
	printf(" nhap x =  ");
	scanf("%d", &x) ;
	
/*	printf(" nhap mang : \n ");
	scanf("%d", &arr[0]); 
	scanf("%d", &arr[1]); 
	scanf("%d", &arr[2]); 
	scanf("%d", &arr[3]); 
	scanf("%d", &arr[4]);
	*/
	 printf(" nhap mang : \n");// cong thuc ket hop mang va vong lap
	 
	 for( int i = 0 ; i<5;i++){
	 	scanf("%d",&arr[i]);
	 
	 printf ("%d", arr[i]);
} 
}
