#include<iostream>
#include<thread>

using namespace std;

class test
{
    public:

        void Threadfunction_1(int end)
        {
            for(int i = 0; i <= end; i++)
                { cout<<"HI"<<endl; }
        }

        void Threadfunction_2(int end)
        {
            for(int i = 0; i <= end; i++)
                { cout<<"HELLO"<<endl; }
        }
};

int main()
{

    clock_t begin, end;

    begin = clock();

    test obj;
    thread T1(&test::Threadfunction_1,obj,10000000);
    thread T2(&test::Threadfunction_2,obj,10000000);
    
    if(T1.joinable())
        T1.join();
    else
        cout<<"NON JOINABLE";

    if(T2.joinable())
        T2.join();
    else
        cout<<"NON JOINABLE";

    end = clock();

    float total = (end - begin) / CLOCKS_PER_SEC;
    cout<<"TIME ELAPSED : "<<total<<endl;
}