/*Realizar un programa que deje ingresar N numeros pares*/
#include<stdio.h>
int main(){
	int cont=2,suma=0,nnum;
	printf("Cuantos numeros desea generar");
	scanf("%d",&nnum);
	do{
		printf("%d\n",cont);
		cont=cont+2;
	}while(cont<=nnum*2);
}
