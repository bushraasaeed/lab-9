#include<stdio.h>
int hcf(int a,int b){
	int temp=0;
	while(b!=0){
		temp=b;
		b=a%b;
		a=temp;
	}
return a;	
}
int lcm(int a,int b){
	return (a*b)/hcf(a,b);
}
int main(){
	int n1,n2,choice;
	printf("Enter two numbers: \n");
	scanf("%d %d",&n1,&n2);
	printf("----main menu----\n");
	printf("1)HCF\n");
	printf("2)LCM\n");
	printf("Press 1 for HCF,press 2 for LCM: \n");
	scanf("%d",&choice);
	if(choice==1){
		printf("the HCF of %d and %d is %d",n1,n2,hcf(n1,n2));
	}
	else if(choice==2){
		printf("the LCM of %d and %d is %d",n1,n2,lcm(n1,n2));
	}
	else{
		printf("invalid choice\n");
	}
	return 0;
}