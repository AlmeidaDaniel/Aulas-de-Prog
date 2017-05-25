//1) Ler dois pontos em R distintos; A=(x1, y1) ; B=(x2, y2).
//2) Se y1 = y2, a equação da reta y = y1.
//3) Se x1 = x2, a equação da reta x = x1.
//4) se não for os casos acima, calcular "a, b", dado que a = (y1 - y2)/(x1 - x2); b = y1 - a * x1;
//Equação da Reta: y = ax + b
#include <stdio.h>
float x1, x2, y1, y2, a, b;
void Pontos(){
	printf("Descreva o Ponto A: ");
	printf("\nx1: ");
	scanf("%f", &x1);
	printf("\ny1: ");
	scanf("%f", &y1);
	do{
		printf("\nAgora Descreva o Ponto B: ");
		printf("\nx2: ");
		scanf("%f", &x2);
		printf("\ny2: ");
		scanf("%f", &y2);
	}while ((x1 == x2) && (y1 == y2));
}
void Reta(){
	if (y1 == y2){
		printf("\nA equacao da reta e: y = %.2f", y1);
	}
	if (x1 == x2){
		printf("\nA equacao da reta e: x = %.2f", x1);
	}
	else{
		a = (y1-y2)/(x1-x2);
		b = y1 - a*x1;
		printf("\nA equacao da reta e: y = %.0fx + %.0f", a, b);
	}
}
main (){
	Pontos();
	Reta();
}
