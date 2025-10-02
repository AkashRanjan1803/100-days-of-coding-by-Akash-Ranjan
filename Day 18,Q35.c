//Write a program to print all factors of a given number.
#include<stdio.h>
	int main(){
	int num,i;
	printf("Enter a number :\n");
	scanf("%d",&num);
	for(int i =1; i<=num;i++){
	if(num%i==0){
	printf("factors are :%d\n",i);
	}
	}
	return 0;
}
