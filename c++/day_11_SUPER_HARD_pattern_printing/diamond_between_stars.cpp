#include<iostream>
using namespace std;

int main()
{
    int row, col, n;
    cout<<"enter the input: ";
    cin>>n;

    for(row=4; row>=1; --row)
    {
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        for(col=1; col<=2*n-2*row; col++)
        {
            cout<<"  ";
        }
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    //cout<<endl;    // no need of this, think why


    for(row=1; row<=4; row++)
    {
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        for(col=1; col<=2*n-2*row; col++)
        {
            cout<<"  ";
        }
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}