#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("FUSO HORÁRIO");

    int S;
    int T;
    int F;
    int H;

    printf("\nHorário de Saída: ");
    scanf("%d",&S);
    printf("\nTempo da Viagem: ");
    scanf("%d",&T);
    printf("\nFuso Horário: ");
    scanf("%d",&F);

   H = S + T + F;
   
   if (H == 24 || H == 0) {
   	printf("0\n");
   } else if (H > 24) {
   		H = H - 24;
   		printf("%d\n",H);
   	 } 
        else if (H > 0 && H <= 23) {
   			printf("%d\n",H);
		      }
      else {
   		    if (H < 0) {
   			H = H + 24;
   			printf("%d\n",H);
   			}
   		   }

    return 0;
}