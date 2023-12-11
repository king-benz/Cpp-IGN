#include<iostream>
using namespace std;

class Triangle
{
    private:
        float a;
        float circumference;
        float area;

        public:

            void setA(float side)
            {
                a = side;
                circumference = 3*a;
                area = (1.73*a*a)/4;
            }

            friend class EquilateralTriangle;
            friend void printdata(Triangle);
};

class EquilateralTriangle
{
    public: 
        void getter(Triangle T)
        {
             cout<<"Circumference : "
                 <<T.circumference<<endl
                 <<"Area : "
                 <<T.a<<endl;      
        }
};

void printdata(Triangle T)
{
             cout<<"Circumference : "
                 <<T.circumference<<endl
                 <<"Area : "
                 <<T.a<<endl;    
}

int main()
{
    Triangle T;
    T.setA(4);

    Triangle L;
    L.setA(3);

    EquilateralTriangle ET;
    ET.getter(T);

    printdata(L);


}