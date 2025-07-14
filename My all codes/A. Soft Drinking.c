#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,l,c,d,p,nl,np;
    int ans1,ans2,ans3,ans4;
    int res1,res2,res3;

    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);

    ans1=k*l;
    ans2=ans1/nl;
    ans3=c*d;
    ans4=p/np;

    res1=ans2/n;
    res2=ans3/n;
    res3=ans4/n;

    if(res3>=res2 && res2>=res1)
    {
        printf("%d\n",res1);//1
    }
    else if(res3>=res1 && res1>=res2)
    {
        printf("%d",res2);//2
    }
    else if(res1>=res3 && res3>=res2)
    {
        printf("%d\n",res2);//2
    }
   else if(res1>=res2 && res2>=res3)
    {
        printf("%d\n",res3);//3
    }
   else if(res2>=res3 && res3>=res1)
    {
        printf("%d\n",res1);//1
    }
   else if(res2>=res1 && res1>=res3)
   {
       printf("%d\n",res3);//3
   }
   return 0;
}
