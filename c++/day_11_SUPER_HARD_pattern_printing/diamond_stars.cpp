#include<iostream>
using namespace std;

int main()
{
    int row, col, n;
    cout<<"enter the input: ";
    cin>>n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            cout<<" ";    // this is the most important part, we should only give one space here, instead of giving 2 spaces that we used until now
        }
        for(col=1; col<=row; col++)
        {
            cout<<"* ";  // this can be left as it is, with a space after *
        }
        cout<<endl;

    }
    for(row=n; row>=1; --row)
    {
        for(col=1; col<=n-row; col++)
        {
            cout<<" ";    // this is the most important part, we should only give one space here, instead of giving 2 spaces that we used until now
        }
        for(col=1; col<=row; col++)
        {
            cout<<"* ";  // this can be left as it is, with a space after *
        }
        cout<<endl;

    }
}