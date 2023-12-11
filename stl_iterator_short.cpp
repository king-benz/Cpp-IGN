#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
     vector <int> v = {1,2,3,4,5};

     for(int i = 0; i < v.size(); i++)
     {
        cout<< v[i]<<" ";
     }

     cout<<endl<<endl;

    vector <int> :: iterator it;

    for(it = v.begin(); it!= v.end(); it++)
    {
        cout<<(*it)<< " ";
    }

    cout<<endl<<endl;

    for(int value : v) //iterates through each element
    {
        cout<<value<< " ";//iterates through each element
    }

    cout<<endl<<endl;

    vector< pair<int,int> > v_p = {{1,2},{3,4},{5,6}};

    for(pair<int,int> &value : v_p)
    {
        cout<<"{"<<value.first<<","<<value.second<<"}"<<" ";
    } 

    cout<<endl<<endl;



    //shortened

   //  vector <int> :: iterator it;
    for(auto it = v.begin(); it!= v.end(); it++) // auto replaces the need to define the iterator as 
    {                                             //it automatically defines it as an iterator
        cout<<(*it)<< " ";
    }

    cout<<endl<<endl;

    vector< pair<int,int> > v_p1 = {{1,2},{3,4},{5,6}};

    for(auto &value : v_p1) // auto replaces the need to write pair<int,int>
    {
        cout<<"{"<<value.first<<","<<value.second<<"}"<<" ";
    } 

    cout<<endl<<endl;

 }