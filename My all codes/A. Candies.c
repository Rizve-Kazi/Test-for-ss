#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,dev;
    scanf("%d %d",&m,&n);

    dev=m/n;
    int sub=m%n;

    if(sub==0)
    {
        for(int i=0; i<n; i++)
        {
            if(i!=n)
            {
                printf("%d ",dev);
            }
            else if(i==n)
            {
                printf("\n");
                break;
            }
        }
    }

    else if(sub!=0)
 {
      int find=n-sub;

//        printf("Sub = %d\n",find);

        for(int i=0; i<n; i++)
        {

          if(i==n)
            {
                printf("\n");
            }
            else if(i>=find+1 && i!=n)
            {
                printf("%d ",dev+1);
            }
              else if(i!=find)
            {
                printf("%d ",dev);
                continue;
            }
        }
    }


}
