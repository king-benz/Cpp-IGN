#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack <int> s;
    s.push(2);
    s.push(5);
    s.push(7);
    s.push(9);

    while(! s.empty())
    {
        cout<< s.top()<<endl;
        s.pop();
    } 

cout<<endl<<endl;

    queue <char> q;
    q.push('1');
    q.push('2');
    q.push('3');
    q.push('4');
    q.push('5');
    q.push('6');
    q.push('7');
    q.push('8');
    q.push('9');
    q.push('0');

    while(! q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

}