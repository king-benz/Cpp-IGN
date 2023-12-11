#include<iostream>

using namespace std;

int main()
{
    int time = 2200;
    int *time_ptr = &time;

    double gpa = 2.7;
    double *gpa_ptr = &gpa;

    string name = "Febin";
    string *name_ptr = &name;
    
    cout<<*time_ptr<<endl;
    cout<<*name_ptr<<endl;
    cout<<*gpa_ptr<<endl;

}