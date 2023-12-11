#include<iostream>
using namespace std;


class Cars
{
    string make;
    string model;
    float kmpl;
    float hp;
    float torque;
    string type;
    string posture;
    int fuel;
    float distance;

    public:
       Cars(string cmake,string cmodel,float ckmpl,float chp,float ctorque,string ctype,string cposture,int cfuel)
       {
            make = cmake;
            model = cmodel;
            kmpl = ckmpl;
            hp = chp;
            torque = ctorque;
            type = ctype;
            posture = cposture;     
            fuel = cfuel;
       } 

       void run(float dist)
       {

        distance = dist;

        if(dist/kmpl > fuel)
        {
            throw 404;
            //throw "LOW FUEL!! WONT BE ABLE TO COMPLETE THE TRIP!! REFUEL!!";
        }

        cout<<"Running"<<endl;
        fuel -= distance/kmpl;
        
        cout<<"FUEL REMAINING : "<<fuel<<endl<<endl;
       }

       void refuel()
       {
            cout<<"You Need Atleast : "<<distance/kmpl - fuel <<"L To Complete The Trip"<<endl<<endl;
       }

};

int main()
{
    Cars K("Koenigsegg","Agera",10,2300,1850,"Megacar","sport",50);
    
    try
        {
            K.run(150);
            K.run(1000);
        }
    
    catch (const char * txtexception)
        {
            cout<<"Exception : "<<txtexception<<endl;
            K.refuel();
        }

    catch (int Exceptioncode)
        {
            cout<<"Exception code : "<<Exceptioncode<<endl;
        }

    catch(...)
        {
            cout<<"Exception Occured!"<<endl;
        }
    
}