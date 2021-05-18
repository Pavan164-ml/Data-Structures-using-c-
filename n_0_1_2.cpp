// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include <iostream>
using namespace std ;

void this_will_do_that(int arr[] , int n)
{
    int low = 0 ;
    int mid = 0 ;
    int high = n-1 ;
    while(mid <= high)
    {
        switch(arr[mid])
        {
            case 0 : 
                swap(arr[low],arr[mid]);
                low++;
                mid++;
                break ;
            
            case 1 :
                mid++;
                break;
            
            case 2 :
                swap(arr[mid],arr[high]);
                high--;
                break;
        }
    }
    cout<<"The list is :"<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int arr[] = {0, 1 ,2 , 0 , 1 , 2 , 0 , 1 , 2 };
    int n = sizeof(arr)/sizeof(arr[0]);
    this_will_do_that(arr,n);
    return 0 ;
}