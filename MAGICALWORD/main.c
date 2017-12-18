#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,n,a,b,d1,d2;
    int A[]={67,71,73,79,83,97,101,103,107,113};
    char str[500];
    scanf("%d",&t);

    while(t--)
    {
        scanf("%s",str);
        for(i=0;str[i]!='\0';i++)
      {     if(str[i]<67)
           str[i]=A[0];
           else if(str[i]>113)
            str[i]=A[9];
           else
            {
            d1=str[i]-A[i];
            d2=A[i+1]-str[i];
            if(d1<=d2)
                str[i]=A[i];
            else
                str[i]=A[i+1];

            }



      }
    }
      printf("%s",str);
    return 0;
}
