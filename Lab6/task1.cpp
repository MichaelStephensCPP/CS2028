#include <iostream>
using namespace std;
#include "hanoitower.h"

int main() {
    
    int numDisks;
    cout<<"Enter number of disks to be used in the game: "<<endl;
    cin>>numDisks;
    
    HanoiTower<int> stack(numDisks);
    
    int Stack1 = 1;
    int Stack2 = 2;
    int Stack3 = 3;
    
    cout << "Pushing Stack 1" << endl;
    stack.push(&Stack1);
    cout << "Pushing Stack 2" << endl;
    stack.push(&Stack2);
    cout << "Pushing Stack 3" << endl;
    stack.push(&Stack3);
    
    cout << "The number of plates in the stack is " << stack.length()<<endl;
    
    cout << "The pointer at the top is: " << stack.topaddress()<<endl;
    
    cout << "Displaying the stack: " << endl;
    displayobject(stack);
    
    //access(stack);
    cout<<"Poping the top object!"<<endl;
    stack.pop();
    cout << "Displaying the stack: " << endl;
    displayobject(stack);
    
    cout<<"Emptying the stack"<<endl;
    stack.empty();
    cout << "Displaying the stack: " << endl;
    displayobject(stack);
    displaypointer(stack);
    cout<< "Is the stack empty? " << stack.isEmpty() << endl;
    //cout << *access(stack) << endl;
    
    
    ////////Testing the error/////////////
    /*
     int z = 0;
    cout << "Enter the index of the object you wanna see: " << endl;
    cin >> z;
    cout << "The object at index " << z << " is " << accessobject(stack, z) << endl;
    */
    return 0;
}
