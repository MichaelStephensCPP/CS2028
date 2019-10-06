#include <iostream>
#include "shelf.h"
#include "BaseClassGame.h"
#include "DerivedClassBoardGame.h"
#include "DerivedClassVideoGame.h"
using namespace std;

int main()
{
    shelf a;
    while(true)
    {

    int choice;
    cout<<"\nPress 1 to add a board game to the shelf.\nPress 2 remove a board game from the shelf.\nPress 3 see how many board games are currently on the shelf.\nPress 4 to quit."<<endl;
    cin>>choice;

    if(choice==1)
    {
        int size;
        int numPlayers;
        int score;
        game* b=new boardgame;
        cout<<"\nEnter board size: ";
        cin>>size;
        cout<<"Enter number of players: ";
        cin>>numPlayers;
        cout<<"Enter score: ";
        cin>>score;
        //b->setSize(size);
        b->setNumPlayers(numPlayers);
        b->setScore(score);

        a.add(*b);
    }
    else if(choice==2)
    {
        a.remove();
    }
    else if(choice==3)
    {
        cout<<"\nThere are currently "<<a.getnumStored()<<" boardgames on the shelf."<<endl;
    }
    else if(choice==4)break; 


    }

    return 0;
}