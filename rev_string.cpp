//program to reverse a string in C++
#include <iostream>
using namespace std;
int main()
{
    string as = "Pavan";
    char temp ;
    int len = as.length();
    int n = len -1 ;
    int i = 0 ;
    while(i <= n)
    {
        temp = as[i];
        as[i] = as[n];
        as[n] = temp ;
        n--;
        i++;
    }
    cout<<as<<endl;
}