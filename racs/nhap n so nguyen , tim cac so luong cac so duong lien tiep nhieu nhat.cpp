#include<stdio.h>
int main(){
	int n;
	do{
		printf("nhap n");
		scanf("%d", &n);
	}while(n<=0);
		int arr[n];
	    printf(" nhoa mang :");
		for(int i = 0;i<n;i++){
	    	scanf("%d", &arr[i]);
		}
		int count = 0, max = 0, i =0;
		while(i<n){
			if(arr[i]>0);
			   count++;
			if(count>max){
				max = count;
			}else{
			
			}
		}else{
			count = 0;
		}
		i++;
	}
    printf(" so luong lien tiep : %d", max);
}
