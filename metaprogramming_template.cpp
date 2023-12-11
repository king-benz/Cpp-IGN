#include<iostream>
#include<bits/stdc++.h>

using namespace std;

namespace custom_tempates
{
    template<typename T>
    class is_pointer
    {
        static constexpr bool value = false;
    }

    class is_pointer<*T>
    {
        static constexpr bool value = true;
    }

}

int main()
{

}