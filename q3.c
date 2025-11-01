#include<stdio.h>
#include<string.h>
void sort(char a[]){
int	len1=strlen(a);
char temp;

for(int i=0;i<len1-1;i++){
	for(int j=i+1;j<len1;j++){
		if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}	
}
int main(){
char str1[20];
char str2[20];
printf("enter the first word: ");
scanf(" %s",str1);
printf("enter the second word: ");
scanf(" %s",str2);

sort(str1);
sort(str2);
if (strcmp(str1,str2)==0){
printf("this word is an anagram");
}
else{
printf("this word is not an anagram");	
}
return 0;
}