#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	 
	char categoria;
	int quantidade;  
	float media, soma, total; // Para q m�dia seja "float" todas as variaveis devem ser "float"
	
	do{
		
		printf ("Informe a categoria: ");
		scanf (" %c", &categoria); // Ajustada a leitura da categoria para funcionamento do "Do-while", colocando um espa�o antes da "%"
		if (categoria == 'A' || categoria == 'B' || categoria == 'C' ){ //criada a condi��o "if" para ler quantidade somente se categoria v�lida
		printf ("Informe a quantidade: ");
		scanf ("%d", &quantidade);
}
		if(quantidade > 0){      // criada a condi��o "if" para que a quantidade seja maior q 0  
		
		soma = soma + quantidade;
		total ++;
		if (total > 0 || soma >0){  // V�lidado para que n�o seja realizada divis�o por 0
		
		media = soma / total;  // Mudado o c�lculo da m�dia por total para c�lculo correto da m�dia
	}else {
		printf ("M�dia deve calculada por n�mero maior que 0");
	}
		}else if (quantidade <= 0) {
		printf ("A quantidade deve ser maior que 0 \n");
	}	
	}while (categoria == 'A' || categoria == 'B' || categoria == 'C' ); // Criada mais uma condi��o "categoria C"
	
	printf ("A m�dia dos produtos � %.2f", media); 
	
	return 0;
}
