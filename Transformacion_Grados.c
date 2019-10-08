//Realizar un programa que permite convertir grados centigrados en farenheit o voceversa

#include <stdio.h>
int main(){
	float cent,farenh,gradoscent=0,gradosfarenh=0,opci;
	printf("Menu principal\n1.Grados centigrados a farenheit\n2.Grados farenheit a centigrados");
	printf("\nEscoja la opcion: ");
	scanf("%d",&opci);
	if(opci==1){
		printf("Ingrese los grados centigrados: ");
		scanf("%f",&cent);
		gradosfarenh=((cent*9)/5)+32;
		printf("Grados farenheit %.2f",gradosfarenh);}
	else
		printf("Ingrese los grados farenheit: ");
		scanf("%f",&farenh);
		gradoscent=((farenh-32)*5)/9;
		printf("Grados centigrados %.2f\n",gradoscent);
			
}
