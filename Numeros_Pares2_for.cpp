#include<stdio.h>
int main(){
	int cont,par=0,nnum,suma=0,suma1=0;
	printf("Cuantos numeros desea generar: ");
	scanf("%d",&nnum);
	for(cont=1;cont<=nnum;cont++){
		par=par+2;
		printf("%d=%d\n",cont,par);
		suma=suma+par;
		suma1=suma1+cont;		
	}
	printf("La suma de los numeros pares es:%d",suma);
	printf("\nLa suma de los numeros impares es:%d",suma1);
}

