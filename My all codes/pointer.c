#include<stdio.h>
int main()
{
    char s[101];
    char s2[101];

    gets(s);
    gets(s2);

   int i=0,same=1;

   while(s[i]!='\0' || s2[i]!='\0')
   {
       if(s[i]!=s2[i])
       {
           same=0;
           break;
       }
       i++;
   }
   if(same)
   {
       printf("equal\n");
   }
   else
   {
       printf("not equal\n");
   }
}
