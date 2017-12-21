#include <stdio.h>
#include <stdlib.h>
int annagram(char[],char[]);
int main()
{
   int flag,t;
   char str1[10000],str2[10000];
   scanf("%d",&t);
   while(t--)
   {
    scanf("%s",str1);
   scanf("%s",str2);
   flag=annagram(str1,str2);
printf("%d\n",flag);
   }

    return 0;
}
int annagram(char str1[],char str2[])
{
    int A[26]={0},B[26]={0};
    int c=0,count=0;
    while(str1[c]!='\0')
    {
        A[str1[c]-'a']++;
        c++;
    }
    c=0;
    while(str2[c]!='\0')
    {
        B[str2[c]-'a']++;
        c++;
    }
    for(c=0;c<26;c++)
    {
        if(A[c]>B[c])
            count=count+(A[c]-B[c]);
        else
            count=count+(B[c]-A[c]);

    }
    return count;

}
