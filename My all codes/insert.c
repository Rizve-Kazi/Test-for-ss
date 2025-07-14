#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length = ");
    scanf("%d",&n);

    int arr[n+1];

    printf("Enter the array element = ");
    printf("\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int pos,val;

    printf("Enter the position and the value = ");
    scanf("%d %d",&pos,&val);

    /*
      insert korte gele amader insert position and value nite hobe.
      Insert positin faka rekhe oi postiton e thaka value daan e soraia dite hobe mane
      1 ghor samne dite hobe.abar samner ta abar tar samner index e boshate hobe value.
      Ete kore length 1 baarbe.

    */

    for(int i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1]; // loop calaia postion theke n porjonto value soracci daan e. insert position ete faka hobe.
    }

    arr[pos-1]=val; // faka place e value boshabo.
    n++; // length 1  bararai debo

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
