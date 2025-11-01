#include<stdio.h>
void billtotal(int qty[],float price[],int n,float total[]){ 

	for(int i=0;i<n;i++){
		
		total[i]=price[i]*qty[i];
	}
}
int main(){
	char cust[50];
	int num;
	printf("Enter customer's name: ");
	scanf(" %[^\n]",cust);
	printf("Enter the number of items purchased: ");
	scanf("%d",&num);
	char name[num][50];
	int qty[num];
	float price[num],total[num];
	for(int i=0;i<num;i++){
		printf("enter the name of item %d: ",i+1);
		
		scanf(" %[^\n]",name[i]);
		printf("enter the quantity of item %d: ",i+1);
		scanf("%d",&qty[i]);
		printf("enter the price of item %d: ",i+1);
		scanf("%f",&price[i]);
	}
 billtotal(qty,price,num,total);
 float grandtotal=0;
 printf("---------BILL---------\n");
 printf("Customer name: %s\n",cust);
 printf("total items bought: %d\n",num);
 printf("---------------------------------------------------------\n");
 printf("Item\t\t\tprice\t\tQuantity\tTotal\n");
 printf("---------------------------------------------------------\n");
 for(int i=0;i<num;i++){
 	printf("%-20s\t%.2f\t\t%d\t\t%.2f\n",name[i],price[i],qty[i],total[i]);
 	grandtotal+=total[i];
 }
 printf("---------------------\n");
 printf("grand total:%.2f\n",grandtotal);
	return 0;
}