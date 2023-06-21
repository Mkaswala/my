#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
for(a=1; a<=5; a++)
{
 for(b=1; b<=a; b++)
 {
  printf("*");
 }
 for(c=1; c<=a; c++)
 {
  printf(" ");
 }
 printf("\n");
}

for(a=5; a>=1; a--)
{
  for(b=1; b<=a; b++)
  {
  printf("*");
  }
  for(c=1; c<=a; c++)
  {
  printf(" ");
  }
printf(" \n");
}
getch();
}
