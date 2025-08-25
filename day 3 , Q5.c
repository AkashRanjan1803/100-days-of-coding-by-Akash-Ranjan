//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
           float cel;
           printf("enter celsius :");
           scanf("%f",&cel);
           	
           float far = cel * (9.0/5.0) + 32;
           printf("final temperature is :%f",far);
           return 0;
           }   
      
