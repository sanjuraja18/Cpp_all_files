#include <iostream>
using namespace std;
int main(){
    int num=0, sum=0;
    cout <<"Enter any number";
    cin>>num;

    while (num!=0)
    {
        sum= sum + num%10;
        num= num/10;

    }
    cout<<sum;
    
}