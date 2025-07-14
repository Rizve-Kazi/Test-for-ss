#include<stdio.h>
#include<string.h>
int main()
{
    int d,e,f,g,h,k,b,i=1;
    char s1[14]="HELLO";
    char s2[14]="HOLA";
    char s3[14]="HALLO";
    char s4[14]="BONJOUR";
    char s5[14]="CIAO";
    char s6[14]="ZDRAVSTVUJTE";
    char name[14];

  while(scanf("%s",&name) && name[0] !='#')
    {
        d=strcmp(s1,name);
        e=strcmp(s2,name);
        f=strcmp(s3,name);
        g=strcmp(s4,name);
        h=strcmp(s5,name);
        k=strcmp(s6,name);

         if(d==0)
        {
            printf("Case %d: ENGLISH\n",i);
        }
        else if(e==0)
        {
            printf("Case %d: SPANISH\n",i);
        }
        else if(f==0)
        {
            printf("Case %d: GERMAN\n",i);
        }
        else if(g==0)
        {
            printf("Case %d: FRENCH\n",i);
        }
        else if(h==0)
        {
            printf("Case %d: ITALIAN\n",i);
        }
        else if(k==0)
        {
            printf("Case %d: RUSSIAN\n",i);
        }
        i++;
    }

    return 0;
}
