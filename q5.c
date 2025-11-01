#include<stdio.h>
#include<stdlib.h>
void createimg(int img[8][8]){
	printf("orignal image: \n\n");
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
		img[i][j]=rand() % 256;	
		printf("%4d ",img[i][j]);
		}
		printf("\n");
	}
}
void brightness(int img[8][8]){
	printf("brightned image: \n\n");
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
		img[i][j]+=20;
		if(img[i][j]>255){
			img[i][j]=255;
		}	
		printf("%4d ",img[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int img[8][8];
	createimg(img);
	printf("\n");
	brightness(img);
	return 0;
}