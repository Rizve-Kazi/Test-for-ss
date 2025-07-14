#include<stdio.h>
int main()
{
    char family[20];
    scanf("%s",&family);
    char vertebrado[20] =  {"vertebrado"};
    char invertebrado[20]= {"invertebrado"};


    char subclass[30];
    scanf("%s",&subclass);
    char ave[20]= {"ave"};
    char mamifero[20] = {"mamifero"};
    char inseto[20] = {"inseto"};
    char anelideo[20] = {"anelideo"};


    char sub_subclass[20];
    scanf("%s",&sub_subclass);
    char carnivoro[20]= {"carnivoro"};
    char onivoro[20]= {"onivoro"};
    char herbivoro[20]= {"herbivoro"};
    char hematofago[20]= {"hematofago"};



    int d = strcmp(family,vertebrado);
    int b = strcmp(family,invertebrado);
    int d2 =strcmp(subclass,ave);
    int d3 = strcmp(subclass,mamifero);
    int b2 = strcmp(subclass,inseto);
    int b3 = strcmp(subclass,anelideo);



    int m =strcmp(sub_subclass,carnivoro);
    int n =strcmp(sub_subclass,onivoro);
    int o =strcmp(sub_subclass,herbivoro);
    int p =strcmp(sub_subclass,hematofago);


    if(d==0)
    {
        if(d2==0)
        {
           if(m==0)
           {
               printf("aguia\n");
           }

           else if(n==0)
           {
               printf("pomba\n");
           }
        }
        else if(d3==0)
        {
            if(n==0)
            {
                printf("homem\n");
            }

            else if(o==0)
            {
                printf("vaca\n");
            }

        }
    }

    else if(b==0)
    {
        if(b2==0)
        {
            if(p==0)
            {
                printf("pulga\n");
            }

            else if(o==0)
            {
                printf("lagarta\n");
            }
        }
        else if(b3==0)
        {
            if(p==0)
            {
                printf("sanguessuga\n");
            }

            else if(n==0)
            {
               printf("minhoca\n");
            }
        }
    }

    return 0;
}
