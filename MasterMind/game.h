#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string>
//#include <jsoncpp/json/json.h>
#include <algorithm>
//#include <jsoncpp/json/writer.h>
#include <fstream>
#include <QLabel>
#include <QRectF>


using namespace std;

class Game
{
public:
    string player;
    double timeTaken;
    string solvedCombination[4];
    string datePlayed;
    double* timeXPlay;
    int numJugada = 1 ;
    Game(){}
    Game(string name, int level);
    ~Game()   {}

    void addTimePlay(double time);
    void saveGame();

    void setDate();
    void setDate(string date);

    //Antes de guardar se corre para sumar todos los tiempo por jugada
    void calculateTotalTime();

};

#endif // GAME_H
