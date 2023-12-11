#include<iostream>

using namespace std;

int factorial(int n)
{

   if(n<=1)
    return 1;
   
   else
   {
        int val = n * factorial(n-1);
        return val;
   }
}

int main()
{
    printf("%d \n\n",factorial(6));
}

