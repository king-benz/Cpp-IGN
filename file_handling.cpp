#include<iostream>
#include<fstream>

using namespace std;


int main()
{
    string food;

    cout<<"What did You Eat ? : ";
    cin>>food;

    fstream file("food.txt",ios::out|ios::app);
    file<<food<<endl;
    file.close();

    ifstream file1("food.txt");
    file1>>food;

    cout<<"You ate : "<<food<<endl;
    file.close();

    ofstream file3("food.txt",ios::app);

    for(int i = 0; i<10; i++)
    {
        cout<<"What do you wanna eat? : ";
        cin>>food;
        file3<<food<<endl;
    }
    
    file.close();

}
