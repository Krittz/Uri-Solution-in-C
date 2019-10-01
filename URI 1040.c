#include <stdio.h>
#include <stdlib.h>

int main(){
    double nota1;
    double nota2;
    double nota3;
    double nota4;
    double media;
    double exame;
    double soma;
    scanf("%lf", &nota1);
    scanf("%lf", &nota2);
    scanf("%lf", &nota3);
    scanf("%lf", &nota4);
    media =( (nota1*2) + (nota2*3) + (nota3*4) + (nota4*1)) / 10;
    printf("Media: %.1lf\n", media);
    if (media>=7.0){
        printf("Aluno aprovado.\n");
    }else if(media<5.0){
        printf("Aluno reprovado.\n");
    }
    if(media>=5.0 && media<7.0){
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
soma= (exame+media)/2;
        if(soma>=5.0){

            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", (exame+media)/2.0);
                    }else{
                        printf("Aluno reprovado.\n");
                        printf("Media final: %.1lf\n", (exame+media)/2.0);
                    }
    }

    return 0;

}
