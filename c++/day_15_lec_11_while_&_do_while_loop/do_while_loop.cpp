#include <iostream>
using namespace std;

int main()
{

    // print n number  
    int n;
    cout<<"enter the num: ";
    cin>>n;

    int i = 1;   // initialization

    do{
        cout<<i<<endl;

        i++;      // update 

    }while(i<=n);   // break condition


    // there will be problem with do while loop 
    // give the input as 0 or any negative num
    // but this will still print 1 bcuz 

    // this loop will first print i and then checks the
    // break condition, so it always prints the first i=1



    // so becareful and know when to use which type of loop!!!!!!!!!!






}