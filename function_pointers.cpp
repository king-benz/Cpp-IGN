//function pointer is used when we want to passs a function as a argument to another function
//function pointer is also used to reference to a function  
#include<iostream>

using namespace std;

int add(int a ,int b)
{
    return a+b;
}

bool trix(int a, int b)
{
    cout<<"amigos"<<endl;
    return 0;
}

void print(bool(*function)(int,int))
{
    cout<<"hola ";
    function(1,2);
}

int main()
{
    int(*function_pointer)(int,int) = add; //it defines a function pointer with a return type int and has 2 arguments of type int and int
                                           // can point to any function of type int function_name(int, int)

    cout<<add(2,3)<<endl;

    cout<<function_pointer(3,4)<<endl<<endl;

    bool(*funptr)(int,int) = trix;

    print(funptr);

}