// finding GCD recursively
#include<stdio.h>
int gcd(int,int);
int main()
{int a,b,ans;
printf("enter two integers: ");
scanf("%d%d",&a,&b);
ans=gcd(a,b);
printf("%d\n",ans);
return 0;
}
int gcd(int x,int y)
{if (y==0)
return x;
gcd(y,x%y);
}