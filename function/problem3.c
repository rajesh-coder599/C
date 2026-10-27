// factorial of number
#include<stdio.h>
int fac(int);
int main()
{int n,ans;
printf("enter a number: ");
scanf("%d",&n);
ans=fac(n);
printf("%d\n",ans);
return 0;
}
int fac(int a)
{if (a==1)
return 1;
return a*fac(a-1);
}