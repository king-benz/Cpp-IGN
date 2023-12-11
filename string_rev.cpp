#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string rev(string inputStr) {
    /////////////////////////////
	//code here
 int len = inputStr.length();
    int n = len-1;
    int i = 0;
    while(i<=n){
        //Using the swap method to switch values at each index
        swap(inputStr[i],inputStr[n]);
        n = n-1;
        i = i+1;
  }
	return inputStr;// should return reversed string
}

bool isvowel(char test)
{
    char lower = tolower(test);
    
    vector <char> vowel = {'a','e','i','o','u'};
    auto itr = find(vowel.begin(),vowel.end(),lower);
    
    if(itr != vowel.end())
    {
        return true;
    }

    return false;
}

string breakStr(string input) {
    
	//////////////////////////////
	//code here
	
	int x = 0;
	string str;
	
    fill_n(str.begin(),input.length(), '#');
	
	for(int i = 0; i < input.length()-1; i++)
	{
	    if(isvowel(input[i]))
	    {
	        swap(str[x],input[i]);
	        x++;
	    }
	}
	
	for(int i = 0; i < input.length()-1; i++)
	{
	    if(!isvowel(input[i]))
	    {
	        swap(str[x],input[i]);
	        x++;
	    }
	}
	
	//////////////////////////////
	
	return str;//final string;
}

int main()
{
    string f ="febin";
    string i = rev(f);
    cout<<i<<endl;

    i = breakStr(f);
    cout<<i<<endl;
  
}