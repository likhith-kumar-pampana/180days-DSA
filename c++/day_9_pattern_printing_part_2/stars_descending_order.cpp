#include<iostream>
using namespace std;

int main()
{
    int row,col;

    for(row=1; row<=5; row++)
    {
        for(col=5; col>=row; col = col-1)
        {
            cout<<"*"<<" ";
        }

        cout<<endl;
    }

    cout<<endl;

    // different way

    int roww,coll;

    for(roww=1; roww<=5; roww++)
    {
        for(coll=1; coll<= 5-(roww-1); coll++)  // imp part in code 
        {
            cout<<"*"<<" ";
        }

        cout<<endl;
    }

    cout<<endl;

    // another way

    int rowww, colll;

    for(rowww=5; rowww>=1; rowww= rowww - 1)
    {
        for(colll =1; colll<=rowww; colll++)
        {
            cout<<"*"<<" ";
        }

        cout<<endl;
    }
}