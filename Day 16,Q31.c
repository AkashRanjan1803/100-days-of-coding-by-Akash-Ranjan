//Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
	int main(){
	int num,i,j;
	int binary[32];
	printf("Enter a number:\n");
	scanf("%d",&num);
	
	if(num==0){
	printf("binary:0\n");
	return 0;
	}
	i = 0;
	while(num>0){
	binary[i]=num%2;
	num=num/2;
	i++;
	}
	printf("binary :");
	for(j=i-1;j>=0;j--){
	printf("%d",binary[j]);
	}
	return 0;
	}
