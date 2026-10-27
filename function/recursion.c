// function calling itself is an recursio
#include<stdio.h>
int summ(int);
int main()
{int n,s;
printf("enter a number: ");
scanf("%d",&n);
s=summ(n);
printf("%d\n",s);
return 0;
}
int summ(int a)
{
if (a==0)
return 0;
return a+summ(a-1);}