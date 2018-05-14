#include <formatocoordenado.h>
#include <iostream>
#include <vector>

using namespace std;

void formatoCoordenado::crearDeMatrizCompleta(vector<vector<int>> matriz){
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
    int max;
    vector<int>::iterator first = columnas.begin();
    vector<int>::iterator last = columnas.end();
    max = *first;
    while (++first != last)
        if (max < *first) 
            max = *first;
    int w = 0;
    vector<vector<int>> matriz_completa(filas.back() + 1, vector<int>(max));
    for (int i = 0; i < filas.back() + 1; i++){
        for (int j = 0; j < max; j++){
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
