#include<conio.h>
#include<conio.h>
void main()
{
int a,b,c=1;
clrscr();
for(a=1; a<=15; a++)
{
  for(b=1; b<=a; b++)
  {
  printf("%d",c);
  }
  printf("\n");
  c++;
}
getch();
}