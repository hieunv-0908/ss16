#include<stdio.h>

int main(){
	int num=10;
	int *numPtr=&num;
	printf("%d\n",*numPtr);
	printf("%d",numPtr);
	return 0;
}
