#include<iostream>
using namespace std;

int main()
{
    int row,col; 

    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5-row; col++)
        {
            cout<<"  ";
        }
        for(col=row; col>=1; col=col-1)
        {
            cout<<"* ";
        }
        for(col=1; col<=row-1; col++)
        {
            cout<<"* ";
        }
        for(col=1; col<= 5-row; col++ )
        {
            cout<<"  ";
        }

        cout<<endl;
    }
}
