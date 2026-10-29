#include<stdio.h>
int main()
{char str[100];
scanf("%99s",str);
int j=0;
while (str[j]!='\0')
{j++;}
j--;
int i=0;
while (i<j)
{char temp=str[i];
str[i]=str[j];
str[j]=temp;
i++;
j--;
}
printf("%s",str);
return 0;
}