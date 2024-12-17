#include<stdio.h>
void change(int *result){
		int num1=10;
		int num2 =20;
		*result =num1+num2;
}
int main(){
	int result;
	change(&result);
	printf("%d",result);
	
	
	return 0;
}
