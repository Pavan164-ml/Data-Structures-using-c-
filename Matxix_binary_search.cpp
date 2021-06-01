# include<iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main()
{
    int element;
    vector<vector<int>> vec1
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for(int i = 0 ; i < vec1.size() ; i++)
    {
        for(int j = 0 ; j < vec1[i].size() ; j++)
        {
            cout<<endl;
            cout<<vec1[i][j];
        }
    }

    cout<<endl<<"Enter the element to be searched : ";
    cin>>element;

    int s , e ;
    int k = 0 ;
    int mid = 0 ;
    for(int i = 0 ; i < (int)vec1.size(); i++)
    {
        if(binary_search(vec1[i].begin(),vec1[i].end(),element))
        {
            cout<<"The element "<<element<< " was found "<<endl;
            k = 1;
            break;
        }
    }
    if(k==0)
    {
        cout<<"The element was not found";
    }

    

    }
