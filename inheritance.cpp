#include<iostream>

using namespace std;

class Vehicle
{
    protected:

    string engine;
    int hp;
    int torque;
    int wheels;
    
    public:

        Vehicle(string e ="Null",int h = 0, int t = 0,int w = 0)
        {
            engine = e;
            hp = h;
            torque = t;
            wheels = w;

            cout<<"base"<<endl;
            print();
        }

        virtual void start()
        {
            cout<<"Wroom Wroom Vehicle is Starting !!!"<<endl;
        }

        void print()
        {
            cout<<"BASE : "<<engine<<" "<<hp<<" "<<torque<<" "<<wheels<<endl;
        }


};

class Bike : public Vehicle
{
    bool auto_blipper;
    bool quick_shifter;

    public:

    Bike(bool a = false ,bool q = false,string e ="Null",int h = 0, int t = 0,int w = 0) : Vehicle(e,h,t,w)
    {
        auto_blipper = a;
        quick_shifter =q;
        cout<<"derived"<<endl;
        print();
    }

    void print()
    {
            cout<<"DERIVED : "<<auto_blipper<<" "<<quick_shifter<<endl;
            cout<<"DERIVED : "<<engine<<" "<<hp<<" "<<torque<<" "<<wheels<<endl;
    }

    void start()
    {
            cout<<"Vroom Vroom Bike is Starting "<<endl;
    }
    
};

int main()
{
    Bike B(true,true,"BossHoss",1800,1650,2);
    B.start();
}