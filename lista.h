/*
 * Autor: Carlos Ramírez
 * Fecha de creación: 30 de Octubre
 * Fecha última modificación: 30 de Octubre
 * Versión: 1.0
 * 
 * Archivo encabezado libreria TAD Lista
 * Representación Estructuras Encadenadas Simples
 */

#ifndef __LISTA_H
#define __LISTA_H

#include <iostream>

using namespace std;

/************************
* ESTRUCTURAS DE DATOS *
************************/
typedef int Elemento;

class Nodo{
   public:
     Elemento dato;
	 Elemento col;
   	 Nodo* sig;
};

class Lista{
	private:
    	Nodo* act;

   public:
   	    /************************
		* OPERACIONES DEL TAD *
		************************/

		/* Constructoras */
   		Lista();

   		/* Modificadoras */
   		void anxLista(Elemento elem ,Elemento c);
   		void insLista(Elemento elem, Elemento c, int pos);
   		void elimLista(int pos);

   		/* Analizadoras */
		Nodo* getNodo(int pos);
		Elemento infoVal(Nodo* n);
   		Elemento infoLista(int pos);
		Elemento infoCol(Nodo* n);
   		int longLista();
   		bool vaciaLista();
};

#endif