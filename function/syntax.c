// basic syntax of function in C
#include<stdio.h>
int add(int,int);
int main()
{int x,y,s;
printf("enter two integers: ");
scanf("%d%d",&x,&y);
s=add(x,y);
printf("%d",s);
return 0;
}
int add(int a, int b)
{return (a+b);}