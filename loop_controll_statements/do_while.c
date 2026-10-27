// structure of do-while loop
// we are solving basic menu problem
#include<stdio.h>
int main()
{int check=1,choice;
do{printf("1. say hello \n");
printf("2. say bye \n");
printf("3. exit \n");
scanf("%d",&choice);
if (choice==1)
printf("hello\n");
else if (choice==2)
printf("bye\n");
else if (choice==3)
check=0;
else
printf("invalid choice \n");
}while(check);
return 0;
}