#include<stdio.h>
int main()
{
    int n;
    printf("enter len of an array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {scanf("%d",&arr[i]);}
    int mx=arr[0],curr=arr[0];
    for(int i=0;i<n;i++)
    {
        if (curr+arr[i]>=arr[i])
        {curr+=arr[i];}
        else
        curr=arr[i];
        if (mx<curr)
        mx=curr;
    }
    printf("%d\n",mx);
    return 0;
}