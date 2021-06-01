#include <bits/stdc++.h>
using namespace std;
int main()
{
    int name[] = {1,2,3,3,4};
    int n = sizeof(name)/sizeof(name[0]);
    int check[n] ;
    int m = 0;
    cout<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        check[i] = name[i];
        for(int k = 0 ; k < i ; k++)
        {
            m++;
            if(check[k]==name[i])
            {
                cout<<"The string has duplicate characters : "<<check[k]<<endl;   
            }
        }
    }
    cout<<m;
}