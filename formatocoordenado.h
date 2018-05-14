#ifndef FORMATOCOORDENADO_H
#define FORMATOCOORDENADO_H
#include <iostream>
#include <vector>
using namespace std;

class formatoCoordenado
{
private:
  vector<int>valores;
  vector<int>filas;
  vector<int>columnas;
public:
  void crearDeMatrizCompleta(vector<vector<int>> matriz);
  vector < vector<int> > obtenerMatrizCompleta();
  int obtenerElemento(int, int);
  vector<int> obtenerFila(int);
  vector<int> obtenerColumna(int);
  vector<int> obtenerFilaDispersa(int);
  vector<int> obtenerColumnaDispersa(int);
  int obtenerNumeroElmentos();
  void modificarPosicion(int, int);
};




#endif