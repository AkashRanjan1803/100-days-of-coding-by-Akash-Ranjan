//Write a program to check if a number is a palindrome.
#include<stdio.h>
	int main(){
	int num,ori,rev,rem;
	printf("Enter a number :\n");
	scanf("%d",&num);
	ori=num;
	rev=0;
	while(num !=0){
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
	}
	if(ori==rev){
	printf("%d is a plaindrome\n",ori);
	}else{
	printf("%d is not a plaindrome\n",ori);
	}
	return 0;
}
