#include <iostrem>
#include <formatocoordenado.h>
#include <vector>

int main(){
	int fil = 5, col = 5;
    vector<vector<int>> matrix(filas, vector<int>(columnas));
    for (int fil = 0; fil < matrix.size(); fil++){
        for (int col = 0; col < matrix[fil].size(); col++){
            cout << "Matrix[" << fil << "][" << col << "]\n";
            cin >> matrix[fil][col];
        }
    }
}