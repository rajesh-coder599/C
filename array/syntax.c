// basic syntax of array in C
#include<stdio.h>
int main()
{
    int n;
    printf("enter len of an array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);   
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}