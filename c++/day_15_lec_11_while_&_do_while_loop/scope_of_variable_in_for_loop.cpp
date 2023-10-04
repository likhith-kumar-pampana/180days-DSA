#include <iostream>
using namespace std;

int main()
{

    int n =10;
    int i = 30;

    for(int i = 10; i <=30; i++)    // u can do this as this is in a diff block
    {
        cout<<i<<" ";                // first it looks for local variable, here its 10 so it uses it
    }

}       // here we are declaring in two diff blocks so two diff memory is allocated with same name but diff data