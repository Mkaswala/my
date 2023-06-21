#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter value:");
scanf("%d",&n);

switch(n)
{
  case 1:
  printf("monday");
  break;

  case 2:
  printf("tuseday");
  break;

  case 3:
  printf("wednesday");
  break;

  case 4:
  printf("thursday");
  break;

  case 5:
  printf("friday");
  break;

  case 6:
  printf("saturday");
  break;

  case 7:
  printf("sunday");
  break;

  default:
  printf("worng choice");
  }


getch();
}