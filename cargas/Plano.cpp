//
// Created by Rodrigo on 18/04/2019.
//

#include "Plano.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;

Plano::Plano(int n_dimension, int n_particulas) {
    int tamano = n_particulas;
    this->eje_x=n_dimension;
    this->eje_y=this->eje_x;
    this->tamano_array=tamano;
    particulas= new Particula[tamano];
    for(int i=0;i<tamano;i++){
        particulas[i]=Particula(rand() % 5,rand() % 5,rand() % 5) ;
    }
}


Plano::Plano() {

    int tamano = rand() % 7;
    this->eje_x=rand() % 20;
    this->eje_y=this->eje_x;
    this->tamano_array=tamano;
    particulas= new Particula[tamano];
    for(int i=0;i<tamano;i++){
        particulas[i]=Particula(eje_x) ;
    }
}

void Plano::print_parametros_plano() {
    cout<<"Eje x "<<this->eje_x<<endl;
    cout<<"Eje y "<<this->eje_y<<endl;
    cout<<"Cantidad de particulas "<<this->tamano_array<<endl;
    for(int i=0;i<this->tamano_array;i++){
        this->particulas[i].print_particula();
    }
}

double Plano::calcular_potencia(int pos_x, int pos_y){
    double distancia;
    double potencia=0;
    for(int i=0;i<(this->tamano_array);i++){
        distancia=sqrt((pos_x-(this->particulas[i].pos_x))*((pos_x-(this->particulas[i].pos_x)))+((pos_y-(this->particulas[i].pos_y))*(pos_y-(this->particulas[i].pos_y))));
        potencia+=((this->k)*(this->particulas[i].charge))/distancia;
    }
        return potencia;
}




void Plano::plano_simular() {
    double posiciones[eje_x+1][eje_y+1];
    for(int x=0;x<eje_x+1;x++){
        for(int y=0;y<eje_y+1;y++){
            posiciones[x][y]=this->calcular_potencia(x,y);
        }
    }

    cout<<"Las potencias en cada punto del plano son "<<endl<<endl;
    for(int x=0;x<eje_x+1;x++){
        for(int y=0;y<eje_y+1;y++){
            cout<<x<<", "<<y<<", ";
            cout<<posiciones[x][y]<<endl;
        }
    }

}