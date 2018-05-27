#include "formatocoordenado.h"
#include <iostream>
#include <vector>

using namespace std;
void FormatoCoordenado::crearDeMatrizCompleta(vector< vector<int> >& matrix){
    m = matrix.size();
    n = matrix[0].size();
    for (int fil = 0; fil < matrix.size(); fil++)
    {
        for (int col = 0; col < matrix[fil].size(); col++)
        {
            if (matrix[fil][col] != 0)
            {
                valores.push_back(matrix[fil][col]);
                filas.push_back(fil);
                columnas.push_back(col);
            }
        }
    }

    for (int i = 0; i < valores.size(); i++)
    {
        cout << valores[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < valores.size(); i++)
    {
        cout << columnas[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < valores.size(); i++)
    {
        cout << filas[i] << " ";
    }
    cout << endl;
}


vector<vector<int>> FormatoCoordenado::obtenerMatrizCompleta(){
    int w = 0;
    vector<vector<int>> matriz_completa(m, vector<int>(n));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (i == filas[w] & j == columnas[w] & w + 1 <= valores.size()){
                matriz_completa[i][j] = valores[w];
                w++;
            }
            else{
                matriz_completa[i][j] = 0;
            }
        }
    }
    for (int fil = 0; fil < matriz_completa.size(); fil++)
    {
        for (int col = 0; col < matriz_completa[fil].size(); col++)
        {
            cout << "Matrix[" << fil << "][" << col << "]";
            cout << matriz_completa[fil][col] << endl;
        }
    }
    return matriz_completa;
}
int FormatoCoordenado::obtenerElemento(int i, int j){
    for (int w = 0; w < valores.size(); w++){
        if (filas[w] == i & columnas[w] == j)
            return valores[w];      
    }
    return 0;
} 
vector<int> FormatoCoordenado::obtenerFila(int j){
    vector<int> fila;
    for(int i = 0 ; i < filas.size() ; i++){
        if(filas[i] == j)
            fila.push_back(valores[i]);
    }
    return fila;
}
vector<int> FormatoCoordenado::obtenerColumna(int j){
        vector<int> columna;
        for(int i = 0 ; i < columnas.size(); i++){
            if(columnas[i]==j)
                columna.push_back(valores[i]);        
        }
        return columna;
}
vector<int> FormatoCoordenado::obtenerFilaDispersa(int j){
    vector<int> fila_d(n, 0);
    for (int i = 0; i < filas.size(); i++){
        if (filas[i] == j)
            fila_d[columnas[i]] = valores[i];
    }
    return fila_d;
}
vector<int> FormatoCoordenado::obtenerColumnaDispersa(int j){
    vector<int> columna_d(m, 0);
    for (int i = 0; i < columnas.size(); i++){
        if (columnas[i] == j)
            columna_d[filas[i]] = valores[i];
    }
    return columna_d;
}
int FormatoCoordenado::obtenerNumeroElmentos(){
    return valores.size();
}
void FormatoCoordenado::modificarPosicion(int i, int j , int val){
    for(int n = 0 ; i < filas.size() ; i++){
        if(filas[n] == i && columnas[n] == j ){
            valores[n] = val;
        }

    }


}