#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    scanf("%s",&str);
    int len=strlen(str);

   int a=0;
   int b=0;
   int c=0;
   int d=0;

   if(len<6)
   {
       printf("NO\n");

   }

   else if(len>=6)
   {
       for(int i=0;i<len;i++)
       {
           if(str[i]=='h')
           {
               a++;
           }

            if(str[i]=='h')
           {
               a++;
           }

            if(str[i]=='e')
           {
               b++;
           }

            if(str[i]=='i')
           {
               c++;
           }

            if(str[i]=='d')
           {
               d++;
           }

       }
       if(a>=1 && b==1 && c==2 && d==1)
       {
           printf("YES\n");
       }
       else
       {
           printf("NO\n");
       }

   }


}
