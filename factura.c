#include<stdio.h>
void main()
{
	char nombre[10],desP1[20],desP2[20];
	int cedula,numProd;
	float precioP1,cantP1,precioP2,cantP2,subtotal=0,pUniP1,pUniP2,iva,total=0;
	printf("Ingrese el nombre del cliente:");
	scanf("%s",&nombre);
	printf("Ingrese la cedula del cliente:");
	scanf("%d",&cedula);
	printf("Ingrese la descripcion del producto1:");
	scanf("%s",&desP1);
	printf("Ingrese la cantidad del producto1:");
	scanf("%f",&cantP1);
	printf("Ingrese el precio del producto1:");
	scanf("%f",&precioP1);
	printf("Ingrese la descripcion del producto2:");
	scanf("%s",&desP2);
	printf("Ingrese la cantidad del producto2:");
	scanf("%f",&cantP2);
	printf("Ingrese el precio del producto2:");
	scanf("%f",&precioP2);
	pUniP1=cantP1*precioP1;
	pUniP2=cantP2*precioP2;
	subtotal=pUniP1+pUniP2;
	iva=subtotal*0.12;
	total=subtotal+iva;
	printf("******Factura******\n");
	printf("Nombre del Cliente %s\n",nombre);
	printf("Cedula del Cliente %d\n",cedula);
	printf("Descripcion\tCantidad\tPrecio\tPunitario\n");
	printf("%s\t\t%.2f\t\t%.2f\t%.2f\n",desP1,cantP1,precioP1,pUniP1);
	printf("%s\t\t%.2f\t\t%.2f\t%.2f\n",desP2,cantP2,precioP2,pUniP2);
	printf("\t\t\t\t\t%.2f",subtotal);
	printf("El total a pagar es %.2f",total);
	
	
	
}
