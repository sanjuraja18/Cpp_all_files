#include <iostream>
using namespace std;
int main(){
    int num=0, count=0;
    cout <<"Enter any number";
    cin>>num;

    while (num!=0)
    {
        num= num/10;
        count++;

    }
    cout<<count;
    
}