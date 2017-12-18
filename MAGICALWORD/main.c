#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,len,i,n,a,b,c,d1,d2;
    int A[]={67,71,73,79,83,97,101,103,107,113};
    char str[500];
    scanf("%d",&t);
    scanf("%d",&len);
    while(t--)
    {
        scanf("%s",str);
        for(i=0;str[i]!='\0';i++)
      {     c=0;

            for(a=1;a<=str[i];a++)
            if(str[i]%a==0)
            c++;
          if(c!=2)
        {

        }
    }
    }
    return 0;
}
