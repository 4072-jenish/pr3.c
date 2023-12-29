
/*
Q.1 Write a Program to print all alphabets from a to z by skipping 3 alphabets using do while loop.
For example,
Output: 
a, e, i, m, q, u, y
*/

#include<stdio.h>
#include<conio.h>

void main() {
     char a='a';
     clrscr();
     do{
	 printf("%c \n",a);
	 a+=4;
     }while(a<="z");
     getch();





}





