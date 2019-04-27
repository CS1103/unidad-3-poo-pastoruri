#include <iostream>
#include "Particula.h"
#include <cstdlib>
#include <ctime>
#include "Plano.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#ifndef CATCH_CONFIG_MAIN

int main() {
    srand(time(NULL));
    Plano s;
    s.print_parametros_plano();
    s.plano_simular();
    return 0;
}

#endif