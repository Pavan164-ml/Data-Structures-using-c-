#include<iostream>
using namespace std;

struct Pair
{
    int min ;
    int max ;
};


// Here return type of getMinMax Function is Pair which is struct basically
struct Pair getMinMax(int arr[] , int len)
{
    // defining a structure of Pair type which is called minmax
    struct Pair minmax ;
    int i ;
    int n = len ;
    if(n==1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
    }

    // Initialize minimum and maximum value of array's first 2 elements
    if(arr[0]>arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }

    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    for(int i = 2 ; i < n ; i++)
    {
        if(arr[i]>minmax.max)
            minmax.max = arr[i];
        
        else if (arr[i] < minmax.min)
            minmax.min = arr[i];
    }
    return minmax ; 
}


int main()
{
    
    int len = 6 ;
    int arr[] = {9944,5556,13,2,431,54};

    struct Pair minmax = getMinMax(arr,len);

    cout<<"The Minimum number in the element is :";
    cout<< minmax.min <<endl;
    cout<<"The maximum number in the element is :";
    cout<< minmax.max <<endl;

    return 0 ;
}