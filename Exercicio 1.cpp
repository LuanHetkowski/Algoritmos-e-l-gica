#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	 
	char categoria;
	int quantidade;  
	float media, soma, total; // Para q média seja "float" todas as variaveis devem ser "float"
	
	do{
		
		printf ("Informe a categoria: ");
		scanf (" %c", &categoria); // Ajustada a leitura da categoria para funcionamento do "Do-while", colocando um espaço antes da "%"
		if (categoria == 'A' || categoria == 'B' || categoria == 'C' ){ //criada a condição "if" para ler quantidade somente se categoria válida
		printf ("Informe a quantidade: ");
		scanf ("%d", &quantidade);
}
		if(quantidade > 0){      // criada a condição "if" para que a quantidade seja maior q 0  
		
		soma = soma + quantidade;
		total ++;
		if (total > 0 || soma >0){  // Válidado para que não seja realizada divisão por 0
		
		media = soma / total;  // Mudado o cálculo da média por total para cálculo correto da média
	}else {
		printf ("Média deve calculada por número maior que 0");
	}
		}else if (quantidade <= 0) {
		printf ("A quantidade deve ser maior que 0 \n");
	}	
	}while (categoria == 'A' || categoria == 'B' || categoria == 'C' ); // Criada mais uma condição "categoria C"
	
	printf ("A média dos produtos é %.2f", media); 
	
	return 0;
}
