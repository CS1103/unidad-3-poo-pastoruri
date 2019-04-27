cmake_minimum_required(VERSION 3.13)
project(cargas)

set(CMAKE_CXX_STANDARD 17)

add_executable(cargas main.cpp Particula.cpp Particula.h Simulador.cpp Simulador.h Plano.cpp Plano.h catch.hpp test-plano.cpp)