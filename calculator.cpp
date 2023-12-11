#include<iostream>
#include<stdlib.h> 

using namespace std;


double addition(int a,int b);
double subtraction(int a,int b);
double multiplication(int a,int b);
double division(int a,int b);

int main()
{
    int a, b, option;
    char choice;

menu:
    system("clear");
    cout<<"-------MENU-------"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multlipication"<<endl;
    cout<<"4.Division"<<endl<<endl;
    
    cout<<"Enter your choice : ";
    cin >> option;

    if(option < 0 || option > 4)
    {
        goto menu;
    }

    cout << "Enter 2 numbers : ";
    cin>>a>>b;

    if(option == 1)
     printf("SUM OF %d AND %d : %f \n",a,b,addition(a,b));

    else if(option == 2)
     printf("DIIFERENCE OF %d AND %d : %f\n",a,b,subtraction(a,b));

    else if(option == 3)
     printf("PRODUCT OF %d AND %d : %f\n",a,b,multiplication(a,b));

    else if(option == 4)
     printf("QUOTIENT OF %d AND %d : %f\n",a,b,division(a,b));

     cout<<"Do you wish to continue (Y/N): ";
     cin>>choice;

     if(choice == 'Y' || choice == 'y')
      goto menu;

}


double addition(int a, int b)
{
    return a+b;
}

double subtraction(int a, int b)
{
    return a-b;
}

double multiplication(int a,int b)
{
    return a*b;
}

double division(int a, int b)
{
    return a/b;
}