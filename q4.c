#include<stdio.h>
void length(char *str){
	int length=0;
	while(*str!='\0'){
		length++;
		*str++;
	}
	printf("the lenghth of %s is %d", str,length);
}
int main(){
	char str[30];
	printf("enter a word: ");
	scanf("%[^\n]",&str);
	length(&str);
	return 0;
}