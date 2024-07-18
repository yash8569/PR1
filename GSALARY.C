#include<stdio.h>
#include<conio.h>

void main(){
	int s,total=23,per;
	 clrscr();
	 printf("enter for value of s :");
	 scanf("%d",&s);
	 per=s*total/100;
	 printf("gross salary : %d",per+s);
	 getch();
}