#include <iostream>

using namespace std;

class Marks{
int mark;
public:
    Marks(){
        mark = 0;
    }
    Marks(int m){
        mark = m;
    }
    void yourMarkPlease(){
        cout << "your mark is "<<mark<<endl;
    }
    Marks operator++(){
    Marks duplicate(*this);
    mark += 1;
    return duplicate;
    }

    friend Marks operator--(Marks &m);

};

Marks operator--(Marks &m){
    Marks duplicate(m);
    m.mark -= 1;
    return duplicate;
}

int main()
{

    Marks anil(68);
    anil.yourMarkPlease();

    (++anil).yourMarkPlease();
    anil.yourMarkPlease();
    (--anil).yourMarkPlease();
    anil.yourMarkPlease();

    return 0;
}