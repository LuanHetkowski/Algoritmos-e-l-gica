#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int resto, num1, num2;  // As vari�veis para o calculo do resto devem ser do tipo "int"
	
	printf ("Informe o primeiro valor: ");
	scanf ("%d", &num1);  // Faltava abrir aspas na leitura da vari�vel e o "&" no nome da vari�vel
	
	printf ("informe o segundo valor: ");
	scanf ("%d", &num2);  // Faltava abrir aspas na leitura da vari�vel e o "&" no nome da vari�vel

	if (num1 ==0 || num2 == 0){   // Colocada a condi��o para o num1 tamb�m; Trocado de "if else" para "if" , pois n�o possuia um "if" anterior
	
		printf ("N�o � possivel realizar divis�o por zero \n");  // Realizar a primeira verifica��o se o n�mero digitado n�o � 0
	}		
	if (num1 > num2){
		resto = num1 % num2;
	}else{
		resto = num2 % num1;
	}
	printf ("O resto da divis�o � %d \n", resto); // Trocada a vari�vel de "%f" (float) para %d (int)
	
	return 0;
	}
