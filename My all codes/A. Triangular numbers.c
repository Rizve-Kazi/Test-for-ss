#include<stdio.h>
int main()
{
    int number,x,root,square;
    scanf("%d",&number);

    x=(1+(2*number)*4);
    root=sqrt(x);
    square=pow(root,2);


    if(x==square)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }

    // printf("X = %d\n",x);
   //  printf("Root = %d\n",root);
  //   printf("Square = %d\n",square);

    return 0;
}
