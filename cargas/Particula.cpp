//
// Created by Rodrigo on 18/04/2019.
//
#include <cstdlib>
#include <random>
#include <ctime>
#include <iostream>
#include "Particula.h"
using namespace std;
//FUNCION PARA GENERAR DOBLES RANDOM
double fRand(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}
Particula::Particula(double x, double y, double carga) {
    this->pos_x=x;
    this->pos_y=y;
    this->charge=carga;
}

Particula::Particula(int max) {
        //EL 15 ES UN LIMITE ARBITRARIO QUE LE PUSE PARA TENER UN TOPE DE LA CARGA QUE PUEDA TENER LA PARTICULA
        //MAX ES LA DIMENSION DE NUESTRO PLANO, ES DECIR A LA PARTICULA NO SE LE PUEDE ASIGNAR UNA COORDENADA FUERA DE ESO
        this->pos_x=fRand(0,max);
        this->pos_y=fRand(0, max);
        this->charge=((fRand(0,15)) *0.00001);
}


void Particula::print_particula() {
    cout<<"-----------------------"<<endl;
    cout<<"Posicion eje x "<<this->pos_x<<endl;
    cout<<"Posicion eje y "<<this->pos_y<<endl;
    cout<<"Valor de carga "<<this->charge<<endl;
    cout<<"-----------------------"<<endl;
}