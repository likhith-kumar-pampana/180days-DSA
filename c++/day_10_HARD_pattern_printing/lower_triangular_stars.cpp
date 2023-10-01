#include<iostream>
using namespace std;

int main()
{
    
    int row, col;
    int n;
    cout<<" input the number: ";
    cin>>n;

    for(row=1; row<=5; row++)
    {
        for(col = 1; col<= 5-row; col++ )
        {
        cout<<"  ";  // we have two spaces here, think why. to see why print with one space, u will understand
        }

        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

}