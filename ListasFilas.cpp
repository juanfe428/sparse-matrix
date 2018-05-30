#include  "ListasFilas.h"
#include "lista.h"
#include <iostream>
#include <vector>

void MatrizDispersa::imprimir(){
    for (int fil = 0; fil < valores.size(); fil++){
        for (int col = 1; col <= valores[fil].longLista(); col++){
            Nodo *n = valores[fil].getNodo(col);
            cout << "fila :" << fil << " " << valores[fil].infoVal(n) << "col" << valores[fil].infoCol(n) << endl;   
        }
    }
}
void MatrizDispersa::crearDeMatrizCompleta(vector< vector<int> >& matrix){
    Lista lst;
    for (int i = 0; i < matrix.size(); i++){
        valores.push_back(lst);
    }
    for (int fil = 0; fil < matrix.size(); fil++){
        for (int col = 0; col < matrix[fil].size(); col++){
            if (matrix[fil][col] != 0)
                valores[fil].anxLista(matrix[fil][col], col);
        }
    }
}
