#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu cua mang : ");
	scanf("%d",&n);
	int ary[n];
	printf("Nhap cac phan tu cua mang : \n");
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
		
	}
	int x,y,dem=0;
	printf("Nhap vao so x de kiem tra : ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(ary[i]==x){
			y=i;
			dem=1;
			break;
		}
		else{
			dem=0;
		}
	}
	if(dem==0){
		printf("Phan tu %d khong co trong mang .",x);
	}
	else{
	if(y==(float)(n-1)/2){
		printf("Khoang cach tu %d va %d den %d xa nhat ,",ary[0],ary[n-1],x);
	}
	if(y>(float)(n-1)/2){
		printf("Khoang cach tu %d den %d xa nhat .",ary[0],x);
	}
	if(y<(float)(n-1)/2){
		printf("Khoang cach tu %d den %d xa nhat .",ary[n-1],x);
	}
	}	return 0;
}
