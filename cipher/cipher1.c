#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[10];
    int n,i,n1;
    scanf("%s",ch);
    scanf("%d",&n);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>=65&&ch[i]<=90)
        {
            if(ch[i]+n>90)
            {
                n1=(ch[i]+n)-90;
                ch[i]=64+n1;
            }
            else
                ch[i]=ch[i]+n;
        }
        else if(ch[i]>=97&&ch[i]<=122)
        {
            if(ch[i]+n>122)
            {
                n1=(ch[i]+n)-122;
                ch[i]=96+n1;
            }
            else
                ch[i]=ch[i]+n;
        }
        else if(ch[i]>=48&&ch[i]<=57)
        {
            if(ch[i]+n>57)
            {
            n1=(ch[i]+n)-57;
            ch[i]=47+n1;
            }
        else
            ch[i]=ch[i]+n;
        }
    }
    printf("%s",ch);
    return 0;
}
