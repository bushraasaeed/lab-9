#include<stdio.h>
int factorial(int n){
	int result=1;
	for(int i=1;i<=n;i++){
		result*=i;
	}
	return result;
}
int main(){
	int n;
	printf("ente a non negative integar to find factorial: \n");
	scanf("%d",&n);
int	fact=factorial(n);
	printf("the factorial of %d is %d.",n,fact);
	return 0;
}