#include <iostream>
#include "formatocoordenado.h"
#include <vector>

int main(){
	int fil = 2, col = 3;
    vector<vector<int>> matrix(fil, vector<int>(col));
    vector<vector<int>> matrix2;
    vector<int> f;
    vector<int> c;
    vector<int> v;
    for (int fil = 0; fil < matrix.size(); fil++){
        for (int col = 0; col < matrix[fil].size(); col++){
            cout << "Matrix[" << fil << "][" << col << "]\n";
            cin >> matrix[fil][col];
        }
    }
    FormatoCoordenado f1;
    

    f1.crearDeMatrizCompleta(matrix);
    matrix2 = f1.obtenerMatrizCompleta();
    v = f1.obtenerFila(1);

    cout << "===============" <<endl;

    for (int fil = 0; fil < matrix2.size(); fil++)
    {
        for (int col = 0; col < matrix2[fil].size(); col++)
        {
            cout << "Matrix[" << fil << "][" << col << "]\n";
            cout << matrix2[fil][col] << endl;
        }
    }
}