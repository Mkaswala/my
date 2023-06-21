#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
char c='A';

clrscr();
for(a=65; a<=69; a++)
{
 for(b=65; b<=69; b++)
 {
 printf("%c \t",c++);
 }
printf("\n");
}

getch();
}