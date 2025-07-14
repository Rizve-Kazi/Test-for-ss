#include<stdio.h>
#include<math.h>
int main()
{
    int number;
    scanf("%d",&number);

    int root=sqrt(number);
    int ans=root*root;

    if(number==ans)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
