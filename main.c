#include <stdio.h>
#include <stdlib.h>


int main()
{
    int t,f,l;
    long int no;
    scanf("%d",&t);

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

    }

    return 0;
}
