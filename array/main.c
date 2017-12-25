#include <stdio.h>
#include <stdlib.h>
int annagram(char[],char[]);
int main()
{
   int flag,t;
   char str1[100000],str2[100000];
   scanf("%d",&t);
   while(t--)
   {
   scanf("%s",str1);
   scanf("%s",str2);
   flag=annagram(str1,str2);

   if(flag==1)
   printf("YES\n");
   else
    printf("NO\n");
   }
    return 0;
}
int annagram(char str1[],char str2[])
{
    int A[26]={0},B[26]={0};
    int c=0;
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
        if(A[c]!=B[c])
            return 0;
    }
    return 1;

}
