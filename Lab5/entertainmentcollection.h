#ifndef entertainmentcollection_h
#define entertainmentcollection_h

#include "BaseClassGame.h"
#include <iostream>
#include <array>
using namespace std;

const static int numGames=10;

class EntertainmentCollection
{
    public:
  

    EntertainmentCollection()
    {
        for(int i=0;i<games.size();i++)
        {
            games[i]=game{};
        }
        numStored=0;
    }

    void add(game game)
    {
        if(games[games.size()].getNumPlayers()>0 || game.getScore()>0)
        {
            cout<<"\nERROR: FullShelf exception";
            return;
        }

        games[numStored]=game;
        numStored+=1;
    }

    game remove()
    {
        if(numStored==0)
        {
            cout<<"\nERROR: EmptyShelf exception";
        }
        game temp=games[numStored-1];
        games[numStored]=game{};
        if(numStored>0)
        numStored-=1;  

        cout<<"\nThe values for the removed game were as follows \nSize: "<<"\nNumber of players: "<<temp.getNumPlayers()<<"\nScore: "<<temp.getScore()<<"\n";

        return temp;
    }

    int getnumStored()
    {
        return numStored;
    }

    private:
    array<game,numGames> games;
    int numStored;
};

#endif