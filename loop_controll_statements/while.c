// structure of while loop
// doing digit sum until it gets single digit
#include<stdio.h>
int main()
{
int n,s=0;
printf("enter a number: ");
scanf("%d",&n);
while (n>0)
{s+=n%10;
n/=10;
if (n==0 && s>9)
{n=s;
s=0;}}
printf("%d\n",s);
return 0;
}