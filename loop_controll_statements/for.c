// structure of for loop in C
// we are printing multiplication table of given integer
#include<stdio.h>
int main()
{
int n;
printf("enter a integer: ");
scanf("%d",&n);
for (int i=1;i<=10;i++)
{
printf("%dX%d=%d\n",n,i,n*i);
}
return 0;
}