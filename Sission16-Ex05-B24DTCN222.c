#include<stdio.h>
void updateArr(int arr[],int indexValue,int updateValue,int size){
	if(indexValue>=0&&indexValue<size){
		arr[indexValue] = updateValue;
	}
	
}
int main(){
	int arr[]={1,2,3,4,5};
	int indexValue;
	int updateValue;
	int size=5; 
	printf("moi nhap vao vi tri muon thay doi");
	scanf("%d",&indexValue);
	printf("moi nhap vao gia tri muon thay doi");
	scanf("%d",&updateValue);
	for(int i =0;i<size;i++){
		printf("%4d",arr[i]);
	}
	printf("\n");
	updateArr(arr,indexValue,updateValue,size);
	printf("mang sau khi update\n");
	for(int i =0;i<size;i++){
		printf("%4d",arr[i]);
	}
	return 0;
}
