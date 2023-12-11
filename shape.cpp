#include <iostream>

using namespace std;

int main()
{
    int i = 0, j = 0;

    for (i = 0; i < 20; i++)
    {
        cout << '*';
    }

    cout << endl;
    
    for (j = 0; j <= 5; j++)
    {
        for (i = 0; i < 20; i++)
        {
            if (i == 0 || i == 19)
                cout << '*';

            else
                cout << " ";
        }

        cout << endl;
    }

    for (i = 0; i < 20; i++)
    {
        cout << '*';
    }

    cout << endl << endl;

    for (i = 0; i < 20; i++)
    {
        cout << '-';
    }

    cout << endl;

    for (j = 0; j <= 5; j++)
    {
        for (i = 0; i < 20; i++)
        {
            if (i == 0 || i == 19)
                cout << '|';

            else
                cout << " ";
        }

        cout << endl;
    }

    for (i = 0; i < 20; i++)
    {
        cout << '-';
    }

    cout << endl
         << endl;
}