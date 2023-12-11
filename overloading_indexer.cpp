#include<iostream>

using namespace std;

class Marks{
int subjects[3];
public:
    Marks(int sub1,int sub2,int sub3){
    subjects[0] = sub1;
    subjects[1] = sub2;
    subjects[2] = sub3;
    }

    int operator[](int position){
        if(position < 4 && position > 0)
            return subjects[position-1];
        else
            return 0;
    }
};

int main()
{
Marks anil(22,33,55);

cout << anil[0] <<endl;
cout << anil[1] <<endl;
cout << anil[2] <<endl;
cout << anil[3] <<endl;
    return 0;
}
