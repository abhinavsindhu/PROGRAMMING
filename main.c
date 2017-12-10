#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("HELLOO GUYS");
    int t,f,l;
    long int no;
    scanf("%d",&t);
  while(t--)
    {
        printf("\n");
        scanf("%ld",&no);
        l=no%10;
        while(no>0)
        {
            f=no%10;
            no=no/10;
        }

    printf("%d\n",f+l);
   printf("TATA BYE GUYS");
    }

    return 0;
}
