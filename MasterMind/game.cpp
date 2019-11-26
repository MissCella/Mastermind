#include "game.h"
#include <ctime>

Game::Game(string name, int level)
{
    player = name;
    int n = 9 - level;
    cout<< "Tiene "<<n<<endl;
    timeXPlay = new double[n];
    int size = sizeof(timeXPlay)/sizeof(*timeXPlay);
    for(int i = 0; i < size ; i++)
        timeXPlay[i]=0;
}



void Game::addTimePlay(double time)
{
    int size = sizeof(*timeXPlay);
    cout<< "Size " << size << endl;
    for(int i = 0; i < size ; i++){
        cout << "Contiene "<<timeXPlay[i]<<endl;
            if (timeXPlay[i] == 0){
                timeXPlay[i] = time;
                break;
            }
        }
}

void Game::setDate()
{
    time_t now = time(0);
    char* date = ctime(&now);
    datePlayed = date;
}

void Game::setDate(string date)
{
    datePlayed = date;
}

void Game::calculateTotalTime()
{
    double sum = 0;
    int size = sizeof(*timeXPlay);
    for(int i = 0; i < size ; i++)
        sum += timeXPlay[i];
    timeTaken = sum;
}

void Game::saveGame()
{
    //Json::Value event;
    //Json::Value timeEach(Json::arrayValue);
    //Json::Value solvedC(Json::arrayValue);

    //event["Game"]["player"] = player;
    //event["Game"]["timeTaken"] = timeTaken;

    //calculateTotalTime();
    //cout << "tiempo total: "<< timeTaken <<endl;
     double sum = 0;
    int sizeCombination = sizeof(*timeXPlay);
    for (int i = 0 ; i < sizeCombination ; i++)
    {

        double col = timeXPlay[i];
        sum += col;
        //timeEach.append(Json::Value(col));
        if (sum == timeTaken)
            break;
    }

    for (int i = 0; i < 4 ; i++)
    {
        string color = solvedCombination[i];
        //solvedC.append(Json::Value(color));
    }

    //event["Game"]["timeXPlay"] = timeEach;
    //event["Game"]["datePlayed"]=datePlayed;
    //event["Game"]["solvedCombination"] = solvedC;



    ofstream file_id;
    file_id.open("master_mind_jugada_actual.dat");

    //Json::StyledWriter styledWriter;
    //file_id << styledWriter.write(event);
    file_id.close();
}

