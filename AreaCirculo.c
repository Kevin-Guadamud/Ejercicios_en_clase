#include<stdio.h> //Definicion de librerias
#define pi 3.14   //Definicion de constantes
int main(){		  //Definicion de la funcion principal
	float r,area; //Declaracion de variables
	printf("Ingrese radio del circulo");	//Impresion pantalla
	scanf("%f",&r);							//Lectura de las variables
	area=r*r*pi;							//proceso
	printf("El area del circulo es: %.2f",area); 	//salida

	return 0;
}

