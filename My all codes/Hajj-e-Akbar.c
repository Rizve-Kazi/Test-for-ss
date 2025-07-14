#include<stdio.h>
int main()
{
    int i=1;
    char name[20];
    while(scanf("%s",&name)!=(strcmp(name,"*")==0))
    {
        if(strcmp(name,"Hajj")==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else if(strcmp(name,"Umrah")==0)
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
        i++;
    }
    return 0;
}
