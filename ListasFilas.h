#ifndef LISTASFILAS_
#define LISTASFILAS_
#include <iostream>
#include <vector>
#include "lista.h"
using namespace std;

class MatrizDispersa
{
  private:
    vector< Lista > valores;
    int m;
    int n;

  public:
    void imprimir();
    void crearDeMatrizCompleta(vector<vector<int>> &matrix);
    vector<vector<int>> obtenerMatrizCompleta();
    int obtenerElemento(int, int);
    vector<int> obtenerFila(int);
    vector<int> obtenerColumna(int);
    vector<int> obtenerFilaDispersa(int);
    vector<int> obtenerColumnaDispersa(int);
    int obtenerNumeroElmentos();
    void modificarPosicion(int, int, int);
};
#endif