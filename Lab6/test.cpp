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
    stack2.empty();
    stack3.empty();

    int *disks=new int[numDisks];

    for(int i=0;i<numDisks; i++)
    {
        disks[i]=i+1;
    }

    int zero=0;

    for(int i=0;i<numDisks;i++)
    {
        stack1.push(&disks[i]);
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

    }

    return 0;
}

