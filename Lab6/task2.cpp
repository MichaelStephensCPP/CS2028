#include <iostream>
#include "hanoitower.h"
#include <string>
using namespace std;

int main()
{
    int numDisks;
    cout<<"Enter number of disks to be used in the game: "<<endl;
    cin>>numDisks;
    cout<<endl;

    HanoiTower<int> stack1(numDisks);
    HanoiTower<int> stack2(numDisks);
    HanoiTower<int> stack3(numDisks);

    int *disks=new int[numDisks];

    for(int i=0;i<numDisks; i++)
    {
        disks[i]=i+1;
    }

    int zero=0;

    for(int i=0;i<numDisks;i++)
    {
        stack1.push(&disks[i]);
        stack2.push(&zero);
        stack3.push(&zero);
    }

    char tower;
    int piece;
    int towermove;

    for(int i=0;i<numDisks;i++)
    {
        stack2.pop();
        stack3.pop();
    }

    while(1)
    {
        cout<<"A    B    C\n\n";
        for(int i=0;i<numDisks;i++)
        {
            displayitem(stack1,i);
            cout<<"    ";
            displayitem(stack2,i);
            cout<<"    ";
            displayitem(stack3,i);
            cout<<endl;
        }

        cout<<"Enter tower: ";
        cin>>tower;
        cout<<"Enter piece number: ";
        cin>>piece;
        cout<<"Enter tower to move to: ";
        cin>>towermove;

        if(tower=='A')
        {
            stack1.pop();
        }
        else if(tower=='B')
        {
            stack2.pop();
        }
        else if(tower=='C')
        {
            stack3.pop();
        }

        if(towermove=='A')
        {
            stack1.pop();
            stack1.push(&piece);
        }
        else if(towermove=='B')
        {
            stack2.pop();
            stack2.push(&piece);
        }
        else if(towermove=='C')
        {
            stack3.pop();
            stack3.push(&piece);
        }
    }

    return 0;
}

