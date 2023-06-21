#include<stdio.h>
#include<conio.h>
void main()
{
 int a,n;
 clrscr();
 printf("enter value:");
 scanf("%d",n);
 a=0;
 do
 {
 printf("%d\t",a);
 a+=2;
 }
 while(a<=n);
 getch();
}