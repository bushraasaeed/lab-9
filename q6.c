#include<stdio.h>
int input(int matrix[10][10],int r,int c,char name){
	 printf("Enter elements of Matrix %c (%dx%d):\n", name, r, c);
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void displayMatrix(int matrix[10][10], int row, int col, char name) {
    printf("\n%c:\n", name);
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void multiply(int m1[10][10],int m2[10][10],int result[10][10],int r1,int c1,int c2){
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			result[i][j]=0;
			for(int k=0;k<c1;k++){
				result[i][j]+=m1[i][k]*m2[k][j];
			}
		}
	}
}
int main(){
int m1[10][10],m2[10][10],result[10][10];
int r1,c1,r2,c2;
printf("=== Matrix Multiplication Program ===\n\n");

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);
    if(c1!=r2){
    	printf("matrix multiplication not possible\n");
    	printf("Columns of A (%d) must equal rows of B (%d)\n", c1, r2);
        return 0;
	}
	input(m1,r1,c1,'A');
	printf("\n");
    input(m2,r2,c2,'B');
    multiply(m1,m2,result,r1,c1,c2);
    printf("display matrices:\n");
    displayMatrix(m1,r1,c1,'A');
    displayMatrix(m2,r2,c2,'B');
    displayMatrix(result,r1,c2,'R');
	
	

	return 0;
}