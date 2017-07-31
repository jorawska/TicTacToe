#include <iostream>
#include <fstream>
#include <time.h>
#include "Scores.h"
#define MAX_DATE 50


void SaveScore(Player p1, Player p2) {
    std::ofstream file;
    file.open("SaveFile.bin", std::ios::app | std::ios::binary);
    if(file.good())
    {
        time_t rawtime;
        struct tm * timeinfo;
        char buffer[MAX_DATE];
        time (&rawtime);
        timeinfo = localtime(&rawtime);
        strftime(buffer,sizeof(buffer),"%d-%m-%Y %H:%M:%S",timeinfo);

        std::cout << buffer <<std::endl;//debug
        file.write(buffer, MAX_DATE);
        file.write(reinterpret_cast<char*>(&p1.points), sizeof(int));
        file.write(&p1.symbol, sizeof(char));
        file.write(reinterpret_cast<char*>(&p2.points), sizeof(int));
        file.write(&p2.symbol, sizeof(char));

        std::cout << "Scores saved" <<std::endl; //debug
    }

    else
    {
        std::cout<<"Couldn't open file for saving score." <<std::endl;
    }


file.close();

}

void ReadScore()
{
    char data[MAX_DATE], symbol1, symbol2;
    int iteration = 0, score1, score2;
    std::ifstream file;
    file.open("SaveFile.bin", std::ios::out | std::ios::binary);
    if(file.good())
    {
        while(file.read(data, MAX_DATE))
        {
            file.read(reinterpret_cast<char*>(&score1), sizeof(int));
            file.read(&symbol1, sizeof(char));
            file.read(reinterpret_cast<char*>(&score2), sizeof(int));
            file.read(&symbol2, sizeof(char));
            iteration++;
            std::cout << iteration <<". Date: " <<data<< " Player 1(" << symbol1
            <<"): "<< score1 << " Player 2(" << symbol2 <<"): " << score2 << std::endl;
        }
    }
    else
    {
        std::cout<<"Couldn't open file." <<std::endl;
    }
}