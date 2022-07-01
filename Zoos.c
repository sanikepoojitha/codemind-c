#include<stdio.h>
int main()
{
    int i,c=0,c1=0;
    char s[100];
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='z')
        {
            c++;
        }
        if(s[i]=='o')
        {
            c1++;
        }
    }
    if(c1==2*c)
    printf("Yes");
    else
    printf("No");
}