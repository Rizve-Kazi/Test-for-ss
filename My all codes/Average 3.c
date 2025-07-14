#include<stdio.h>
int main()
{

    double exam_score,number_one,number_two,number_three,number_four,avarage,final_avarage;
    scanf("%lf %lf %lf %lf",&number_one,&number_two,&number_three,&number_four);

    avarage = ((number_one*2+number_two*3+number_three*4+number_four*1)/(2+3+4+1));


    {
            printf("Media: %.1lf\n",avarage);

        if(avarage>=7.0)
            printf("Aluno aprovado.\n");

        else if(avarage<5.0)
            printf("Aluno reprovado.\n");

 else if(avarage>5.0 && avarage<=6.9)
            {printf("Aluno em exame.\n");}


    }

        if(avarage>5.0 && avarage<=6.9){
                exam_score = (avarage+2+3+4+1);
          scanf("%lf",&exam_score);
        printf("Nota do exame: %.1lf\n",exam_score);

        final_avarage = ((exam_score+avarage)/2);

        if(final_avarage>=5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",final_avarage);
        }

        else  if(final_avarage<4.9)
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n",final_avarage);
        }
            }

        else if(avarage<5.0 && avarage>7.0)
            printf("\n");



    return 0;
}
