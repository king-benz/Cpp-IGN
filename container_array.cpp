#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    array<int,30> test1;
    array <int,30> test2 = {1,2,3,4,5,6,7,8,9,0,0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9};

    //Functions on array

    cout<<"VALUE AT INDEX 2 :"<<test2.at(30)<<endl;
    cout<<"VALUE AT INDEX 2 :"<<test2[2]<<endl;

    cout<<"VALUE AT FRONT OF THE ARRAY : "<<test2.front()<<endl;
    cout<<"VALUE AT END OF THE ARRAY : "<<test2.back()<<endl;

    test1.fill(0);
    test1.swap(test2);
    test2.empty();
    
    cout<<"NO OF INDICES OCCUPIED IN THE ARRAY : "<<test1.size()<<endl;
    cout<<"MAX SIZE OF ARRAY : "<<test1.max_size()<<endl;

    return 0;
}