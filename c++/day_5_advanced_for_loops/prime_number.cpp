#include<iostream>
using namespace std;

int main()
{

    int n,i;
    cout<<"enter the number: ";
    cin>>n;

    if(n<2)
    {
        cout<<"not prime";
        return 0;
    }
    else
    {
        for(i=2; i<n; i = i + 1)
        {
            if(n%i == 0)
            {
                cout<<"not a prime number"<<endl;
                return 0;
            }
            //else statement is not even needed here
        }
        
        cout<<"prime number"<<endl;
        return 0;
    }


}