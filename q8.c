#include<stdio.h>
void printing(int *arr,int size){
for(int i=0;i<size;i++){
	printf("%d ",*arr);
	arr++;
}
}
int main(){
	int arr[]={10,20,30,40,50};
	int size=sizeof(arr)/sizeof(arr[0]);
	printing(arr,size);
	return 0;
	
}