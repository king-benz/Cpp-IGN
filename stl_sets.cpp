#include<bits/stdc++.h>
using namespace std;
#include<iostream>


int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(1);

    auto it = s.find(2);

    for(int value : s)
    {
        cout<<value<<" ";
    }

    if(it != s.end() )
        s.erase(it);
    cout<<endl;

    //multiset
    //multi sets allow storing of duplicate elements in the  set

    multiset <string> s1;

    s1.insert("abc");
    s1.insert("dfsh");
    s1.insert("abc");
    s1.insert("sdf");

    auto it1  = s1.find("abc");//points to the first instance of the element abc
try
{
     if(it1 != s1.end())
    {
        s.erase(it);//removes the first instance of the element abc
    }

    //s.erase("abc"); //removes ALL instances of element abc
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}

   
}
