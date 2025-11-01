#include<stdio.h>
int *convertbinary(int code,int *size);
int main(){
	int code,size;
	printf("enter your access code: ");
	scanf("%d",&code);
	int *binary=convertbinary(code,&size);
	printf("binary of %d is: ",code);
	for(int j=size-1;j>=0;j--){
	printf("%d",binary[j]);
	}
	return 0;
}
int *convertbinary(int code,int *size){
	int i=0;
	static int binary[32];
	while(code>0){	
		binary[i]=code%2;
		code=code/2;
		i++;
	}
	*size=i;
return  binary;
}