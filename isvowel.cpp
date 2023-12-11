#include<iostream>
#include<bits/stdc++.h>


using namespace std;

bool isvowel(char test)
{
    char lower = tolower(test);
    
    vector <char> vowel = {'a','e','i','o','u'};
    auto itr = find(vowel.begin(),vowel.end(),lower);
    
    if(itr != vowel.end())
    {
        return true;
    }

    return false;
}
int main()
{
    char ch;
    cout<<"enter a character : ";
    cin>>ch;

    if(isvowel(ch))
        cout<<"Vowel"<<endl;
    else
        cout<<"Not a Vowel"<<endl;
}