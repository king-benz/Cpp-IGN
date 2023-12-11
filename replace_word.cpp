#include<iostream>
using namespace std;

int main()
{
    string sentence ="";
    string exc,repl; 
    cout<<"Enter a Sentence : ";
    getline(cin,sentence);

    cout<<"Enter the word to replace : ";
    getline(cin,exc);

    cout<<"Enter a Word to be replaced with : ";
    getline(cin,repl);
    
    int size = exc.size();

    while(sentence.find(exc) != string::npos)
        sentence.replace(sentence.find(exc),size,repl);

    cout<<sentence<<endl<<endl;
    return 0;
}