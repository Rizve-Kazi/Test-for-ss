
             else  if( (a>=b+c || b>=a+c || c>=a+b) && (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)){
            printf("NAO FORMA TRIANGULO\n");    1+2
           printf("TRIANGULO RETANGULO\n");}

else if( (a>=b+c || b>=a+c || c>=a+b) && (a*a>b*b+c*c || b*b>a*a+c*c || c*c>a*a+b*b) ){
             printf("NAO FORMA TRIANGULO\n");1+3
          printf("TRIANGULO OBTUSANGULO\n");}


       else if((a>=b+c || b>=a+c || c>=a+b) && (a*a<b*b+c*c || c*c<a*a+b*b  || b*b<a*a+c*c)){
             printf("NAO FORMA TRIANGULO\n");}1+4
                printf("TRIANGULO ACUTANGULO\n");}


       else if((a>=b+c || b>=a+c || c>=a+b) && (a==b==c)){
             printf("NAO FORMA TRIANGULO\n");1+5
           printf("TRIANGULO EQUILATERO\n");}


      else if((a>=b+c || b>=a+c || c>=a+b) && (a==b || a==c || b==c)){
             printf("NAO FORMA TRIANGULO\n");1+6
             printf("TRIANGULO ISOSCELES\n");}

