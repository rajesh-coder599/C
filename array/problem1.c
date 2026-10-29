#include<stdio.h>
int main()
{
    int n;
    printf("enter len of an array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a1=arr[0],a2;
    for(int i=0;i<n;i++)
    {
        if (a1<arr[i])
        {a2=a1;
        a1=arr[i];
        }
        else if (a2<arr[i] && a1!=arr[i])
        {a2=arr[i];
        }
    }
    printf("%d",a2);
    return 0;
}