#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	char repe;
	int limi1 , limi2, numl, linha, cont, resul;
	
	do{
	printf ("Informe o valor limite inferior do intervalo: ");
	scanf ("%d", &limi1);

	printf ("Informe  o valor do limite superior do intervalo: ");
	scanf ("%d", &limi2);
	
	printf ("Informe quantos números deseja imprimir por linha: ");
	scanf ("%d", &numl);
	for (limi1; limi1 <= limi2; limi1++){
		if (limi1 == 0 || limi1 == 1){
			resul = 0;
} else {
		resul = 1; 
	for(cont = 2; cont < limi1; cont++){   // teste de número primo
		if (limi1 % cont == 0){
			resul = 0; 
}
}
}
	if (resul == 1){
		printf("%d ", limi1);
		 linha ++;
	if (linha == numl){  //pula linha
		printf ("\n");
		linha = 0;
}
}
}
	printf ("\nDeseja repetir o programa (S ou N)? \n");
	scanf (" %c", &repe);
}while (repe == 's' || repe == 'S');
return 0;		
}
