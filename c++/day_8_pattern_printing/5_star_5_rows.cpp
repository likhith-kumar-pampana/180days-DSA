#include<iostream>
using namespace std;

int main()
{
    int row, col;

    for(row=1; row<=5; row++ )
    {
        for(col=1; col<=5; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;  // so that it prints in new line
    }

    int row2, col2;
    for(row2=1; row2<=4; row2++)
    {
        for(col2=1; col2<=5; col2++)
        {
            cout<<"10 ";
        }
        cout<<endl;
    }
}