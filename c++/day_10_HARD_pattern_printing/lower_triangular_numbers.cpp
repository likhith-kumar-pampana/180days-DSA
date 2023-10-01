#include<iostream>
using namespace std;

int main()
{
    int row, col;
    int n;
    cout<<"enter the number: ";
    cin>>n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            cout<<"  ";   //printing space first
        }
        for(col=1; col<=row; col++)
        {
            cout<<row<<" ";   // printing row row times
        }

        cout<<endl;
    }
}