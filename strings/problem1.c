#include<stdio.h>
int main()
{char s[100];
scanf("%99s",s);
for(int i=0;i<=100;i++)
{if (s[i]=='\0')
    {printf("%d\n",i);
    break;}
}
return 0;
}