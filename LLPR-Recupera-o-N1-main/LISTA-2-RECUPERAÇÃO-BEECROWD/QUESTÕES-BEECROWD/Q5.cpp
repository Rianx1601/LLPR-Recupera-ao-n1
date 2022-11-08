#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("TIPOS DE TRIÂNGULOS\n\n");

    double a, b, c, A, B, C;

    printf("Digite o os três lados do triângulo\n");

    printf("\nLado 1: ");
    scanf("%lf", &a);
    printf("\nLado 2: ");
    scanf("%lf", &b);
    printf("\nLado 3: ");
    scanf("%lf", &c);

    if (a>=b && a>=c) {
		A = a;
		B = b;
		C = c;	
	}
	if (b>=a && b>=c) {
		A = b;
		B = a;
		C = c;	
	}
	if (c>=b && c>=a) {
		A = c;
		B = b;
		C = a;	
	}
	
    if (A>=B+C) {
    	printf("\nNAO FORMA TRIANGULO\n");
	}
	if (!(A>=B+C)) {
	if ((A*A)==(B*B)+(C*C)) {
    	printf("\nTRIANGULO RETANGULO\n");
	}
	if ((A*A)>(B*B)+(C*C)) {
    	printf("\nTRIANGULO OBTUSANGULO\n");
	}
	if ((A*A)<(B*B)+(C*C)) {
    	printf("\nTRIANGULO ACUTANGULO\n");
	}
	if ((A==B) && (B==C) && (C==A)) {
    	printf("\nTRIANGULO EQUILATERO\n");
	}
	if ((A==B && A!=C)||(B==C && B!=A)||(C==A && C!=B)) {
    	printf("\nTRIANGULO ISOSCELES\n");
	}
	}
    return 0;
}