#include <stdio.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("CALCULADORADE MÉDIA\n\n");

    float N1, N2, N3, N4, N5, M, MF;
    
    printf("\nDigite a nota da N1: ");
    scanf("%f", &N1);
    printf("\nDigite a nota da N2: ");
    scanf("%f", &N2);
    printf("\nDigite a nota da N3: ");
    scanf("%f", &N3);
    printf("\nDigite a nota da N4: ");
    scanf("%f", &N4);
    
    M= ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
    
    if(M >= 7){
        printf("Media: %.1f\nAluno aprovado.", M);
    }
    if(M < 5){
        printf("Media: %.1f\nAluno reprovado.", M);
    }
    if((M >= 5) && (M<7)){
        printf("\nMédia: %.1f\n", M);
        printf("\nAluno em exame.\n");
        printf("\nDigite a nota da N5: ");
        scanf("%f", &N5);
        printf("\nNota do exame: %.1f\n", N5);
        MF= (N5+M)/2;
        if(MF >= 5) {
            printf("\nAluno aprovado!\n");
        } else {
            printf("\nAluno reprovado!\n");
        }
        printf("\nMedia final: %.1f", MF);
    }
 
    return 0;
}