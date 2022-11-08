#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("JOGO ÍMPAR, PAR OU ROUBO\n\n");

    int p,j1,j2,r,a,duvida;
    
    printf("\nEscolha do jogador 1 -> (1 = Par) e (0 = Ímpar): ");
    scanf("%d",&p);
    printf("\nJogador 1 escolha um número: ");
    scanf("%d",&j1);
    printf("\nJogador 2 escolha um número: ");
    scanf("%d",&j2);
    printf("\nJogador 1 escolha -> (1 = Roubou) e (0 = Não Roubou");
    scanf("%d",&r);
    printf("\nJogador 2 escolha -> (1 = Acusar) e (0 = Não Acusar");
    scanf("%d",&a);
 
    if (p == 1) { //jogador escolheu par
      duvida = (j1 + j2) % 2;
      
      	if (duvida == 0 && r == 0) { //jogador não roubou
            if (a == 0) {
				printf("Jogador 1 ganha!\n");} //não foi acusado
			if (a == 1) {
				printf("Jogador 1 ganha!\n");} //foi acusado
      }
      
      	if (duvida != 0 && r == 1) { //jogador roubou
            if (a == 0) {
				printf("Jogador 1 ganha!\n");} //não foi acusado
			if (a == 1) {
				printf("Jogador 2 ganha!\n");} //foi acusado
      }
      
      if (duvida != 0 && r == 0) { //jogador não roubou
            if (a == 0) {
				printf("Jogador 2 ganha!\n");} //não foi acusado
			if (a == 1) {
				printf("Jogador 2 ganha!\n");} //foi acusado
      }
      
     	 if (duvida == 0 && r == 1) { //jogador roubou
            if (a == 0) {
				printf("Jogador 1 ganha!\n"); } //não foi acusado
			if (a == 1) {
				printf("Jogador 2 ganha!\n");} //foi acusado
	   	 }	
      } 
	  
	   if (!(p == 1)) { //jogador escolheu impar
        	duvida = (j1 + j2) % 2;
        
      		if (duvida >= 1 && r == 0) { //jogador não roubou
            	if (a == 0) {
				printf("Jogador 1 ganha!\n");} //não foi acusado
				if (a == 1) {
				printf("Jogador 1 ganha!\n");} //foi acusado
      			}
      		
      		if (duvida == 0 && r == 1) { //jogador não roubou
            	if (a == 0) {
				printf("Jogador 1 ganha!\n");} //não foi acusado
				if (a == 1) {
				printf("Jogador 2 ganha!\n");} //foi acusado
      			}
      			
      		if (duvida == 0 && r == 0) { //jogador roubou
            	if (a == 0) {
				printf("Jogador 2 ganha!\n");} //não foi acusado
				if (a == 1) {
				printf("Jogador 2 ganha!\n");} //foi acusado
     		 }	
      		
      		if (duvida >= 1 && r == 1) { //jogador não roubou
            	if (a == 0) {
				printf("Jogador 1 ganha!\n");} //não foi acusado
				if (a == 1) {
				printf("Jogador 2 ganha!\n");} //foi acusado
      			}
  		}	
      		
    return 0;
}