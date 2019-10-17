/*Realizar un programa con un menu que contenga las siguientes opciones 1.Ecuacion cuadratica  2.Area del triangulo 3.Calcular cuantos años tiene una persona*/
#include<stdio.h>
#include<math.h>
int main(){
	int opcion,ano1,ano2,mes1,mes2,dia1,dia2,edad=0,meses=0,dias=0,edade,mesee;
	float a,b,c,x1=0,x2=0,ba,alt,area=0;
	printf("Menu principal\n");
	printf("1.Ecuacion cuadratica\n2.Area del triangulo\n3.Calcular edad\n");
	printf("Escoga la opcion: ");
	scanf("%d",&opcion);
	switch(opcion){
		case 1:
			printf("Ingrese el coeficiente a: ");
			scanf("%f",&a);
			printf("Ingrese el coeficiente b: ");
			scanf("%f",&b);
			printf("Ingrese el coeficiente c: ");
			scanf("%f",&c);
			x1=(-b+(sqrt(pow(b,2))-(4*a*c)))/2*a;
			x2=(-b-(sqrt(pow(b,2))-(4*a*c)))/2*a;
			printf("El reultado de x1 es: %.2f",x1);
			printf("\nEl resultado de x2 es: %.2f",x2);
		break;
		case 2:
			printf("Ingrese la base del triangulo: ");
			scanf("%f",&ba);
			printf("Ingrese la altura del triangulo: ");
			scanf("%f",&alt);
			area=(ba*alt)/2;
			printf("El area del triangulo es: %.2f",area);
		break;
		case 3:
			printf("Ingrese su fecha de nacimiento:");
			printf("\nIngrese dia:");
			scanf("%d",&dia1);
			printf("Ingrese mes:");
			scanf("%d",&mes1);
			printf("Ingrese año:");
			scanf("%d",&ano1);
			printf("Ingrese la actual: ");
			printf("\nIngrese dia:");
			scanf("%d",&dia2);
			printf("Ingrese mes:");
			scanf("%d",&mes2);
			printf("Ingrese año:");
			scanf("%d",&ano2);
			if(mes2<mes1){
			dias=dia2+30-dia1;
			meses=mes2-mes1+12;
			edad=ano2-ano1;
			edade=edad-1;
			printf("Su edad es: %d años con %d meses y %d dias",edade,meses,dias);}
			else if(mes1==mes2){
			dias=dia2+30-dia1;
			meses=mes1+1;
			edad=ano2-ano1;
			edade=edad-1;
			printf("Su edad es: %d años con %d meses y %d dias",edade,meses,dias);}
			
			else{
			dias=dia2+30-dia1;
			meses=mes2-mes1-1;
			edad=ano2-ano1;
			printf("Su edad es: %d años con %d meses y %d dias",edad,meses,dias);}
		break;
			
		default:
			printf("Opcion invalida");
		break;
	}
}









