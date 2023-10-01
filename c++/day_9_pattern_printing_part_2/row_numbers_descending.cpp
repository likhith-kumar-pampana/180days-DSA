#include<iostream>
using namespace std;

int main()
{
    int row, col;

    for(row=5; row>=1; row=row-1)
    {
        for(col=1; col<=row; col= col+1)
        {
            cout<<col<<" ";
        }

        cout<<endl;
    }

    cout<<endl;

    //different way

    int roww,coll;

    for(roww=1; roww<=5; roww++)
    {
        for(coll=1; coll<= (5 - (roww-1)); coll++)
        {
            cout<<coll<<" ";
        }

        cout<<endl;
    }
}