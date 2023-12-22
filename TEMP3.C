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


