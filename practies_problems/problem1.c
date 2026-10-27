// decimal to hexadecimal
#include<stdio.h>
#include<math.h>
int main()
{
int n,bin=1,l=0,r,temp,i,x;
printf("enter a integer number to convert it into hexadecimal number: ");
scanf("%d",&n);
while (n>0)
{
r=n%2;
bin=bin*10+r;
n=n/2;
l+=1;
}
x=4-l%4;
if (x!=4)
{bin=bin*(pow(10,x));}
while (bin>1)
{temp=0;
for(i=3;i>=0;i--)
{r=bin%10;
bin=bin/10;
temp+=r*(pow(2,i));
}
if (temp<10)
printf("%d",temp);
else
printf("%c",temp+55);
}
printf("\n");
}