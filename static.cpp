#include<iostream>
using namespace std;


class Myclass
{
    static int count;

    public:
           Myclass()
           {
            count = 0;
           }

           void print()
           {
             cout<<++count<<endl;
           }

           static void inc()
           {
            count++;
           }

};

int Myclass::count;


int main()
{
    Myclass C;
    Myclass D;
    C.print();
    D.print();

    C.inc();
    D.print();
}