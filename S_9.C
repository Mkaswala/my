#include<stdio.h>
#include<conio.h>
void main()
{
int i,n ,ans=1;
clrscr();
printf("value:");
scanf("%d",&n);
printf("1\t");

for(i=2;i<=n; i++);
{
ans=ans*2;
printf("%d \t",i*ans);
}
getch();
}