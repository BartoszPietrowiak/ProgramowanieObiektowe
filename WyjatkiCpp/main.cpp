#include <iostream>
#include "Stos.h"
#include "Exceptions.cpp"
#include <exception>
using namespace std;

void foo(Stack &s)
{
    try{
       for(int i=0;i<10;i++)
        {
            s.push(i);
            cout<<"Udalo sie!"<<endl;
        }

    }catch(StackException e)
    {
        cout<<e.what()<<endl;
    }
}
void bar(Stack &s)
{
    try{
       for(int i=0;i<10;i++)
        {
            s.push(i);
            cout<<"Udalo sie!"<<endl;
        }

    }catch(StackException &e)
    {
        cout<<e.what();
    }
}

int main()
{
    try{
    cout<<"Podaj rozmiar stosu"<<endl;
    int size;
    cin>>size;
    Stack *s= new Stack(size);
    //foo(*s); //tworzy nowy wyjątek Stack Exception i dlatego napis z klasy Stack Exception
    //bar(*s); // wykorzystuje wyjątek utowrzony wcześniej i dlatego odwołuje się się do klas pochodnych
    bool work=true;
    while(work)
    {
        cout<<"1.Dodaj element do stosu"<<endl;
        cout<<"2.Usun element ze stosu"<<endl;
        cout<<"3.Zamknij program"<<endl;
        int option;
        cout<<"Podaj opcje"<<endl;
        cin>>option;
        switch(option)
        {
            case 1:
            {
                cout<<"Podaj element"<<endl;
                int elem;
                cin>>elem;
                s->push(elem);
                break;
            }
            case 2:
            {
                int elem=s->pop();
                cout<<"Usunieto element "<<elem<<endl;
                break;
            }
            case 3:
            {
                system(EXIT_SUCCESS);
            }
            default:
            {
                system(EXIT_SUCCESS);
            }
        }
    }
    }
    catch(StackEmptyException &e){
         cout<<e.what();
    }
    catch(StackFullException &e){
         cout<<e.what();
    }
    system("pause");
    return 0;

}