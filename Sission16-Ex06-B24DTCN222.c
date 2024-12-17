#include <stdio.h>
void search(int arr[],int numSearch,int size,int *index){
	*index=-1;
	for(int i=0;i<size;i++){
		if(arr[i]==numSearch){
			*index=i;
			break;
		}
	}
}
int main() {
    int arr[100];
    int size;
    int index;
    
    
    printf("moi nhap vao do dai cua mang");
    scanf("%d",&size);
    printf("moi nhao vao tung phan tu cua mang\n");
    for(int i=0;i<size;i++){
    	scanf("%d",&arr[i]);
	}
	printf("moi nhap vao gia tri muon tim");
	int numSearch;
	scanf("%d",&numSearch);
	search(arr,numSearch,size,&index);
	if(index!=-1){
	printf("gia tri %d co trong mang o vi tri %d",numSearch,index);
	}else{
		printf("khong tim thay gia tri ban muon trong mang");
	}
    return 0;
}
