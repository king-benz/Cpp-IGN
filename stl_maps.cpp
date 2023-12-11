#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string> m;

    m[1] = "febin";
    m[5] = "Ebin";

    //m[key] = value

    m.insert({4,"trixter"});

    map<int,string> :: iterator it;
    
    for(it = m.begin(); it != m.end(); it++)
    {
        cout<<(*it).first<<" -> "<<(*it).second<<endl;
    }
    
    cout<<endl<<endl;

    for(it = m.begin(); it != m.end(); it++)
    {
        cout<<it->first<<" -> "<<it->second<<endl;
    }
    cout<<endl<<endl;

    for(auto i : m)
    {
       cout<<i.first<<" -> "<<i.second<<endl;
    }
    cout<<endl<<endl;


    // find function returns  an iterator

    auto itc = m.find(3);

    if(itc != m.end() )
        m.erase(it);//removes the map with key 4

    m.clear();//clears the entire map


    //unordered maps

    unordered_map<int,string> x;
    x[1] = "febin";
    x[6] = "ebin";
    x[3] = "trixter";
    x[4] = "flipperzues";

    for(auto its = x.begin(); its != x.end(); its++)
    {
        cout<<"{"<<its->first<<","<<its->second<<"}"<<endl;
    }   

}