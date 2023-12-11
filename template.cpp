#include<iostream>
using namespace std;

template <typename T,typename F,int length>
class node
{
    public:
    
     T data[length];
     F note;
};

template<typename T>
void print(T value)
{
    cout<<value<<endl;
}
int main()
{
    node<int,float,2>N0;
    N0.data[0] = 100;
    N0.note = 10.599;
    
    cout<<N0.data[0]<<endl;
    cout<<N0.note<<endl;

    node<string,int,1>N1;
    N1.data[0] = "febin";
    N1.note = 11;
     
    cout<<N1.data[0]<<endl;
    cout<<N1.note<<endl;

    print<int>(5);
    print<float>(5.5f);
    print<char>('a');
    print<string>("febin");
}
