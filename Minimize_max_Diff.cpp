#include <iostream>
using namespace std ;

struct mini
{
    int min ;
    int max ;
};

int min_max_finder(int arr[], int n , int k)
{
    struct mini small ;

    if(n==1)
    {
        small.min = arr[0];
        small.max = arr[0];
    }
    if(arr[0]>arr[1])
    {
        small.min = arr[1];
        small.max = arr[0]; 
    }
    else
    {
        small.min = arr[0];
        small.max = arr[1];
    }

    for(int i = 2 ; i < n ; i++)
    {
        if(arr[i] < small.min)
        {
            small.min = arr[i];
        }

        if(arr[i] > small.max )
        {
            small.max = arr[i];
        }
    }
    
    int tiny , speck ;
    int maxi , large ;

    tiny = small.min + k ;
    speck = small.min - k ;

    maxi = small.max - k;
    large = small.max + k;

    int res1 , res2 , res3 , res4;

    res1 = maxi - tiny ;
    res2 = large - speck ;

    res3 = large - tiny ;
    res4 = maxi - speck ;

    int first_final = min(res1 , res2 ); 
    int second_final = min(res3 , res4);

    int third_final = min(first_final,second_final);

    return third_final ;
}


int main()
{
    int n ; 
    cout<<"Enter the lenght of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements : ";
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    int k ;
    cout<<"Now enter the difference term ";
    cin>>k ;
    int p = min_max_finder(arr,n, k);


    cout<<"The maximum difference between the largest and smallest element is :";
    cout<<p;
    return 0 ;

}