#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h> // usada para mudar o número aleatório

int main (){
	setlocale(LC_ALL, "Portuguese");
	int numa, num;
	
 	 srand(time(NULL)); // Muda a semente da função rand, para troca do número aleatório
 	 numa = rand() % 10; // limita para gerar números aleatórios de 0 até 10
		 	
		 while (num != numa){
		 	printf ("Digite o número mágico: ");
		 	scanf ("%d", &num);
		 
		 if (num < numa){
		 	printf ("Errado, muito baixo!\n");
		 }else if (num > numa) {
		 	printf ("Errado, muito alto!\n");
		 }
	}
	printf ("Certo! %d é o número mágico", num);
	return 0;	
}
