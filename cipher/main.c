#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[100 ];
    int n,i,n1,nc;
    scanf("%s",ch);
    scanf("%d",&n);
    nc=n;
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>=65&&ch[i]<=90)
        {
            while(n>=26)
                {
                    n=n%26;
                }
            if(ch[i]+n>90)
            {
                n1=(ch[i]+n)-90;
                ch[i]=64+n1;
            }
            else
                ch[i]=ch[i]+n;
                n=nc;
        }
        else if(ch[i]>=97&&ch[i]<=122)
        {
            while(n>=26)
                {
                    n=n%26;
                }
            if(ch[i]+n>122)
            {
                n1=(ch[i]+n)-122;
                ch[i]=96+n1;
            }
            else
                ch[i]=ch[i]+n;
                n=nc;
        }
        else if(ch[i]>=48&&ch[i]<=57)
        {
            while(n>=10)
                {
                    n=n%10;
                }
            if(ch[i]+n>57)
            {
            n1=(ch[i]+n)-57;
            ch[i]=47+n1;
            }
        else
            ch[i]=ch[i]+n;
            n=nc;
        }
    }
    printf("%s",ch);
    return 0;
}
