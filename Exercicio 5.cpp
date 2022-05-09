#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h> // usada para mudar o n�mero aleat�rio

int main (){
	setlocale(LC_ALL, "Portuguese");
	int numa, num;
	
 	 srand(time(NULL)); // Muda a semente da fun��o rand, para troca do n�mero aleat�rio
 	 numa = rand() % 10; // limita para gerar n�meros aleat�rios de 0 at� 10
		 	
		 while (num != numa){
		 	printf ("Digite o n�mero m�gico: ");
		 	scanf ("%d", &num);
		 
		 if (num < numa){
		 	printf ("Errado, muito baixo!\n");
		 }else if (num > numa) {
		 	printf ("Errado, muito alto!\n");
		 }
	}
	printf ("Certo! %d � o n�mero m�gico", num);
	return 0;	
}
