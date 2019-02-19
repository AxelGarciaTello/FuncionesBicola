/*
 * Instituto Politecnico Nacional
 * Escuela Superior de Cómputo
 * Estructura de datos
 * Grupo: 1CV8
 * Alumnos: De la cruz Sierra Diana Paola
 * 			García Tello Axel
 * Profesor: Benjamin Luna Benoso
 * @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
 * Cabecera para las funciones de una bicola
 * 
 * Fecha: 18 de febrero de 2019
*/

//Bibliotecas usadas en el programa
#include <stdio.h>
#include <stdlib.h>
//Tamaño de nuestra bicola
#define TAM 50

//Definimos el tipo de dato de nuestra estructura bicola
typedef int TipoDatoB;

//Creamos la estructura bicola
typedef struct bicola{
	int frente, final;
	TipoDatoB datoBicola[TAM];
} BICOLA;

//Cabeceras de las funciones para el manejo de una bicola
void crearBicola(BICOLA *);
int bicolaLlena(BICOLA);
void ingresarFrente(BICOLA *, TipoDatoB);
void ingresarFinal(BICOLA *, TipoDatoB);
int bicolaVacia(BICOLA);
TipoDatoB eliminarFrente(BICOLA *);
TipoDatoB eliminarFinal(BICOLA *);
TipoDatoB leerFrente(BICOLA);
TipoDatoB leerFinal(BICOLA);
void imprimirBicola(BICOLA);
