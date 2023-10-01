#include<iostream>
using namespace std;

int main()
{   
    // using addition

    // int i, n=4;
    // for(i = n; i<=10*n; i = i+n)
    // {
    //     cout<<i<<" ";
    // }


    // using multiplication
    int n;
    cout<<"Enter the table: ";
    cin>>n;

    for(int i=1; i<=10; i = i + 1)
    {
        cout<<n<<"*"<<i<<"="<<i*n<<endl;
    }

}