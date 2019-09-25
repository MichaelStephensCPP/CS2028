#include <iostream>
using namespace std;
class game
{   public:

    game()
    {
        numplayers=0;
        score=0;
    }
    game(int a1,int a2)
    {
        numplayers=a1;
        score=a2;
    }
    int getNumPlayers()
    {
        return numplayers;
    }
    void setNumPlayers(int i)
    {
        numplayers=i;
    }
    int getScore()
    {
        return score;
    }
    void setScore(int i)
    {
        score=i;
    }
    virtual void play()
    {
        cout<<"Let's Play"<<endl;
    }
    void winner()
    {
        cout<<"Not Yet"<<endl;
    }

    private:

    int numplayers;
    int score;

};

class boardgame : public game
{
    public:
    void play()
    {
        cout<<"Roll the dice."<<endl;
    }
    void winner()
    {
        cout<<"Dancing time."<<endl;
    }
    int getSize()
    {
        return boardsize;
    }
    void setSize(int s)
    {
        boardsize=s;
    }

    private:
    int boardsize;

};

class videogame : public game
{
    public:
    void play()
    {
        cout<<"Mash the buttons."<<endl;
    }
    void winner()
    {
        cout<<"Winner music"<<endl;
    }
    string getDiff()
    {
        return difficulty;
    }
    void setDiff(int d)
    {
        difficulty=d;
    }

    private:
    string difficulty;
};

int main()
{
    game a;
    boardgame b;
    videogame c;
    
    //game boardgame d;

    int choice;
    cout<<" Press 1 for an instance of game. \n Press 2 for an instance of board game. \n Press 3 for an instance of video game. \n Press 4 for an instance of a board game declared as a game \n Press 5 for an instance of a video game declared as a game \n";
    cin>>choice;
    if(choice==1)
    {
        a.play();
        a.winner();
    }
    if(choice==2)
    {
        b.play();
        b.winner();
    }
    if(choice==3)
    {
        c.play();
        c.winner();
    }


    return 0;
}