#include<stdio.h>
void insert(int *arr,int newelm,int index,int *size ){
	if(index>*size){
		return;
	}else{
		for(int i=*size;i>index;i--){
			*(arr+i)=*(arr+i-1);
		}
		(*size)++;
		*(arr+index)=newelm;
	}
}
int main(){
	int arr[100];
	printf("moi nhap vao do dai cua mang\n");
	int size;
	scanf("%d",&size);
	printf("moi nhap vao tung phan tu cua mang\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("mang sau khi nhap\n");
	for(int i=0;i<size;i++){
		printf("arr[%d]:%d\n",i,arr[i]);
	}
	printf("\nmoi nhap vao vi tri muon chen");
	int index;
	scanf("%d",&index);
	printf("moi nhap vao gia tri muon chen");
	int newelm;
	scanf("%d",&newelm);
	insert(arr,newelm,index,&size);
	printf("mang sau khi chen");
	for(int i=0;i<size;i++){
		printf("%4d",arr[i]);
	}
	return 0;
}
