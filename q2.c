#include<stdio.h>
void swapArrays(int *a, int *b, int size){
	int swap;
	printf("BEFORE SWAPPING:\n ");
	printf("lahore: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf("karachi: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",b[i]);
	}
	printf("\nAFTER SWAPPING:\n ");

	for(int i=0;i<size;i++){
		swap=a[i];
		a[i]=b[i];
		b[i]=swap;
	}
	printf("lahore: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf("karachi: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",b[i]);
	}
	
}
int main(){
int	lahore[] = {11, 22, 33, 44, 55};
int karachi[] = {66, 77, 88, 99, 100};
swapArrays(lahore,karachi,5);
	return 0;
}