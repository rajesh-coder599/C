#include<stdio.h>
int is_palindrome(char s[],int i,int j)
{while (i<j)
{if (s[i]!=s[j])
return 0;
i++;
j--;
}
return 1;
}
int main()
{char s[100];
scanf("%99s",s);
int j=0;
while (s[j]!='\0'){
j++;}
j--;
if (is_palindrome(s,0,j))
printf("palindrome");
else
printf("not palindrome");
return 0;
}