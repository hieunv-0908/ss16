#include<stdio.h>
void chanvailon(int *arrPtr[]){
	for(int i=0;i<5;i++){
		printf("%d\n",*(arrPtr+i));
	}
}
int main(){
	int arr[5]={5,7,3,8,2};
	chanvailon(&arr);
	return 0;
}
