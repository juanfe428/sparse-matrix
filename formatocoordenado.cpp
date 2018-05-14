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
