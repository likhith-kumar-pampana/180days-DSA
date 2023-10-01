#include<iostream>
using namespace std;

int main()
{
    // // printing 100 to 200 numbers
    // int i;
    // for(i=100; i<=200; i++)
    // {
    //     cout<<i <<endl;
    // }


    // print numbers in reverse order
    int n,i;
    cout<<"enter the number: ";
    cin>>n;

    for(i = n; i>=1; i=i-1)
    {
        cout<<i<<" ";
    }
}