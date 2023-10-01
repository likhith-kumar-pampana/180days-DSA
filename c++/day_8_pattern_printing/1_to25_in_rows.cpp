#include<iostream>
using namespace std;

int main()
{
    // using a count variable
    int row, col;

    int count =1;

    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5; col++)
        {
            cout<<count<<" ";
            count = count + 1;
        }

        cout<<endl;
    }

    cout<<endl;
    // without using any variable

    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5; col++)
        {
            cout<< (row-1)*5+col << " ";
        }

        cout<<endl;
    }
}