#include <iostream>
using namespace std;

int main()
{

    int num;
    cout<<"enter the number: ";
    cin>>num;

    int remainder, ans=0, multiply = 1;

    while(num > 0)
    {
        // we need remainder first

        remainder = num%2;      // u can also use bitwise operator "num&1"

        // now we need quotient

        num/=2;
        // i.e num = num/2;

        // ans

        ans = remainder*multiply + ans;

        // multiply

        multiply *= 10;
        // i.e multiply = multiply*10;

    }

    cout<<ans<<endl;



}