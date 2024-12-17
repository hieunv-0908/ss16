#include<stdio.h>
void dlt(int *arr,int dltIndex,int *size ){
	if(dltIndex>*size||dltIndex<0){
		printf("Index need delete insiden other array");
	}else{
		for(int i=dltIndex;i<*size;i++){
			*(arr+i)=*(arr+i+1);
		}
		(*size)--;
	}

}
int main(){
	int arr[100];
	printf("Please enter size of array\n");
	int size;
	scanf("%d",&size);
	printf("please enter each element\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("array after enter \n");
	for(int i=0;i<size;i++){
		printf("Array[%d]: %d\n",i,arr[i]);
	}
	printf("Please enter index need delete\n");
	int dltIndex;
	scanf("%d",&dltIndex);
	dlt(arr,dltIndex,&size);
	printf("array after delete element\n");
	for(int i=0;i<size;i++){
		printf("%4d",arr[i]);
	}
	return 0;
}
