#ifndef COMBINACION_H
#define COMBINACION_H
#include <string>
#include <iostream>
#include <algorithm>
#include <list>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

class Combinacion
{
    string colores[6] = { "blue", "red", "orange", "yellow", "green", "purple" };

public:
    string combinacion[4];
    // Constructor and destructor
    Combinacion()   {}
    ~Combinacion()       { }

    void generarCombinacion(int repetible);

    int* calificarJugada(string jugada[4], int result[4]);
};

#endif // COMBINACION_H
