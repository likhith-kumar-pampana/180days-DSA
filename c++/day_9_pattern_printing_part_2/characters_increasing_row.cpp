#include<iostream>
using namespace std;

int main()
{
    int row,col;
    for(row=1; row<=5; row++)
    {
        char name = 'a' + row -1;
        for(col=1; col<=row; col++)
        {
            //char name='a'+row-1;
            // u can declare the char name inside this loop too, think why
            cout<<name<<" ";
        }

        cout<<endl;
    }
}