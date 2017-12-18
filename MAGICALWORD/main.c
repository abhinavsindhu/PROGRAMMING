#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,n,a,b,d1,d2;
    int A[]={67,71,73,79,83,89,97,101,103,107,109,113};
    char str[500];
    scanf("%d",&t);

    while(t--)
    {
        scanf("%s",str);
        while(str[i])
        {
      for(n=0;n<10;n++)
      {     if(str[i]<67)
           str[i]=A[0];
           else if(str[i]>113)
            str[i]=A[9];
           else
            {
            d1=str[i]-A[n];
            d2=A[n+1]-str[i];
            if(d1<=d2)
                str[i]=A[n];
            else
                str[i]=A[n+1];

            }


      }
      }
    }
      printf("%s",str);
    return 0;
}
