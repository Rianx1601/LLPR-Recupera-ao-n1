#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("ORDENADOR DE NÚMEROS (Crescente)\n\n");

    int a, b, c;

    printf("\nDigite o primeiro número: ");
    scanf("%d", &a);
    printf("\nDigite o segundo número: ");
    scanf("%d", &b);
    printf("\nDigite o terceiro número: ");
    scanf("%d", &c);

    if(a < b && b < c){
        printf("%d\n" "%d\n" "%d\n", a,b,c);
    }
    	if(a < c && c < b){
        	printf("%d\n" "%d\n" "%d\n", a,c,b);    
    	}
    		if(b < a && a < c){
        		printf("%d\n" "%d\n" "%d\n", b,a,c);
    		}
    			if(b < c && c < a){
    				printf("%d\n" "%d\n" "%d\n", b,c,a);
				}
					if(c < a && a < b){
						printf("%d\n" "%d\n" "%d\n", c,a,b);
					}
						if(c < b && b < a){
							printf("%d\n" "%d\n" "%d\n", c,b,a);
						}
						
						printf("\n");
						
						printf("%d\n",a);
						printf("%d\n",b);
						printf("%d\n",c);

    return 0;
}