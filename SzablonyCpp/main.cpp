#include <iostream>
#include "Exercise.cpp"

template <typename T>
T maximum(T const &a,T const &b)
{
    return a>b ? a:b;
}

using namespace std;
int main()
{
    /*cout<<maximum(6,7)<<endl;
    cout<<maximum(6.3,7.3)<<endl;
    cout<<maximum(6.3,7)<<endl; // zle wywolanie funkcji maximum typy danych double int
    cout<<maximum<double>(4,5)<<endl;
    cout<<maximum<double>(4.1,5.7)<<endl;
    cout<<maximum<int>(4.6,3)<<endl;
    cout<<maximum<double>(4.6,3)<<endl;
    cout<<maximum<bool>(4.6,3)<<endl;
    cout<<maximum<string>(4.6,3)<<endl; niepoprawne typy danych przekazane do funkcji maximum
    cout<<maximum<string>("aaa","bb")<<endl;
    cout<<maximum(X(4),X(3))<<endl;
    cout<<maximum(X<int>(4),X<int>(3))<<endl;
    cout<<maximum(X<string>("aaa"),X<string>("bb"))<<endl;
    Y<int> y;
    Y<int,double> y2;
    A<B> ab;
    ab.f();
    bool b= maxLambda(3,3.14);
    auto c=maxLambda(3,3.14);
    cout<<b<<endl<<c<<endl;*/
    system("pause");
    return 0;
}