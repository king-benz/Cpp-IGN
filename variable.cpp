#include<iostream>
using namespace std;


int main()
{
    string name = "Febin";
    int age = 22;

    char grade;
 
    cout <<"Hi, I am "<< name <<" of age "<< age << endl;
    cout <<"Enter your grade : ";
    cin >> grade;

    cout << "Your grade is : " << grade << endl;
    
    double gpa;
    char gender;
    bool ismale;

    cout << "Your GPA : ";
    cin >> gpa;

    cout << "Gender : ";
    cin >> gender;

    if(gender == 'M' || gender == 'm')
        ismale = true;

    else
        ismale = false;

    cout<<"You are a "<< (ismale?"Male":"Female") << " with a GPA of "<< gpa << endl << endl;
}