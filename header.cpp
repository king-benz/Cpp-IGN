#include"header.h"

const char* Print_name(char fl)
{
    if(fl == 'f' || fl == 'F')
    {
        return "Febin";
    }

    else if(fl == 'e' || fl == 'E')
    {
        return "Ebin";
    }

    else
    {
        return "NoName";
    }
}