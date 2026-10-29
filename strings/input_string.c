#include<stdio.h>
int main()
{char s[100];
fgets(s,sizeof(s),stdin);
printf("%s",s);
printf("%d",sizeof(s));
return 0;
}