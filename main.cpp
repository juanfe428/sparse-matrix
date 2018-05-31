#include <iostream>
#include "formatocoordenado.cpp"
#include "ListasFilas.h"
#include "lista.h"
#include <vector>

int main(){
	int fil = 4, col = 3;
    vector< vector<float> > matrix(fil, vector<float>(col));
    vector< vector<float> > matrix2;
    vector<int> f;
    vector<int> c;
    vector<float> v;
    for (int fil = 0; fil < matrix.size(); fil++){
        for (int col = 0; col < matrix[fil].size(); col++){
            cout << "Matrix[" << fil << "][" << col << "]\n";
            cin >> matrix[fil][col];
        }
    }
    FormatoCoordenado<float> f1;
    

    f1.crearMatriz(matrix);
    cout << "creada: "<<endl;
    f1.imprimir();
    matrix2 = f1.obtenerMatrizCompleta();
    
    v = f1.obtenerColumnaDispersa(1);
    /*
    for(int n = 0 ; n < v.size();n++){
        cout<< v[n]<<endl;
    }
    
    f1.modificarPosicion(0,1,994);
    matrix2 = f1.obtenerMatrizCompleta();
    cout << "modificada: "<<endl;
    f1.imprimir();
    cout << "===============" <<endl;

    for (int fil = 0; fil < matrix2.size(); fil++)
    {
        for (int col = 0; col < matrix2[fil].size(); col++)
        {
            cout << "Matrix[" << fil << "][" << col << "]\n";
            cout << matrix2[fil][col] << endl;
        }
    }*/
    
    for (int fil = 0; fil < matrix2.size(); fil++)
    {
        for (int col = 0; col < matrix2[fil].size(); col++)
        {
            cout << "Matrix[" << fil << "][" << col << "]\n";
            cout << matrix2[fil][col] << endl;
        }
    }
}