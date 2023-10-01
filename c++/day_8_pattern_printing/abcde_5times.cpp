#include<iostream>
using namespace std;


// important 
int main()
{
    int row;
    char col;

    for(row = 1; row<=5; row++)
    {
        for(col='a'; col<='e'; col++)
        {
            cout<<col<<" ";
        }

        cout<<endl;
    }
    
    cout<<endl;

    // different way

    int row1,col1;

    for(row1=1; row1<=5; row1++)
    {
        
        for(col1=1; col1<=5; col1++)
        {
            char name = 'a'+col1-1;
            cout<<name<<" ";
        }

        cout<<endl;
    }

}