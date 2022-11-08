#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
    
    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("FÓRMULA DE BHASKARAS\n\n");

    double a, b, c, op, op2, op3;

    printf("\nDigite o valor de A: ");
    scanf("%lf", &a);
    printf("\nDigite o valor de B: ");
    scanf("%lf", &b);
    printf("\nDigite o valor de C: ");
    scanf("%lf", &c);

    op = (b*b) -4*a*c;

    if ((op >= 0) && (a != 0)) {
        op2 = ((-b) +sqrt(op))/(2*a);
        op3 = ((-b) -sqrt(op))/(2*a);
        printf("\nR1 = %.5lf", op2);
        printf("\nR1 = %.5lf", op3);
    } else {
        printf("\nImpossível calcular!");
    }
    

    return 0;
}