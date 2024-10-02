//WAP to find out given number sum of digit
#include <iostream>
using namespace std;
int main(){
    int num=0, sum=0;
    cout<<"Enter any number";
    cin>>num;
    while(num!=0)
    {
        sum = num%10+sum;
        num =num/10;
    }
    cout<<sum;
}