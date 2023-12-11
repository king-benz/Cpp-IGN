#include <iostream>

using namespace std;

class Marks{
int mark;
public:
    Marks(){
    mark = 0;
    }
    Marks(int m){
    mark = m;
    }
    void YourMarkPlease(){
    cout << "your mark is "<<mark<<endl;
    }

    void operator+=(int bonusmark){
    mark = mark + bonusmark;
    }

    friend void operator-=(Marks &curObj, int redmark);

};

void operator-=(Marks &curObj, int redmark){

curObj.mark -= redmark;
}

int main()
{
    Marks anilsmark(45);
    anilsmark.YourMarkPlease();

    int x = 20;

    anilsmark += x;
    anilsmark.YourMarkPlease();

    anilsmark -= x;
    anilsmark.YourMarkPlease();

    return 0;
}