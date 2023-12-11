#include<iostream>

using namespace std;

struct Phone 
{

    private:
        string make;
        int mfg_date;
        int storage;
        string color;
        float price;

    public:
        void phone_setter(string smake,int smfg_date,int sstorage,string scolor,float sprice)
        {
           make = smake;
           mfg_date = smfg_date;
           storage = sstorage;
           color = scolor;
           price = sprice;  
        }

        void phone_getter()
        {
            cout<<"MAKE : "<<make<<endl;
            cout<<"MANUFACTURING DATE : "<<mfg_date<<endl;
            cout<<"STORAGE SIZE : "<<storage<<endl;
            cout<<"COLOR VARIENT : "<<color<<endl;
            cout<<"PRICE : "<<price<<endl;
        }

};

//NESTED STRUCTURE

struct Person : private Phone
{
    private :
     string name;
     int age;
     char sex;

    public:
     void person_getter()
     {
        cout<<"NAME : "<<name<<endl;
        cout<<"AGE : "<<age<<endl;
        cout<<"SEX : "<<sex<<endl;
        phone_getter();
     }

     void person_setter(string pname, int page, char psex,string smake,int smfg_date,int sstorage,string scolor,float sprice)
     {
        phone_setter(string smake,int smfg_date,int sstorage,string scolor,float sprice);
        name = pname; 
        sex = psex;
        age = page;
     }

};

class Student : private Person { 
    string course; 
    int fee; 
  
public: 
    void set_s(string pname, int page, char psex,string smake,int smfg_date,int sstorage,string scolor,float sprice) 
    { 
        person_setter(string pname, int page, char psex,string smake,int smfg_date,int sstorage,string scolor,float sprice); 
        cout << "Enter the Course Name:"; 
        cin >> course; 
        cout << "Enter the Course Fee:"; 
        cin >> fee; 
    } 
  
    void display_s() 
    { 
        person_getter();
        //phone_getter() wont work because it was private in person
        phone_getter();
        cout <<"Course: "<< course << "\nFee: " << fee << endl; 
    } 
}; 

int main()
{
        // Phone S23;
        //     S23.make = "Samsung";
        //     S23.mfg_date = 2023;
        //     S23.storage = 256;
        //     S23.color = "RED";
        //     S23.price =75995;

        Phone S23;
        S23.phone_setter("Samsung",2023,256,"RED",75995);
        S23.phone_getter();

        Student S;
        S.set_s("Febin", 22,'M',"Samsung",2023,256,"RED",75995) 

    
}