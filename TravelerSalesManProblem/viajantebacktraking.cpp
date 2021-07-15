#include <climits>
#include <cmath>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <assert.h>     /* assert */

using namespace std;


//implemento el pop_front
template<typename T>
void pop_front(std::vector<T>& vec)
{
    assert(!vec.empty());
    vec.erase(vec.begin());
}

struct punto {
  double x;
  double y;
};
struct ciudad {
  int nombre;
  int posicionVector;
  punto coordenadas;
};

/*********************************************************************************************************************************************/

// Calcula la distancia entre dos puntos
double distancia(punto a, punto b);

/*********************************************************************************************************************************************/

// Nos crea la matriz de distancias
vector<vector<double> > CreaMatriz(const vector<ciudad> &ciudades);

/*********************************************************************************************************************************************/

// Crea el vector de ciudades a partir de un fichero
vector<ciudad> leerFichero();

/*********************************************************************************************************************************************/

// calcula el camino optimo
void backtraking(vector<ciudad> ciudadesporvisitar,
                 const vector<vector<double> > &matrizdistancias,
                 pair<vector<ciudad>, double> &mejorSolucion,
                 pair<vector<ciudad>, double> solucionactual);

/*********************************************************************************************************************************************/

int main(int argc, char *argv[]) {

  vector<ciudad> ciudades = leerFichero();
  vector<vector<double> > matrizdistancias = CreaMatriz(ciudades);

  pair<vector<ciudad>, double> mejorSolucion;
  pair<vector<ciudad>, double> solucionactual;

  mejorSolucion.second = INT_MAX;
  solucionactual.second = 0;

  // Como en principio nos da igual porque ciudad empezar, empezamos por la
  // primera
  solucionactual.first.push_back(ciudades[0]);

  // creo una copia para saber las ciudades que nos quedan por visitar
  vector<ciudad> ciudadesporvisitar = ciudades;

  // y elimino la primera que ya la 'he visitado'
  pop_front(ciudadesporvisitar);

  backtraking(ciudadesporvisitar, matrizdistancias, mejorSolucion, solucionactual);
  cout << "Dimension: " << mejorSolucion.first.size() << endl;
  for(int i = 0; i < mejorSolucion.first.size(); i++){
    cout << mejorSolucion.first[i].nombre << "\n";
  }
  return 0;
}

/*********************************************************************************************************************************************/

void backtraking(vector<ciudad> ciudadesporvisitar,
                 const vector<vector<double> > &matrizdistancias,
                 pair<vector<ciudad>, double> &mejorSolucion,
                 pair<vector<ciudad>, double> solucionactual) {
  if (ciudadesporvisitar.empty()) {
    // Si estamos en un nodo hoja, es decir hemos añadido todas las ciudades
    //miramos la distancia del ultimo al primero para ver si mejora en algun caso
    double distancia = matrizdistancias[solucionactual.first.back().posicionVector][solucionactual.first[0].posicionVector];
    solucionactual.second += distancia;

    if(solucionactual.second < mejorSolucion.second){
      mejorSolucion = solucionactual;
      cout << mejorSolucion.second << endl;
    }
    solucionactual.second -= distancia;

  } else {
    // Si nos falta por añadir ciudades, seguimos viendo cual puede ser mejor
    for (int i = 0; i < ciudadesporvisitar.size(); i++) {
      ciudad ciudadfront = ciudadesporvisitar[0];
      pop_front(ciudadesporvisitar);


      double distancia = matrizdistancias[solucionactual.first.back().posicionVector][ciudadfront.posicionVector];
      solucionactual.second += distancia;
      solucionactual.first.push_back(ciudadfront);

      if(solucionactual.second < mejorSolucion.second){
        backtraking(ciudadesporvisitar,matrizdistancias,mejorSolucion,solucionactual);
      }

      //vuelvo hacia atras
      solucionactual.second -= distancia;
      solucionactual.first.pop_back();
      ciudadesporvisitar.push_back(ciudadfront);

    }
  }
}

/*********************************************************************************************************************************************/

double distancia(punto a, punto b) {
  return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

/*********************************************************************************************************************************************/

vector<vector<double> > CreaMatriz(const vector<ciudad> &ciudades) {
  int j, i;
  vector<vector<double> > matriz(ciudades.size(),
                                vector<double>(ciudades.size()));

  for (i = 0; i < ciudades.size(); i++)
    for (j = 0; j < ciudades.size(); j++)
      matriz[i][j] =
          distancia(ciudades[i].coordenadas, ciudades[j].coordenadas);
  return matriz;
}

/*********************************************************************************************************************************************/

vector<ciudad> leerFichero() {
  int numCiudades;
  double z;
  string cabecera;

  cin >> cabecera;
  cin >> numCiudades;

  vector<ciudad> ciudades(numCiudades);

  for (int i = 0; i < numCiudades; i++) {
    cin >> ciudades[i].nombre;
    cin >> ciudades[i].coordenadas.x;
    cin >> ciudades[i].coordenadas.y;
    ciudades[i].posicionVector = i;
  }

  return ciudades;
}
