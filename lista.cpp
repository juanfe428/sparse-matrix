#include "lista.h"

Lista::Lista(){
	act = NULL;
}

void Lista::anxLista(Elemento elem, Elemento c){
	Nodo* tmp;
	Nodo* nuevo = new Nodo;
	nuevo->dato = elem;
	nuevo->col = c;
	nuevo->sig = NULL;

	if(act == NULL)
		act = nuevo;
	else{
		tmp = act;
		while(tmp->sig != NULL)
			tmp = tmp->sig;
		tmp->sig = nuevo;
	}
}

void Lista::insLista(Elemento elem,Elemento c, int pos){
	Nodo *nuevo, *tmp;
	nuevo = new Nodo;
	nuevo->dato = elem;
	nuevo->col = c;
	nuevo->sig = NULL;

	if(pos >= 1 && pos <= longLista()){
		if(pos == 1){
			nuevo->sig = act;
			act = nuevo;
		}
		else{
			tmp = act;
			for(int i = 0; i < pos - 2; i++)
				tmp = tmp->sig;
			nuevo->sig = tmp->sig;
			tmp->sig = nuevo;
		}
	}
}

void Lista::elimLista(int pos){
	Nodo* tmp;
	if(pos >= 1 && pos <= longLista()){
		if(pos == 1)
			act = act->sig;
		else{
			tmp = act;
			for(int i = 0; i < pos-2; i++)
		   		tmp = tmp->sig;
			tmp->sig = tmp->sig->sig;
		}
	}
}

Nodo* Lista::getNodo(int pos){
	Nodo *tmp = act;

	for (int i = 1; i < pos; i++)
		tmp = tmp->sig;

	return tmp;
}
Elemento Lista::infoCol(Nodo* n){
	return n->col;
}
Elemento Lista::infoVal(Nodo* n){
	return n->dato;
}
Elemento Lista::infoLista(int pos){
   Nodo* tmp = act;
   
   for(int i = 1; i < pos; i++)
      tmp = tmp->sig;
    
   return tmp->dato;
}

int Lista::longLista(){
	Nodo* tmp = act;
	int cont = 0;

	while(tmp != NULL){
		tmp = tmp->sig;
		cont++;
	}

	return cont;
}

bool Lista::vaciaLista(){
   return act == NULL;
}