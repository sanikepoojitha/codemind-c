#include<stdio.h>
int main()
{
    int n,a[100],c,f=0,r,l;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c=0,l=a[i];
        while(l!=0)
        {
            r=l%10;
            c++;
            l/=10;
        }
        if(c%2==0)
        f++;
    }
    printf("%d",f);
}