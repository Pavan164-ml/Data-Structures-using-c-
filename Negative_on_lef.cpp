#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void move_left(int arr[] , int n)
{
    int j = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
            {
                swap(arr[i],arr[j]);
            }
            j++;
        }
    }
    cout<<"The number of elements in the array are: ";
    cout<<n<<endl;
    cout<<"The list is :"<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<endl;
    }
}


int main()
{
    int n ;
    int arr[] = {1 ,-5 ,9 ,-7};
    n = sizeof(arr)/sizeof(arr[0]);
    move_left(arr,n);
    return 0 ;
}


/*
1 -5 9 -7

i = 0 
j = 0

__________________________________________________

i = 1
j = 0
-5 1 9 -7

___________________________________________________

i = 2
j = 1

-5  1 9 -7

_____________________________________________________

i = 3
j = 1

-5 -7 1 9

______________________________________________________

i = 4
j = 2




*/