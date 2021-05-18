# include <iostream>
#include <bits/stdc++.h>
using namespace std ;

struct simple
{
    int min ;
};

struct simple k_th_smallest_element(int k , int arr[], int n)
{
    struct simple mini; 
    // Sorting the array 
    sort(arr,arr+n);    
    mini.min = arr[k+1]; 
    return mini;  
}

int main()
{
    int arr[] = {1,2,3,4,5,6, 7, 10, 4, 3, 20, 15};
    int k = 5 ;
    int n = sizeof(arr) / sizeof(arr[0]);

    struct simple mini = k_th_smallest_element( k , arr, n);
    
    cout<<"The kth smallest element in the array is :";
    cout<< mini.min << endl;
    return 0 ;
}
