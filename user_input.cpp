#include<iostream>

using namespace std;

int main()
{
    string name,name1;
    int age;

    cin>>age;
    cin>>name;
    int len = name.length();
    name[len] = '\0';
    cout<<"Hello "<<name;

    getline(cin,name1);
    cout<<"Hello "<<name1;
}