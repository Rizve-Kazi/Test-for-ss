#include<stdio.h>
int main()
{
    int oldest_brother = 1 ,middle_brother = 2, youngest_brother = 3,a,b;
    scanf("%d %d",&a,&b);

    if((oldest_brother==a && middle_brother==b) || (oldest_brother==b && middle_brother==a))
    {
        printf("%d\n",youngest_brother);
    }
    else if((oldest_brother==a && youngest_brother==b) || (oldest_brother==b && youngest_brother==a))
    {
        printf("%d\n",middle_brother);
    }
    else if((middle_brother==a && youngest_brother==b) || (middle_brother==b && youngest_brother==a))
    {
        printf("%d\n",oldest_brother);
    }
    return  0;
}
