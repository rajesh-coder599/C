// find GCD of 2 numbers by using udf
#include<stdio.h>
int gcd(int,int);
int main()
{int a,b,x;
printf("enter two integers: ");
scanf("%d%d",&a,&b);
x=gcd(a,b);
printf("%d",x);
return 0;
}
int gcd(int a,int b)
{int temp;
while (b!=0)
{temp=a%b;
a=b;
b=temp;}
return a;
}