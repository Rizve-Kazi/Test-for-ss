#include<stdio.h>
#include<string.h>
int main()
{
    int len,range,mid;
    char str[100];
    scanf("%d",&range); //input neya string er number

    for(int i=1; i<=range; i++)
    {
        scanf("%s",&str);

        len=strlen(str);//str er length
        mid=len/2; // length er half

        char first_half[100],second_half[100];// two string for devided kora majhe string rakhar jnno

        strncpy(first_half,str,mid);//first_half er modhe str er 1st half copy kore rekhe dilam.
        first_half[mid]='\0';

        strcpy(second_half,mid+str);//second_half er modhe 2nd half copy kore rakhlam

         strlwr(first_half);//low form e nilam.
         strlwr(second_half);

        int d=strcmp(first_half,second_half);//compare

        if(d==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    return 0;
}
