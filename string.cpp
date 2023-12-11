#include<iostream>

using namespace std;

int main()
{
    string phrase = "FlipperZeus vs Trixter",name,extention;
    string a,b,c,user_name;
    cout << phrase<<endl;

    cout<< phrase.length()<<endl;

    cout<< phrase[0]<<endl;
    cout<<phrase[6]<<endl;

    phrase[8] ='b';
    cout<<phrase<<endl;

    cout<<phrase.find('F',0)<<endl;
    cout<<phrase.find('e',2)<<endl;//checks if there is any occurance of 'e' after the 3rd index
    
    cout<<phrase.substr(2,5)<<endl<<endl;//sub string

    cout<<"enter a name : ";
    getline(cin,name);
    cout<<(name.empty()?"You didnt enter a name!! \n":"\n");

    name.clear(); //  clear a string
    cout<<name;

    name = "febin";
    extention = "@ignitarium.com";

    cout<<"Your email is : "<<name.append(extention)<<endl;

    a = "febin";
    b = "trixter";
    c = "flipperzues";

    char e,f,g;

    e = a.at(0);//1st char of a
    f = b.at(1);//2nd char of b
    g = c.at(2);//3rd char of c

    printf("%c%c%c\n\n",e,f,g);

    user_name = b.insert(0,c);
    printf("%s \n",user_name.c_str());


    cout<<"Enter your phonne number with area code : ";
    getline(cin,phrase);

    phrase.erase(0,3);

    cout<<phrase<<endl;








    
}