#include <iostream>
using namespace std;

int main()
{

    // print these names if only 1 and 2 inputs are given, for all other inputs print sohit

    int i;
    cout<<"enter the number: ";
    cin>>i;

    switch(i)
    {
        case 1:    // case () this can be int and char also
        cout<<"rohit";
        break;      // without this break statement it will execute the statements below too
                    // and it will print mohit and sohit also if case 2 also doesn't have break statement

        case 2:
        cout<<"mohit";
        break;      // without this break statement the default condition will also be printed

        default:
        cout<<"sohit";
    }











}