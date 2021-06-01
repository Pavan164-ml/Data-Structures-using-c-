#include<iostream>
using namespace std;


int m = 0 ;

int fib(int n )
{
    int cache[n] ;
    int value = 0 ; 
    int arr[n]; 

    for(int i = 0 ; i < n ; i++)
    {
        if (fib(n) == cache[i])
        value = cache[i];
    }
    
    if(n==1)
        value = 1 ;
    
    else if(n==2)
        value = 1;

    else if(n>2)
    {

        value = fib(n-1) + fib (n-2);
        for(int k = 0 ; k < n ; k++)
        {
            cache[k] = value ;
        }
    }
    return value;    
}
int main()
{
    int n = 10 ;
    int k = fib(n);
    cout<<k<<endl;
    cout<<"The number of times the function was called is :"<<endl;
    cout<<m;
}