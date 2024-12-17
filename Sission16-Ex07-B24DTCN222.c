#include <stdio.h>
void sort(int arr[],int size){
	int temp;
	for(int i=0;i<size;i++){
		int minAr=i;	
		for(int j=i+1;j<size-i-1;j++){
			if(arr[j]>arr[minAr]){
				temp=arr[minAr];
				arr[minAr]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
}
int main() {
    int arr[100];
    printf("moi nhap vao so phan tu cua mang\n");
    int size;
    scanf("%d",&size);
    printf("moi nhap vao tung phan tu cua mang\n");
    for(int i=0;i<size;i++){
    	scanf("%d",&arr[i]);
	}
	printf("mang sau khi nhap la\n");
	for(int i=0;i<size;i++){
    	printf("%4d",arr[i]);
	}
	printf("\n");
	sort(arr,size);
	printf("mang sau khi sap xep\n");
	for(int i=0;i<size;i++){
    	printf("%4d",arr[i]);
	}
    return 0;
}
