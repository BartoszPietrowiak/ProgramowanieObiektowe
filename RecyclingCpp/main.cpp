#include <memory>
#include <iostream>
#include "Wezel.h"

using namespace std;
int main(){

for(int i=0;i<10; i++) {
    //unique_ptr<Wezel>(new Wezel()) ;
    //shared_ptr<Wezel> w1 = make_shared<Wezel>();
    //shared_ptr<Wezel> w1 = make_shared<Wezel>();
    //shared_ptr<Wezel> w2 = make_shared<Wezel>();
    //w1 -> next = w2 ;
    //w2 -> next = w1 ;
    shared_ptr<Wezel> w1 = make_shared<Wezel>();
    shared_ptr<Wezel> w2 = make_shared<Wezel>();
    weak_ptr<Wezel> w11=w1;
    weak_ptr<Wezel> w22=w2;
    w1 -> next = w22 ;
    w2 -> next = w11 ;
}
system("pause");
    return 0 ;
}