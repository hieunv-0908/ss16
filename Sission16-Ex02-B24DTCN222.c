#include<stdio.h>
void change(int *num1,int *num2){
	int temp=*num1;
	*num1=*num2;
	*num2=temp;
}
int main(){
	int num1=10;
	int num2=30;
	change(&num1,&num2);
	printf("%d\n%d",num1,num2);
	
	
	return 0;
}
