#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese_Brazil");
    
    printf("TESTE DE SELEÇÃO 1\n\n");

    int a,b,c,d;

    printf("\nDigite o valor 1: ");
    scanf("%d", &a);
    printf("\nDigite o valor 2: ");
    scanf("%d", &b);
    printf("\nDigite o valor 3: ");
    scanf("%d", &c);
    printf("\nDigite o valor 4: ");
    scanf("%d", &d);

    if ((b > c) && (d > a)) {
        if ((c+d) > (a+b)) {
            if ((c>0) && (d>0)) {
                if(a%2 == 0) {
                    printf("\nValores aceitos!");
                }

            }
            
        }
        
    } else {
        printf("Valores não aceitos!");
    }
    

    return 0;
}