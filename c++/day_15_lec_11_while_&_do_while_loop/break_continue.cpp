#include <iostream>
using namespace std;

int main()
{

    // break

    // u have no's from 1 to 10 but only print less than 4

    for(int i =1; i<=10; i++)
    {
        if(i==4)
        break;   // if this if condition is true, due to this "break", loop is broken here, it getsout of the loop

        cout<<i<<" ";
    }

    cout<<endl;
    // continue
    

    // this code prints 1 to 10 except the number 4

    for(int i =1; i<=10; i++)
    {
        if(i==4)
        continue;     // if this if condition is correct then it skips everything thats below and this and the loop goes on bby skipping that particular condition

        cout<<i<<" ";
    }

























}