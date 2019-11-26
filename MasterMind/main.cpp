#include "gamewindow.h"
#include "inicio.h"
#include "juego.h"
#include <iostream>
#include <string>

using namespace std;

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Inicio w;
    w.show();
    Juego * j = new Juego();
    j->generarListaJuego();
    return a.exec();
}
