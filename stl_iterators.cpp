#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    vector<int> V = {1,2,3,4,5,6};

    for(int i = 0; i<V.size(); i++)
    {
        cout<<V[i]<<" ";
    }

    cout<<endl<<endl;

    vector<int>::iterator it = V.begin();
    cout<<(*it)<<endl;

    it = V.end();
    cout<<(*(it-1))<<endl<<endl;

    for(it = V.begin(); it != V.end(); it++)
    {
        cout<<(*it)<<" ";
    }

    cout<<endl<<endl;
    // iterator for vector of pair

    vector<pair<int,int>> v_p = {{1,4},{2,5},{3,6}};
    vector<pair<int,int>> :: iterator itp;

    for(itp = v_p.begin();itp!= v_p.end();itp++)
    {
        cout<<(*itp).first<<"  "<<(*itp).second<<endl;
    }

     for(itp = v_p.begin();itp!= v_p.end();itp++)
    {
        cout<<itp->first<<"  "<<itp->second<<endl;
    }
}