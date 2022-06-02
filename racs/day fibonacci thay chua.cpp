#include<stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d'",&n);
	 int x1 = 0 , x2 = 1 ,x3 = 1;
	 
	 if(n<=0)
	 { printf( " so can tim : 0 ");
	 
} else if (n == 1 || n ==2){ 
   printf(" so can tim : 1");
}else{ 
int i = 3; 
while(i<=n){ 
 x1 = x2 ;
 x2 = x3 ;
 x3 = x1 + x2 ;
 i++;
 
}
printf (" so can tim : %d", x3);
}
}
