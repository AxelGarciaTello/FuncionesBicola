/*
 * Instituto Politecnico Nacional
 * Escuela Superior de Cómputo
 * Estructura de datos
 * Grupo: 1CV8
 * Alumnos: De la cruz Sierra Diana Paola
 * 			García Tello Axel
 * Profesor: Benjamin Luna Benoso
 * @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
 * Prueba de las funciones de la bicola
 * 
 * Fecha: 18 de febrero de 2019
*/

//Bibliotecas usadas en el programa
#include "bicola.h"

//Definimos el tipo de dato de nuestra estructura bicola
typedef int TipoDatoB;

//Prueba de las funciones de bicola
void pruebaBicola(){
	BICOLA a;
	TipoDatoB final, verFinal, verFrente;
	crearBicola(&a);
	ingresarFrente(&a, 5);
	ingresarFrente(&a, 4);
	ingresarFrente(&a, 3);
	ingresarFrente(&a, 2);
	ingresarFrente(&a, 1);
	ingresarFinal(&a, 1);
	ingresarFinal(&a, 2);
	ingresarFinal(&a, 3);
	ingresarFinal(&a, 4);
	ingresarFinal(&a, 5);
	verFrente=leerFrente(a);
	printf("LeerFrente: %d\n", verFrente);
	verFinal=leerFinal(a);
	printf("LeerFinal: %d\n", verFinal);
	final=eliminarFinal(&a);
	printf("EliminarFinal: %d\n", final);
	printf("Datos de la bicola\n");
	imprimirBicola(a);
}

//Función para ejecutar el programa
int main(void){
	pruebaBicola();
	return 0;
}
