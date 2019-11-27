#include <stdio.h>
#include<windows.h>

int N,a,b,c,d,e,V=0,F=0,repetir;
char nombre[100];
int main() {
		do{
	printf("     \"Evaluacion de constucciones despues de un sismo\" \n         ");	
	printf("ingrese solo su nombre\n",162);
	scanf("%s",nombre);
	printf("De acuerdo a un previo analisis de las condiciones y calidad de la contruccion establecer mediante el uso de la letra V si se presenta una calidad alta en en el objetivo a evaluar de lo contrario, hacer uso de la letra F.\n\n");
	printf("Seleccione una de las siguientes opciones \n");
	printf("1. Condicion del suelo . \n");
	printf("2. Calidad de materiales . \n");
	printf("3. Cantidad de poblacion . \n");
	printf("4. Condiciones de la ubicacion . \n");
	printf("\n5. Desicion final . \n\n");
	scanf("%d", &N);
	switch (N)
	{
		case 1: 
			printf("Ingrese V o F si la considerando si la condicion del suelo es apto para la magnitud de la construccion: \n");
			printf("1)V\n");
			printf("2)F\n");
			scanf("%d", &a);
			if (a!=2)
			{
				printf("La calidad SI es buena. \n");
			}
				else
			{
					printf("La calidad NO es buena. \n");
			}
		break;
		case 2:
			printf("Ingrese V o F consierando si la calidad de los materiales empleados en la construccion es buena: \n");
			printf("1)V\n");
			printf("2)F\n");
			scanf("%d", &b);
			if (b!=2) 
			{
				printf("La calidad de los materiales es buena. \n");
			}
			else
			{
				printf("La calidad de los materiales NO es buena. \n");
				}
		break;
		case 3:
			printf ("Ingrese V o F considerando si la cantiad de poblacion es adecuada para la construccicon: \n");
			printf("1)V\n");
			printf("2)F\n");
			scanf("%d",&c);
			if(c!=2)
			{
				printf("La  cantidad de poblacion es adecuada \n");
			}
			else {
				printf("La cantidad de poblacion NO es adecuada\n");
			}
		break;
		case 4:
			printf("Ingrese V o F considerando si los alrededores de la cosntruccion son optimos: \n");
			printf("1)V\n");
			printf("2)F\n");
			scanf("%d",&d);
			if(d!=2)
			{
				printf("Los alrededores son optimos\n");
			}
			else {
				printf("Los alrededores NO son optimos \n");
			}
		break;
		case 5:
			printf("Ingrese el numero de veces que su resultado fue negativo:\n\n");
			printf("\n1) 1\n");
			printf("2) 2\n");
			printf("3) 3\n");
			printf("4) 4\n");
			scanf("%d",&e);
			if(e>=3)
			{
				printf("\nSe recomienda demoler la construccion.\n");
			}
			else {
				printf("\nSe recomienda un estudio mas exhaustivo por seguridad,\n");
			}
		break;
		default:
			printf("datos erroneos");
		}
		
		printf("\n\n¿Quieres volver a intentarlo?     (1)S%c    \t\n",161);
			scanf("%d",&repetir);
		system("cls");
	}while(repetir==1);
	
		
	return 0;
} 

