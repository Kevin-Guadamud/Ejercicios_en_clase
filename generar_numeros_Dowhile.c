/*Realizar un programa que determine N numeros*/
#include<stdio.h>
int main(){
	int cont=1,nnum,suma=0;
	printf("Cuantos numeros desea generar");
	scanf("%d",&nnum);
	do{
		printf("%d\n",cont);
		suma=suma+cont;
		cont++;
	}while(cont<=nnum);
	printf("La suma de %d numeros es: %d",nnum,suma);
}

