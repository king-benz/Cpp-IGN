#include<bits/stdc++.h>
using namespace std;

/*void stl_pair()
{
    pair<int,string> p;
    p = make_pair(13,"febin") ;
    cout<<p.first<<" "<<p.second<<endl;

    p  = {13,"ebin"};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,string> &p1 = p;
    p1.first = 9148;
    cout<<p.first<<" "<<p.second<<endl;

    int a[] = {1,2,3};
    int b[] = {4,5,6}; // lets say elements of each array at same index is related ie any changes made to one must be reflected in the other

    pair <int,int> p_array[3];
    p_array[0] = {1,4};
    p_array[1] = {2,5};
    p_array[2] = {3,6};

    swap(p_array[0],p_array[3]);
    for(int i = 0; i<3;i++)
    {
        cout<<p_array[i].first<< " "<<p_array[i].second<<endl;
    }

    cin>>p.first>>p.second;
}
*/
void printvector(vector<int> v)
{
    cout<<"size : " << v.size() <<endl;

    for(int i = 0; i < v.size(); i++)
    {
        cout<< v[i]<< " ";
    } 
    cout<<endl;
}

int main()
{

    //stl_pair();

    vector <int> v; //dynamic memmory
    int n,x;
    cin>>n;

    for(int i = 0;  i<n; i++)
    {
        cin>>x;
        v.push_back(x);//appends elements to the end of the vector
    }

    printvector(v);

    vector <int> &v2 = v;
    v2.push_back(5);

    printvector(v);
    printvector(v2);
}