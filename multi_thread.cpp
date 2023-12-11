#include<iostream>
#include<thread>

using namespace std;


void function_1(double end)
{
    for(double i = 0; i < end; i++)
        cout<<"HELLO"<<endl;
}

void function_2(double end)
{
    for(double i = 0; i < end; i++)
        cout<<"HI"<<endl;
}


int main()
{
    clock_t begin, end;

    begin = clock();

    // function_1(1000000); // this is normal execution of function without multi threading
    // function_2(1000000); // this is normal execution of function without multi threading

    thread function_thread_1(function_1,1000000);
    thread function_thread_2(function_2,1000000);

    function_thread_1.join();
    function_thread_2.join();

    end = clock();
    float total = (end - begin)/CLOCKS_PER_SEC;

    cout<<"TOTAL TIME ELAPSED : "<<total<<endl;
    cout<<"CLOCK PER SEC : "<<CLOCKS_PER_SEC;
    

    
}
