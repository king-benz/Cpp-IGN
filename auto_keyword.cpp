#include<iostream>
#include<typeinfo>

using namespace std;

int main()
{
    auto i = 10.0;
    auto j = 20; // automatically determines the datatype of the variable;
    
    const type_info& type_i = typeid(i); 
    const type_info& type_j = typeid(j); 
    
    cout<<(type_i == type_j ?"Yes":"No")<<endl;
    
    cout<<type_i.name()<<endl;
    cout<<type_j.name()<<endl;
}