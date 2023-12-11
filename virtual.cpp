#include<iostream>

using namespace std;

class base
{
    int a;
    int b;
    
    public :

    int k;

        base(int a = 0, int b = 0)
        {
            this->a = a;
            this->b = b;
        }

        void show();

};

void base :: show()
{
    cout<<"BASE"<<endl;
    cout<<a<<" "<<b<<endl;
}

class derived : public base
{
    int c;
    int d;

    public :

    int l;

        derived(int a = 0,int b = 0 , int c = 0, int d = 0):base(a,b)
        {
            this->c = c;
            this->d = d;
        }

        void show();
        void print();
};

void derived::show()
{
    cout<<"DERIVED"<<endl;
    cout<<c<<" "<< d<<endl;
}

void derived::print()
{
    cout<<"DERIVED"<<endl;
    cout<<c<<" "<< d<<endl;
}


int main()
{
    base *ptr = new base;
    ptr->show();
    ptr->k = 0;
    
    base *pptr = new derived(1,1,1,1);
    pptr->show();

    derived *ppptr = new derived();
    ppptr->show();

    delete ptr;
    delete pptr;
    delete ppptr;
}