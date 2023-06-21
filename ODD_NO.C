#include<stdio.h>
#include<conio.h>
void main()
{
int i,n=0;
clrscr();
for(i=1 ;i<=5 ;i+=2)
{
n=i+n;
}
printf(" %d \n",i+n);

getch();
}