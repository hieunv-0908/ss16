#include<stdio.h>
void reverse(char *inputString,char *reverseString){
	int len=strlen(inputString);
		for(int i=0;i<len;i++){
			*(reverseString +i)=*(inputString+len-i-1);
		}
	
}
int main(){
	char inputString[100];
	char reverseString[100];
	printf("moi nhap vao chuoi : ");
	fgets(inputString,100,stdin);
	reverse(inputString,reverseString);
	printf("%s",reverseString);
	return 0;
}
