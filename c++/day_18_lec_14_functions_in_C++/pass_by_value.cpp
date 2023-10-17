#include <iostream>
using namespace std;


void swap(int a, int b)   // pass by value
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

// this is pass by value, so different copies for a,b in the int main() part and in the function part
// changes in one doesn't reflect in the other one, as a copy is created and the copy is changed and
// the real one is not affected and is printed