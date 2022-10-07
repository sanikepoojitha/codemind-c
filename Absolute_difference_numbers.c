#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c=0,k,s1=0,a[100],s2=0,d,r;
    scanf("%d%d",&n,&k);
    d=n;
    while(n>0)
    {
        c++;
        n=n/10;
    }
    i=c-1;
    while(i>=0 && d>0)
    {
        r=d%10;
        a[i]=r;
        i--;
        d=d/10;
    }
    for(i=0;i<k;i++)
    {
        s1=s1*10+a[i];
    }
    for(i=c-k;i<c;i++)
    {
        s2=s2*10+a[i];
    }
    printf("%d",abs(s1-s2));
}