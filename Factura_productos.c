// Realizar un programa en C que simule la facturacion de los productos
#include<stdio.h>
int main(){
	char cedula[10],nombre[10],descP1[10],descP2[10];
	int cantP1, cantP2;
	float precioP1,precioP2,subtotal,iva,total,pVta1,pVta2;
	printf("Ingrese el nombre del cliente:");
	scanf("%s",nombre);
	printf("Ingres cedula del cliente");
	scanf("%s",cedula);
	printf("Ingrese datos del producto 1 \n");
	printf("Ingrese la descripcion del producto:");
	scanf("%s",descP1);
	printf("Ingrese la cantidad del producto:");
	scanf("%d",&cantP1);
	printf("Ingrese el precio del producto:");
	scanf("%f",&precioP1);
	printf("Ingrese datos del producto 2 \n");
	printf("Ingrese la descripcion del producto:");
	scanf("%s",descP2);
	printf("Ingrese la cantidad del producto:");
	scanf("%d",&cantP2);
	printf("Ingrese el precio del producto:");
	scanf("%f",&precioP2);
	pVta1=precioP1*cantP1;
	pVta2=precioP2*cantP2;
	subtotal=pVta1+pVta2;
	iva=subtotal*0.12;
	total=subtotal+iva;
	
	printf("\n");
	printf("\t\t\t**********EMPRESA XYZ**********\n");
	printf("Cliente:%s\n",nombre);
	printf("Cedula:%s\n",cedula);
	printf("Descripcion\t\tCantidad\t\tPrecio\t\tPrecio_Venta\n");
	printf("%s\t\t\t%d\t\t\t%.2f\t\t%.2f\n",descP1,cantP1,precioP1,pVta1);
	printf("%s\t\t\t%d\t\t\t%.2f\t\t%.2f\n\n",descP2,cantP2,precioP2,pVta2);
	printf("\t\t\t\t\t\tSubtotal:\t%.2f\n",subtotal);
	printf("\t\t\t\t\t\tIva 12%:\t\t%.2f\n",iva);
	printf("\t\t\t\t\t\tTotal:\t\t%.2f",total);
}


