/*Calcular el factorial de un numero*/
#include <stdio.h>
int main(){
	int cont,num,fac=1;
	printf("Ingrese el numero que desea el factorial: ");
	scanf("%d",&num);
	for(cont=1;cont<=num;cont++){
		fac=fac*cont;
	}
	printf("El factorial del numeros %d es:%d",num,fac);	
}
