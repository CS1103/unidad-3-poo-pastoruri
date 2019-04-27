//
// Created by Rodrigo on 18/04/2019.
//

#ifndef CARGAS_PARTICULA_H
#define CARGAS_PARTICULA_H


class Particula {
public:
    double pos_x;
    double pos_y;
    double charge;
    Particula()=default;
    explicit Particula(int max);
    explicit Particula(double x, double y, double carga);
    ~Particula()=default;
    void print_particula();
};




#endif //CARGAS_PARTICULA_H
