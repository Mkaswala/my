#include<stdio.h>
#include<conio.h>
void main()
{
int a,n;
clrscr();
printf("enter value:");
scanf("%d",&n);
a=-n;
while(a<=n)
{
printf("%d \t",a);
a++;
}

getch();
}