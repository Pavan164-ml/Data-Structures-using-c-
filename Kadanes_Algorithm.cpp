#include <iostream>
using namespace std ;

int main()
{
    cout<<"Enter the number of elements"<<endl;
    int n ;
    cin>>n;

    int arr[n];
    cout<<"Enter the "<<n<<" 5
    elements"<<endl;
    for(int i = 0 ; i < n ;i++)
    {
        cin>>(arr[i]);
    }
    
    int max_so_far , curr_max ;

    max_so_far = arr[0];
    curr_max = arr[0];

    for(int i = 0 ; i < n ; i++)
    {
        curr_max = max(arr[i] , curr_max+arr[i]);
        max_so_far = max(curr_max , max_so_far);        // updates only when previous sum is greater than the present sum here we need to concentrate only on the sub array which gives us the maximum sum
    }
    cout<<"The maximum sum of the sub array is :"<<max_so_far<<endl;

    
    return 0;
}