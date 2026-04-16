#include <stdio.h>

double peso;
double altura;
void ingresarDatosUsuario();
double calcularImc(double, double);
void resultadoImc();


int main(){
	resultadoImc();
	return 0;
}

void resultadoImc(){
	ingresarDatosUsuario();
	calcularImc(peso, altura);
}

void ingresarDatosUsuario(){
	printf("### Ingrese su peso ###\n-");
	scanf("%lf", &peso);
	fflush(stdin);
	printf("### Ingrese su altura ###\n-");
	scanf("%lf", &altura);
}

double calcularImc(double p, double a){
	a = a / 100;
	double resultado = p / (a * a);
	printf("Su peso es %.2lf kg y su altura es de %.2lf mts. Su IMC es de %.2lf", p, a, resultado);
	return resultado;
}