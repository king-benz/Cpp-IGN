#include<iostream>
using namespace std;

int main()
{
    for(int i = 1; i<10; i+=2)
    {
        for(int j = 0; j<(10-i)/2; j++)
        {
            cout<<" ";
        }

        for(int k=0;k<i;k++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

    cout<<endl<<endl;
}