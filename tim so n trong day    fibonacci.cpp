#include<stdio.h>
int Fibonacci(int n )
   {
   	int a1=  1 , a2 = 1;
   	if(n == 1 || n ==2)
   	    return 1;
   	int i = 3 , a ;
   	while(i<=n)
   	
   {
   
   a = a1 + a2;
   a1 = a2 ;
   a2 = a;
   i++;
} return a;
}
int main()
{ int n;
printf("nhap n : ");
scanf(" %d",&n);
printf("so Fibonacci thu %d la : %d", n , Fibonacci(n));
return 1;

}
