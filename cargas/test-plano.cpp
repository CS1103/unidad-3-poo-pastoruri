#include "catch.hpp"
#include "Plano.h"
#include "Particula.h"


SCENARIO("Test Plano-particula"){
    GIVEN("Plano x(dimension,num_particulas) "){
        WHEN("cuando dimension=10 y num_particulas=10 la cantidad de particulas deberia ser 10, y los ejes x e y deberian ser 10"){
            Plano s(10, 10);
            REQUIRE(s.tamano_array==10 && s.eje_y==10 && s.eje_x==10);
        }

    }
    GIVEN("Particula del plano x"){
        WHEN("cuando dimension=1 y num_particulas=1 la posicion de la particula a analizar es 1,1 con carga 1"){
            Plano s(1, 1);
            s.particulas[0].charge=1;
            s.particulas[0].pos_x=1;
            s.particulas[0].pos_y=1;
            REQUIRE(s.calcular_potencia(0,0)==6.35688996e-9);
        }

    }

}
