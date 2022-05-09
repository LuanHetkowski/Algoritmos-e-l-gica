#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	char repe;
	double quant=1, valor, valort, quantt, media, deci;
	int dec, n100, n50, n20, n10, n2, n1;
	
	do{
	while (quant >= 0){
	
	printf ("Informe a quantidade de um produto: ");
	scanf ("%lf", &quant);
	
	if (quant >= 0){

	printf ("Informe o valor unitário do produto: ");
	scanf ("%lf", &valor);
	
	
	valort = (valor * quant) + valort;
	quantt = quantt + quant;
		
}
}
	dec = valort;
	deci = valort - dec;
	media = valort / quantt;
	
	printf ("VALOR TOTAL DA  COMPRA R$ %.2lf\n", valort);
	printf ("VALOR MÉDIO DA COMPRA R$ %.2lf\n\n", media);
	printf ("O valor total da compra é %d reais e %.2lf centavos\n\n", dec, deci);
	printf ("%d reais equivale a:\n\n", dec);
	
	n100 = dec / 100;
	dec = dec % 100;
	
	n50 = dec / 50;
	dec = dec % 50;

	n20 = dec / 20;
	dec = dec % 20;
	
	n10 = dec / 10;
	dec = dec % 10;

	n2 = dec / 2;
	dec = dec % 2;
	
	n1 = dec / 1;
	dec = dec % 1;
	
	if (n100 > 0){
	printf ("%d nota(s) de 100\n", n100);}
	if (n50 > 0){
	printf ("%d nota(s) de 50\n", n50);}
	if (n20 > 0){
	printf ("%d nota(s) de 20\n", n20);}
	if (n10 > 0){
	printf ("%d nota(s) de 10\n", n10);}
	if (n2 > 0){
	printf ("%d nota(s) de 2\n", n2);}
	if (n1 > 0){
	printf ("%d moeda(s) de 1\n", n1);}
	printf ("\nDeseja repetir o programa (S ou N)? ");
	scanf (" %c", &repe);
	quant = 1, valort = 0, quantt = 0;
}while (repe == 's' || repe == 'S');
}
