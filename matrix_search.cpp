// Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:
// Brute Force method
// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the previous row.
 
# include <iostream>
using namespace std ;

int main()
{
    int N , M ;
    cout<<"Enter number rows and columns : "<<endl;
    cin>>N>>M;
    int arr[N][M];

    for(int i = 0 ; i < N ; i++)
    {
        for(int k = 0 ; k < M ; k++)
        {
            cin>>arr[i][k];
        }
    } 

    cout<<arr[1][1];

    int element;
    cout<<"Enter the element : ";
    cin>>element;
    int temp = M;
    int k = 0 ;

    for(int i = 0 ; i < N ; i++)
        {
            for(int j = 0 ; j < M ; j++)
            {
                if(element == arr[i][j])
                {
                    cout<<"The element "<<element<<" was found at ("<<i<<","<<j<<") th Index "<<endl;
                    break;
                    k = 1;
                }
            }
        }
    if(k==0)
    {
        cout<<"No the element was not found ";
    }
   
    return 0 ;
}