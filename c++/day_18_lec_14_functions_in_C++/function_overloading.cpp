#include <iostream>
using namespace std;


void Swap(int &a, int &b)    
{
    int c;
    c=a;
    a=b;
    b=c;
}

void Swap(float &a, float &b)    // if this is not present function overloading happens for f1, f2 swap
{                                 // cuz the above Swap func cannot handle float 
    float c;
    c=a;
    a=b;
    b=c;
}


int main()
{
    int a, b;
    cin>>a>>b;

    Swap(a,b);
    cout<<a<<" "<<b<<endl;

    float f1=4.8, f2=3.6;     // this will throw error if the second Swap func is not defined, FUNCTION OVERLOADING
    Swap(f1, f2);
    cout<<f1<<" "<<f2<<endl;

}

