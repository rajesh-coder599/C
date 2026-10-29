// basic syntax of pointers in C
#include<stdio.h>
int main()
{int a=309;
int *ptr=&a;
int b=*ptr;
printf("%u\n",&a);
printf("%u\n",ptr);
printf("%d\n",a);
printf("%d\n",*ptr);
printf("%d\n",*(&a));
return 0;
}