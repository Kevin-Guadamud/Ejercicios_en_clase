#include<stdio.h>
int main(){
	int tabla,limite,mul,cont=1,suma=0;
	printf("Ingrese la tabla que desea visualizar: ");
	scanf("%d",&tabla);
	printf("Ingrese el numero hasta el cual quiere multiplicar: ");
	scanf("%d",&limite);
	while(cont<=limite){
		mul=tabla*cont;
		printf("%d X %d= %d\n",tabla,cont,mul);
		cont++;
		suma=suma+mul;
	}
	printf("La suma de los resultados es:%d",suma);
}

