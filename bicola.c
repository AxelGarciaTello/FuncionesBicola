/*
 * Instituto Politecnico Nacional
 * Escuela Superior de Cómputo
 * Estructura de datos
 * Grupo: 1CV8
 * Alumnos: De la cruz Sierra Diana Paola
 * 			García Tello Axel
 * Profesor: Benjamin Luna Benoso
 * @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
 * Funciones para el manejo de una bicola
 * 
 * Fecha: 18 de febrero de 2019
*/

//Bibliotecas usadas en el programa
#include "bicola.h"

//Definimos el tipo de dato de nuestra estructura bicola
typedef int TipoDatoB;

//Función para inicialisar la bicola
void crearBicola(BICOLA *a){
	a->frente=a->final=0;
}

//Función para indicar si la bicola esta llena
int bicolaLlena(BICOLA a){
	return (a.frente==(a.final+1)%TAM?1:0);
}

//Función para ingresar un valor en frente de la bicola
void ingresarFrente(BICOLA *a, TipoDatoB x){
	int indice;
	if(bicolaLlena(*a)){
		printf("Error. Bicola llena.\n");
		exit(-1);
	}
	indice=a->frente;
	if(indice==0){
		a->frente=TAM-1;
	}
	else{
		a->frente=a->frente-1;
	}
	a->datoBicola[indice]=x;
}

//Función para ingresar un valor al final de la bicola
void ingresarFinal(BICOLA *a, TipoDatoB x){
	if(bicolaLlena(*a)){
		printf("Error. Bicola llena.\n");
		exit(-1);
	}
	a->final=(a->final+1)%TAM;
	a->datoBicola[a->final]=x;
}

//Función para indicar si una bicola esta vacia
int bicolaVacia(BICOLA a){
	return(a.frente==a.final?1:0);
}

//Función para sacar el primer valor de la bicola
TipoDatoB eliminarFrente(BICOLA *a){
	if(bicolaVacia(*a)){
		printf("Error. Bicola vacia.\n");
		exit(-1);
	}
	a->frente=(a->frente+1)%TAM;
	return a->datoBicola[a->frente];
}

//Función para sacar el ultimo valor de la bicola
TipoDatoB eliminarFinal(BICOLA *a){
	int indice;
	if(bicolaVacia(*a)){
		printf("Error. Bicola vacia.\n");
		exit(-1);
	}
	indice=a->final;
	if(indice==0){
		a->final=TAM-1;
	}
	else{
		a->final=a->final-1;
	}
	return a->datoBicola[indice];
}

//Función para mostrar el primer valor de la bicola
TipoDatoB leerFrente(BICOLA a){
	if(bicolaVacia(a)){
		printf("Error. Bicola vacia.\n");
		exit(-1);
	}
	a.frente=(a.frente+1)%TAM;
	return a.datoBicola[a.frente];
}

//Función para mostrar el ultimo valor de la bicola
TipoDatoB leerFinal(BICOLA a){
	int indice;
	if(bicolaVacia(a)){
		printf("Error. Bicola vacia.\n");
		exit(-1);
	}
	indice=a.final;
	if(indice==0){
		a.final=TAM-1;
	}
	else{
		a.final=a.final-1;
	}
	return a.datoBicola[indice];
}

//Función para imprimir la bicola
void imprimirBicola(BICOLA a){
	TipoDatoB salida;
	while(!bicolaVacia(a)){
		salida=eliminarFrente(&a);
		printf("%d\n",salida);
	}
}
