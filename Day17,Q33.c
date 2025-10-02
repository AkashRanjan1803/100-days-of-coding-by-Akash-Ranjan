//Write a program to check if a number is an Armstrong number.
#include<stdio.h>
	int main(){
	int num,ori,rev,temp,count;
	double result =0.0;
	printf("Enter a number :\n");
	scanf("%d",&num);
	ori=num;
	count = 0;
	for(int temp = num;temp !=0;temp/=10){
	count++;
	}
	for(int temp = num;temp !=0;temp/=10){
	rem=temp%10;
	result=result+pow(rem,digits);
	}
	if ((int)result == original) {
        printf("%d is an Armstrong number.\n", original);
    	} else {
        printf("%d is NOT an Armstrong number.\n", original);
    	}
    	return 0;
}
