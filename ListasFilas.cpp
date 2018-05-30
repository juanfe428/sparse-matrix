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
    m = matrix.size();
    n = matrix[0].size();
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
vector<vector<int>> MatrizDispersa::obtenerMatrizCompleta(){
    vector<vector<int>> matriz_completa(m, vector<int>(n));
    for(int i = 0; i < m ; i++ ){
        for(int j = 0 ; j < n ; j++){
            matriz_completa[i][j] = 0;
        }
    }
    for (int fil = 0; fil < valores.size(); fil++){
        for (int col = 1; col <= valores[fil].longLista(); col++){
            Nodo *n = valores[fil].getNodo(col);
            matriz_completa[fil][valores[fil].infoCol(n)] = valores[fil].infoVal(n);
        }
    }
    return matriz_completa;
}

int MatrizDispersa::obtenerElemento(int i , int j){
    if(valores[i].vaciaLista()){
        return 0;
    }
    for(int n = 0 ; n <= valores[i].longLista(); n++){
        Nodo *t = valores[i].getNodo(n);
        if(valores[i].infoCol(t) == j ){
            return valores[i].infoVal(t);
        }
    }
    return 0;
}
vector<int> MatrizDispersa::obtenerFila(int i){
    vector<int> fila;
    for(int n = 1 ; n <= valores[i].longLista(); n++){
        fila.push_back(valores[i].infoVal(valores[i].getNodo(n)));
    }
    return fila;
}
vector<int> MatrizDispersa::obtenerColumna(int j ){
    vector<int> columna;
    for (int fil = 0; fil < valores.size(); fil++){
        for (int col = 1; col <= valores[fil].longLista(); col++){
            Nodo *n = valores[fil].getNodo(col);
            if(valores[fil].infoCol(n) == j)
                columna.push_back(valores[fil].infoVal(n));
        }
    }
    return columna;
}

vector<int> MatrizDispersa::obtenerFilaDispersa(int i){
    vector<int> fila_d(m, 0);
    for (int n = 1; n <= valores[i].longLista(); n++){
        Nodo* t = valores[i].getNodo(n);
        fila_d[valores[i].infoCol(t)] = valores[i].infoVal(t);
    }
    return fila_d;
}   
vector<int> MatrizDispersa::obtenerColumnaDispersa(int j){
    vector<int> columna_d(n,0);
    for (int fil = 0; fil < valores.size(); fil++){
        for (int col = 1; col <= valores[fil].longLista(); col++){
            Nodo *n = valores[fil].getNodo(col);
            if (valores[fil].infoCol(n) == j)
            columna_d[fil]=(valores[fil].infoVal(n));
        }
    }
    return columna_d;
}
int MatrizDispersa::obtenerNumeroElmentos(){
    int n = 0;
    for (int fil = 0; fil < valores.size(); fil++){
        n += valores[fil].longLista();
    }
    return n;
}