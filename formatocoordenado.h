#ifndef FORMATOCOORDENADO_
#define FORMATOCOORDENADO_
#include <iostream>
#include <vector>
using namespace std;

class FormatoCoordenado
{
  private:
    vector<int> valores;
    vector<int> filas;
    vector<int> columnas;
    int m;
    int n;

  public:
    void crearDeMatrizCompleta(vector<vector<int>>& matrix);
    vector<vector<int>> obtenerMatrizCompleta();
    int obtenerElemento(int, int);
    vector<int> obtenerFila(int);
    vector<int> obtenerColumna(int);
    vector<int> obtenerFilaDispersa(int);
    vector<int> obtenerColumnaDispersa(int);
    int obtenerNumeroElmentos();
    void modificarPosicion(int, int , int);
};
#endif