#include<stdio.h>
int main()
{
    int Arr[]={10,20,3000,40,50};
    int maximum_value = maximum(Arr);
    printf("The maximum value = %d\n",maximum_value);
}
  int maximum(int s[])
  {
      int i;
      int max = s[0];
      for(i=0;i<5;i++)
      {
          if(max<s[i])
            max = s[i];
      }
      return max;
  }
