/*
Q.2 Write a Program to count the total number of digits in a number.
For example,
Input:
Enter any number: 752

Output: 
Total number of digits: 3
*/

#include<stdio.h>
#include<conio.h>

void main(){
     int a=0,num;
     clrscr();
     printf("Enter Number ");
     scanf("%d",&num);
      do{
	 printf("%d\n",num);
	 num=num/10;
	 a++;
     }while(num!=0);
     printf("total lenth %d",a);
     getch();
}





