#include <bits/stdc++.h>
#include<iostream>
using namespace std ;

void string_Reverser(string& str)
{
    int n = str.length();
    for(int i = 0 ; i < n/2 ; i++)
        swap(str[i],str[n-i-1]);
}

int main()
{
    string str = "pavan";
    string_Reverser(str);
    cout << str;
    return 0;
}