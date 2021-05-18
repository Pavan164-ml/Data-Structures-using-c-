#include<iostream>
using namespace std;
int main()
{
      int num,i=1,c=0;
      cout<<"\n\nTo Check Number Prime or Not\n\n\nEnter Number : ";
      cin>>num;
      if(num==1)
            cout<<"1 is neither prime nor not prime";
      while(i<=num)
      {
            if(num%i==0)
            c++;
            i++;
      }
      if(c==2)
            cout<<"\n\nThis is Prime Number \n\n ";
      else
           cout<<"\n\nThis is Not Prime Number";
      return 0;
}