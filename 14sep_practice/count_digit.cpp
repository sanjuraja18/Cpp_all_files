//WAP to find out the given number how many digit in your number
#include <iostream>
using namespace std;
int main(){
    int num=0, count=0;
    cout <<"Enter any number count number of digit";
    cin>>num;
    while (num!=0)
    {
        num=num/10;
        count++;
    }
    cout<<count;
    return 0;
}