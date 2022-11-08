#include <stdio.h>
#include <locale.h>
 
int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("MARCANDO O TEMPO DE JOGO\n\n");

    int HoraI,HoraF,Tempo;

    printf("\nDigite o horário de inicio (No sistema militar 24h): ");
    scanf("%d",&HoraI);
    printf("\nDigite o horário do termino (No sistema militar 24h): ");
    scanf("%d",&HoraF);
   
    if (HoraI < HoraF){
        Tempo = HoraF - HoraI;
        printf("\nO JOGO DUROU %.d HORA(S)\n",Tempo);  
    } else {
        Tempo = (24 - HoraI) + HoraF;
        printf("\nO JOGO DUROU %.d HORA(S)\n",Tempo);
    }

    return 0;
}