#include<iostream>
using namespace std;

int main()
{
    int row,col;

    for(row=1; row<=5; row++)
    {
        for(col=5; col>= (5-(row-1)); col=col-1)
        {
            cout<<col<<" ";
        }

        cout<<endl;
    }

    cout<<endl;

    //diff way

    int roww,coll;

    for(roww=5; roww>=1; roww=roww-1)  // u can write this as --roww
    {
        for(coll=5; coll>= roww; coll=coll-1)
        {
            cout<<coll<<" ";
        }

        cout<<endl;
    }
}