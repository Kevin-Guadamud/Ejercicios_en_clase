/*Realizar un programa en c que me calcule el area de un circulo*/

#include<stdio.h>
#include<math.h>
float areaCirculo(float);//Definicion de prototipo de funciones
//float areaCirculo(float radio)
int factorial(int);
int tablaMult(int,int);
void main()
{
	float radio;
	int num,num1,lim;
	printf("Area del circulo");
	printf("\nIngrese el radio: ");
	scanf("%f",&radio);
	printf("El area del circulo es %.2f",areaCirculo(radio));//Llamada a la funcion
	printf("\n\nFactorial");
	printf("\nIngrese el numero: ");
	scanf("%d",&num);
	printf("El factorial del numero %d es %d",num,factorial(num));//Llamada a la funcion
	printf("\n\nTabla de multiplicar");
	printf("\nIngrese el numero para la tabla: ");
	scanf("%d",&num1);
	printf("\Ingrese hasta que numero desea la tabla: ");
	scanf("%d",&lim);
	tablaMult(num1,lim);
}
float areaCirculo(float radio){
	float area=0,pi=3.1416;
	area=pi*pow(radio,2);
	return area;
}
int factorial(int num)
{
	int fact=1,cont=1;
	while(cont<=num)
	{
		fact=fact*cont;
		cont++;
	}
	return fact;
}
int tablaMult(int num1, int lim)
{
	int mult=1,cont=1;
	while(cont<=lim)
	{
		mult=num1*cont;
		printf("%dX%d=%d\n",num1,cont,mult);
		cont++;
	}
	return mult;
}
