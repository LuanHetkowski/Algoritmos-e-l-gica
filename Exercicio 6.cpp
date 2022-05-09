#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	int num, cont=1, con, li=2;
	
	printf ("Informe um número positivo: ");
	scanf ("%d", &num);
	
	while (cont <= num){	
	printf (" \n");
	
	for (con = 1; con <= cont; con++) {
		printf (" %d ", cont);
}
cont ++;
}
return 0;
}
