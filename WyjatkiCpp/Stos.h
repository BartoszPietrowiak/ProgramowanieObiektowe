#include <vector>
#include <iostream>
using namespace std;
class Stack{
private:
int maxStackSize;
vector<int> dfs;
public:
Stack();
Stack(int max);
void push(int newItem);
int pop();
};