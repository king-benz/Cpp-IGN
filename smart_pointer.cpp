#include<iostream>
#include<memory>

using namespace std;


//smart pointer is acontainer or wrapper for a raw pointer
//advantage is that a smart pointer automatically deallocares its memory
//three types - unique,shared,weak


class Myclass
{
    public:
        Myclass()
        {cout<<"Constructor invoked"<<endl;}

        ~Myclass()
        {cout<<"Destructor Invoked"<<endl;}


};

int main()
{
    unique_ptr<int>uniptr_1 = make_unique<int>(25); //unique pointers can not be shared
    cout<<*uniptr_1<<endl;

    unique_ptr<int>uniptr_2 = move(uniptr_1);
    cout<<*uniptr_2<<endl;

   // cout<<*uniptr_1<<endl; error as uniptr_1 does not have access to the data anymore;
    {
    {
        unique_ptr<Myclass>uniptr_3 = make_unique<Myclass>();
    }
        unique_ptr<Myclass>uniptr_3 = make_unique<Myclass>(); //destructor is not invoked because ubiquepointer automatically deallocates its memory at the end of its scope
    }


    //shared pointers can be shared between multiple owners

    {
        shared_ptr<Myclass>shared_ptr1 = make_shared<Myclass>();
        cout<<"Shared count : "<< shared_ptr1.use_count()<<endl;
        {
            shared_ptr<Myclass>shared_ptr3 = shared_ptr1;
            cout<<"Shared count : "<< shared_ptr1.use_count()<<endl;
        }
        shared_ptr<Myclass>shared_ptr2 = shared_ptr1;
        cout<<"Shared count : "<< shared_ptr1.use_count()<<endl;
    }


    //weak pointer

    weak_ptr<int> weak_ptr1;
    {
        shared_ptr<int>shared_ptr1 = make_shared<int>(25);
        weak_ptr1 = shared_ptr1;
    }

    
}