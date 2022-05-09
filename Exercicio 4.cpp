#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int resto, num1, num2;  // As variáveis para o calculo do resto devem ser do tipo "int"
	
	printf ("Informe o primeiro valor: ");
	scanf ("%d", &num1);  // Faltava abrir aspas na leitura da variável e o "&" no nome da variável
	
	printf ("informe o segundo valor: ");
	scanf ("%d", &num2);  // Faltava abrir aspas na leitura da variável e o "&" no nome da variável

	if (num1 ==0 || num2 == 0){   // Colocada a condição para o num1 também; Trocado de "if else" para "if" , pois não possuia um "if" anterior
	
		printf ("Não é possivel realizar divisão por zero \n");  // Realizar a primeira verificação se o número digitado não é 0
	}		
	if (num1 > num2){
		resto = num1 % num2;
	}else{
		resto = num2 % num1;
	}
	printf ("O resto da divisão é %d \n", resto); // Trocada a variável de "%f" (float) para %d (int)
	
	return 0;
	}
