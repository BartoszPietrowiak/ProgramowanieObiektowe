#include <iostream>

using namespace std;

template <typename T>class X{
private:
T x;
public:
X(){}
X(T _x)
{
    this->x=_x;
}
T getX() const{
    return x;
}
friend ostream& operator<<(ostream& os,X<T> const & x)
{
    os<<x.x;
    return os;
}
};
template<typename string>
bool operator >(X<string> const &a,X<string> const & b)
{
    return a.getX().size()> b.getX().size();
}
/*
template <typename T>
bool operator >(X<T> const  &x1,X<T> const &x2){
   return x1.getX()>x2.getX();
}
*/
template <typename T,typename C=X<T>>
class Y
{
T zmienna;
C klasaX;
};

template<typename T>
class A{
    typename T::id i;
    public:
    void f(){i.g();}
};
class B{
    public:
    class id{
        public:
            void g(){}
    };
};
auto maxLambda=[](auto a, auto b){return a>b ? a:b;};
