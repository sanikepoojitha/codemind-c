#include<stdio.h>
int main()
{
    int i,k=0,p=0,a[3],b[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]<b[i])
        p++;
        else if(a[i]==b[i])
        k==p;
        else
        k++;
    }
    printf("%d %d",k,p);
    return 0;
}