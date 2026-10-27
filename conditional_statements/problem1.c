// find whether given number is +ve -ve or zero
#include<stdio.h>
int main()
{
int n;
printf("enter a number: ");
scanf("%d",&n);
if (n<0)
printf("negative");
else if (n==0)
printf("zero");
else
printf("positive");
printf("\n");
return 0;
}