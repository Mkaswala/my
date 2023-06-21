#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
 for(a=0; a<=10; a+=2)
 {
  for(b=0; b<=10; b+=2)
   {
   printd("%d \t",a);
   }
 printf("\n",b);
 }
getch();
}