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





