#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int i, x, alumnos, aprobados, promedio;
	
	printf("Calculo de notas.\n\n");
	alumnos = 25;
	aprobados = promedio = 0;
	for(i=0; i<alumnos; i++){
	
		do{
			
			printf("Ingresa la nota %i: ", i+1);
			scanf("%i%*c", &x);
			
			if(x>=0 && x<=20){
				promedio += x;
				if(x>=10){
					aprobados++;	
				}
				break;
			}else{
				printf("La nota ingresada es incorrecta, vuelva a intentarlo.\n");
			}
			
		}while(1);
		
	}
	
	printf("\nEl promedio de las notas de los %i alumnos es: %i\n", alumnos, promedio/alumnos);
	printf("La cantidad de aprobados es: %i\n", aprobados);
	printf("La cantidad de reprobados es: %i\n\n", alumnos - aprobados);

	system("pause");
	return 0;
}
