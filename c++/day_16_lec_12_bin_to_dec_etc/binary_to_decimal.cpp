#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number: ";
    cin>>num;

    int remainder, ans = 0, multiply = 1;

    while(num > 0)
    {
        // remainder

        remainder = num%10;

        // divide the number

        num = num / 10;

        // ans

        ans = remainder*multiply +  ans;

        // multiply

        multiply = multiply*2;

    }

    cout<<ans<<endl;

}