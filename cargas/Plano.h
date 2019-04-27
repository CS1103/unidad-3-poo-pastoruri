//
// Created by Rodrigo on 18/04/2019.
//

#ifndef CARGAS_PLANO_H
#define CARGAS_PLANO_H
#include "Particula.h"
#include <vector>
using namespace std;
class Plano {
public:
    int eje_x;
    int eje_y;
    int tamano_array;
    Particula* particulas;
    const double k=8.99*(1000000000);
    Plano();
    Plano(int n_dimension, int n_particulas);
    void print_parametros_plano();
    void plano_simular();
    double calcular_potencia(int pos_x, int pos_y);
};



#endif //CARGAS_PLANO_H
