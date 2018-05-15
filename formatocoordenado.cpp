#include <formatocoordenado.h>
#include <iostream>
#include <vector>

using namespace std;

void FormatoCoordenado::crearDeMatrizCompleta(vector<vector<int>> matriz){
    m = matriz.size();
    n = matriz[0].size();
    for (int i = 0; i < matriz.size(); i++){
        for (int j = 0; j < matriz[i].size(); j++){
            if (matriz[i][j] != 0)
                valores.push_back(matriz[i][j]);
                filas.push_back(i);
                columnas.push_back(j);    
        }
    }
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