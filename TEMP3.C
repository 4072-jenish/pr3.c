/*
Q.3 Write a Program to find the sum of a first and the last digit of a number.
For example,
Input:
Enter any number: 384

Output: 
The sum of the first and the last digit: 7
*/

#include<stdio.h>
#include<conio.h>

void main(){
     int a=0,num,n1,n2,sum;
     clrscr();
     printf("Enter Number ");
     scanf("%d",&num);
      n2=num%10;
      do{

	 num=num/10;

     }while(num!=1);
      n1=num;
      sum=n1+n2;
     printf("the sum of %d and %d is %d",n1,n2,sum);
     getch();
}


