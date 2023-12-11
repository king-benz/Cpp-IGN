#include<iostream>

using namespace std;

int main()
{
    // implicit type convertions
    bool b = 10;
    int i = 10.5;
    double pi = i;
    float f = 2*pi;

    printf("bool = %s \nint = %d\ndouble = %lf\nfloat = %f\n",(b?"True":"False"),i,pi,f);



    //explicit type convertions
    int sum = (int)i+8.0;
    float fp = (float)b;

    cout<< "int : "<< sum << endl
        << "float : "<< fp <<endl;
}