/*Realizar un programa en C que determine que una persona es mayor o menor de edad
Datos entrada
Entero Edad
Proceso 
Escribir "Ingrese su edad"
Leer edad
	Si (edad>=18)
		Escribir "Mayor de edad"
	Sino
		Escribir "Menor de edad"
	Finsi
Salida
Mayor o menor de edad */

#include<stdio.h>

int main(){
	int edad;
	char nombre[10];
	printf("Ingrese nombre: ");
	scanf("%s",nombre);
	printf("Ingrese la edad: ");
	scanf("%d",&edad);
	if (edad>=18)
		printf("%s es mayor de edad",nombre);
	else
		printf("%s es menor de edad",nombre);	
}
