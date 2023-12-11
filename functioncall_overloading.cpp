#include<iostream>

using namespace std;

class Marks
{
    int mark;

    public:
        Marks(int m)
        {
            mark = m;
            cout<<"Constructor\n";
        }

        void whatsyourmark()
        {
            cout<<"you got "<<mark<<" Marks"<<endl;
        }

        Marks operator () (int mk)
        {
            mark = mk;
            cout<<"Operator overloading\n";
            return *this;
        }

};

int main()
{
    Marks febin(85);
    febin.whatsyourmark();

    febin(90);
    febin.whatsyourmark();
}