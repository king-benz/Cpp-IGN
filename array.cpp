#include<iostream>

using namespace std;


int main()
{
    int numbers[] = {1,2,3,4,5,6,7,8,9,0};
    int d2_num[][3] = {
                            {1,2,3},
                            {4,5,6},
                            {7,8,9}
                     };

    numbers[8] =15;

    for(int i = 0; i < 3;i++)
    for(int j = 0; j < 3;j++)
        cout<<d2_num[i][j]<<endl;

    cout<<endl<<numbers; // address
}