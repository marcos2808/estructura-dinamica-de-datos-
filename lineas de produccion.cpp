/* hacer un programa que solicite al usuario de una empresa la cantidad de lines de prudccion en su empresa,
luego solicitar los tiempos de dichas lineaas, sacar su media y determinar cuantas lineas estan trabajando de mas
eficiente*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int l,i,contador=0;
float *lineas, promedio;
void datos();
void calculo();

int main(){
	printf("bienvenido mediante este programa determinaremos cuantas lineas de produccion trabajan de manera eficiente");
	datos();
	calculo();
	printf("\nel promedio de sus lineas es de: %.4f\n",promedio);
	printf("\nhay %d de lineas trabajando de manera eficiente",contador);	
	free(lineas);
	
	getch();
	return 0;
}
void datos(){
	
	printf("\ncantidad de lineas de produccion por favor: ");
	scanf("%d",&l);
	
	lineas = (float*)malloc(l*sizeof(float));
	
}
void calculo(){
	promedio=0;
	
	for(i=0;i<l;i++){
		printf("linea #: %d\n",i+1);
		scanf("%f",&lineas[i]);
		promedio= promedio + lineas[i];
	}
		promedio = promedio/l;
	for(i=0;i<l;i++){
		if(lineas[i]<promedio){
			contador++;
			
		}
	}
}
