#include<iostream>
using namespace std;

int main()
{
    int row, col;
    int n;
    cout<<"enter your number: ";
    cin>>n;
    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5-row; col++)
        {
            cout<<"  ";
        }
        for( char name='A'; name<='A'+row-1; name++)
        {
            cout<<name<<" ";
        }

        cout<<endl;
    }

    cout<<endl;

    //diff way

    int roww, coll;
    
    for(roww=1; roww<=5; roww++)
    {
        for(coll=1; coll<=5-roww; coll++)
        {
            cout<<"  ";
        }

        for(coll=1; coll<=roww; coll++)   // we know we have to have row number of chars in a row
        {
            char name = 'A'+coll -1;
            cout<<name<<" ";
        }

        cout<<endl;
    }
}