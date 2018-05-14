#include <formatocoordenado.h>
#include <iostream>
#include <vector>

using namespace std;

void formatoCoordenado::crearDeMatrizCompleta(vector<vector<int>> matriz){
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
vector<vector<int>> formatoCoordenado::obtenerMatrizCompleta(){
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
