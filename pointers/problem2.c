#include<stdio.h>
void solve(int a,int b,int *p,int *s,float *avg)
{*p=a*b;
*s=a+b;
*avg=(float)(a+b)/2;}
int main()
{int a=5,b=4,p,s;
float avg;
solve(a,b,&p,&s,&avg);
printf("%d %d %.2f",p,s,avg);
return 0;
}
