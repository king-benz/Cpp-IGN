#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printvector(vector<pair<int,int> > &v)
{
    cout<<"size : " << v.size() <<endl;

    for(int i = 0; i < v.size(); i++)
    {
        cout<<"{"<< v[i].first<< " "<<v[i].second<<"} ";
    } 
    cout<<endl;
}

void printvector(vector<int> &v)
{
    cout<<"size : " << v.size() <<endl;

    for(int i = 0; i < v.size(); i++)
    {
        cout<<"{"<< v[i]<<"} ";
    } 
    cout<<endl;
}


int main()
{
    //vector of pairs
    vector<pair<int,int>> v ={{1,4},{2,5},{3,6}};
    printvector(v);

    int n;
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin>> x >> y;
        v.push_back({x,y});
    }

    printvector(v);

//vector of array 
    int N;
    cin>>N;
    vector<int> V[N];

    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;

        for(int j=0; j<n;j++)
        {
            int x;
            cin>>x;
            V[i].push_back(x);
        }
    }

    for(int i =0;i<N;i++)
    {
        printvector(V[i]);
    }

//vector of vector

cin>>N;
vector<vector<int>> k;

  for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        k.push_back(vector<int> ());//creating an empty vector
        
        for(int j=0; j<n;j++)
        {
            int x;
            cin>>x;
            k[i].push_back(x);
        }
    }

    for(int i =0;i<N;i++)
    {
        printvector(k[i]);
    }

}