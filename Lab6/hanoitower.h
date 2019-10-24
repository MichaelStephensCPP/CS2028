//
//  main.cpp
//  Lab6
//
//  Created by Macbook on 10/16/19.
//  Copyright © 2019 Anh Nguyen. All rights reserved.
//

#include <iostream>
using namespace std;

template < class T >
class HanoiTower{
private:
    int StackSize;
    int top;
    T **stackArray;
    
public:
    ////////////////////
    //Constructor
    HanoiTower(int i){
        stackArray = new T*[i];
        StackSize = i;
        top = -1;
    }
    /*
    ////////////////////
    //Destructor
    ~HanoiTower(){
        for(int i = 0; i<=StackSize; i++)
        {
            stackArray[i] = nullptr;
            delete stackArray[i];
        }
        delete stackArray;
    }*/
    
    ////////////////////
    //Check if array is full
    bool isFull() const{
        bool status;
        if (top == StackSize - 1)
            status = true;
        else
            status = false;
        return status;
    }
    
    ////////////////////
    //Check if array is empty
    bool isEmpty() const{
        bool status;
        if (top == -1)
            status = true;
        else
            status = false;
        return status;
    }
    
    ////////////////////
    //Return the number of plates in the stacks
    int length(){
        return (top + 1);
    }
    
    ////////////////////
    //Push one element onto the back
    void push(T* t){
        if(length() == StackSize){
            cout<< "Stack is full" <<endl;
            /*T** temp = new T*[StackSize+1];
            for(int i=0;i<=top;i++){
                temp[i] = stackArray[i];
            }
            temp[top+1] = t;
            stackArray = temp;
            
            for(int i = 0; i<=StackSize; i++)
            {
                temp[i] = nullptr;
                delete temp[i];
            }*/
        }
        else{
            top ++;
            stackArray[top] = t;}}
    
    ////////////////////
    //Remove one item at the top
    T *pop(){
        T *t = nullptr;
        if(length() == 0){
            cout << "The stack is empty." << endl;}
        else{
            t = stackArray[top];
            top--;
        }
        return t;}
    
    ////////////////////
    // Return the address of the item on top of the stack
    T * topaddress(){
        return stackArray[top];
    }
    
    
    ////////////////////
    //Delete all of stacks
    void empty(){
        if (top == -1){
            return;
        }
        while(top != -1){
            stackArray[top] = nullptr;
            delete stackArray[top];
            top--;
        }
    }
    
    ////////////////////
    //Print all results
    template <class A>
    friend void displayobject(HanoiTower<A>);
    
    template <class B>
    friend void displaypointer(HanoiTower<B>);

    template <class C>
    friend void displayitem(HanoiTower<C>,int i);
   /*
    template <class C>
    friend C accessobject(HanoiTower<C>);
    */
};

//Displaying all the objects the pointers in the Stack array are pointing at
template <class A>
void displayobject(HanoiTower<A> stack){
    for (int i = 0; i<= stack.top; i++){
        cout << *stack.stackArray[i]<<endl;
    }
}

//Displaying all the pointers in the Stack array
template <class B>
void displaypointer(HanoiTower<B> stack){
    for (int i = 0; i<= stack.top; i++){
        cout << *stack.stackArray[i] << endl;
    }
}

template <class C>
void displayitem(HanoiTower<C> stack,int i){
    if(*stack.stackArray[i]!=0)
        cout << *stack.stackArray[i];
}

////////E R R O R/////////////////////////////////
//Trying to access a particular element inside the stackArray
//It can't seem to work, keeps giving error that "'stackArray' is a private member of HanoiTower<double>
//I'm not sure what's wrong, is there anyway to do this?
/*
template <class C>
C accessobject(HanoiTower<C> stack, int i){
    return (*stack.stackArray[i]);
}
 */


