
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length = ");
    scanf("%d",&n);

    int arr[n+1];

    printf("Enter the array element = ");
    printf("\n");

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int pos;

    printf("Enter the position  = ");
    scanf("%d",&pos);

    /*
     ekahane postition 1 komate hobe delete er jnno.So position theke n porjonto
    loop calaia amra postition boarabor khali kore ek ek kore index gula tar purboborti
    index e rekhe dei and length 1 komaia dei tahole e hobe.

    */

    for(int i=pos; i<n; i++)
    {
        arr[i-1]=arr[i];
    }

    n--;

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

}
