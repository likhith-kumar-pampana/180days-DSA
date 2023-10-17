#include <iostream>
using namespace std;


void swap(int &a, int &b)    // pass by reference
{
    int c;
    c=a;
    a=b;
    b=c;
}



int main()
{
    int a, b;
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<" ";

}

// pass by reference, so points to same memory location and the changes in one is
// reflected in the other
