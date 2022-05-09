#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int paciente, paciente1, paciente2;
	
	printf ("Paciente está bem? \n 1-Sim 2-Não \n");  
	scanf ("%d", &paciente1);
	
	if (paciente1 == 1){
	printf ("Paciente saudável!"); // Se paciente bem
	
	}else if (paciente1 == 2){
		printf ("Paciente tem dor? \n 1-Sim 2-Não \n");  // Se paciente mal
		scanf ("%d", &paciente2);
	}
	if (paciente2 == 1){
		printf ("Doente!");  // Se paciente com dor
		
	}else if (paciente2 == 2){
		printf ("Temperatura do paciente \n 1-Menor que 37°C 2-Maior que 37°C \n");  // Se paciente sem dor
		scanf ("%d", &paciente);
		
	}if (paciente == 1){
		printf ("Saudável!");  // Se temperatura do paciente < 37°C
		
	}else if (paciente == 2){  //Se temperatura  do paciente> 37°C
		printf ("Doente!");
	}
		
	return 0;
}
