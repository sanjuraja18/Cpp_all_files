#include <iostream>
using namespace std;
int main(){
    int base=0,power=0,sum=0;
    cout <<"Enter a base number";
    cin>>base;
    cout<<"Enter a power number";
    cin>>power;
    sum=base;
    while (power!=1)
    {
        base= base*sum;
        power--;
    }
    cout<<base;
    
    return 0;
}