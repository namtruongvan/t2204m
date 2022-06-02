#include<stdio.h>
int main () {
	int arr[9]=  {1,2,5,7,8,56,4,3,35};
	int search = 8;
	int  low = 0;
	int hi = 8;
	bool flag = false;
	while(low <=hi){
		int mid = ( low + hi )/2;
		if(search == arr[mid]){
			printf("da tim thay tai %d\n",mid);
			flag = true;
			break;
		
		}else if ( search > arr[mid]){
			low = mid + 1 ;
		}else if(search < arr[mid]){
			hi = mid - 1;
		}
	} 
	 if(flag == false){
	 	printf(" not found ....");
	 	return 0;
	 }
}
