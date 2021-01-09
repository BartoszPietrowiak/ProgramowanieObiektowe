
#include <iostream>
#include<vector>
#include "Stos.h"
#include "Exceptions.cpp"
using namespace std;
Stack::Stack()
{
    this->maxStackSize=10;
}
Stack::Stack(int max)
{
    this->maxStackSize=max;
}
void Stack::push(int newItem)
{
    if(dfs.size()<this->maxStackSize)
    {
    this->dfs.push_back(newItem);
    }
    else
    {
        throw StackFullException("Przekroczono rozmiar stosu!",newItem,this->maxStackSize);
    }
    
}
int Stack::pop()
{
    if(!dfs.empty())
    {
        int item = this->dfs.back();
    dfs.pop_back();
    return item;
    }
    else
    {
        throw StackEmptyException("Pusty stos!");
    }
    
}