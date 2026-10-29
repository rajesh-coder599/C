#include<stdio.h>
int main()
{int a=9;
int *p=&a;
int **pp=&p;
printf("%d\n",**pp);
return 0;
}