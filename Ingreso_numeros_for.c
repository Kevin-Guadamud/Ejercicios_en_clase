/*Realizar un programa que deje ingresar N numeros*/
#include<stdio.h>
int main(){
	int cont,num,suma=0,nnum;
	printf("Cuantos numeros desea generar: ");
	scanf("%d",&nnum);
	for(cont=1;cont<=nnum;cont++){
		printf("Ingrese el numero %d:",cont);
		scanf("%d",&num);
		suma=suma+num;
	}
	printf("La suma de %d numeros es: %d",nnum,suma);
}
