// print fibonacci series
#include<stdio.h>
void fib(int);
int main()
{int n;
printf("enter a number: ");
scanf("%d",&n);
fib(n);
return 0;
}
void fib(int n)
{int f1=0,f2=1,temp;
for (int i=1;i<=n;i++)
{printf("%d\n",f1);
temp=f1+f2;
f1=f2;
f2=temp;}
}