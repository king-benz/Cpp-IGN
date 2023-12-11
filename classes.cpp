#include<iostream>
#include<string.h>

using namespace std;

class Employee
{
    private:
        int employee_id;
        double salary;
        string designation;
    
    public:
        Employee()
        {
            cout<<"Enter the Employee ID : ";
            cin>>employee_id;

            cout<<"Enter the Employee salary : ";
            cin>>salary;

            cout<<"Enter the Employee Designation : ";
            cin>>designation;
        }

        Employee(int id , double ctc , string gig)
        {
            employee_id = id;
            salary = ctc;
            designation = gig;
        }

        Employee(Employee &E)
        {
            employee_id = E.employee_id;
            salary = E.salary;
           // strcpy(designation,E.designation);
           designation = E.designation;

        }
        void display()
        {
            cout<<"Employee ID : "<<employee_id<<endl;
            cout<<"Employee salary : "<<salary<<endl;
            cout<<"Employee Designation : "<<designation<<endl;
        }

};

class student
{
    int rollno;
    char name[50];
    double fee;

    public:
    student();
    void display();
     
};
 
    student::student()
    {
        cout<<"Enter the RollNo:";
        cin>>rollno;
        cout<<"Enter the Name:";
        cin>>name;
        cout<<"Enter the Fee:";    
        cin>>fee;
    }    
 
   void student::display()
    {
        cout<<rollno<<"\t"<<name<<"\t"<<fee;
    }

int main()
{
    Employee E1;
    Employee E3(E1);
    Employee E2(811,500000,"Febin");

    E1.display();
    cout<<endl;
    E2.display();
    cout<<endl;
    E3.display();

}