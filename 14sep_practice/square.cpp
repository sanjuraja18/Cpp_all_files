//WAP to generate square root of valid number
//WAP to find out given number is prime or not
#include <iostream>
using namespace std;
int main(){
    int num=0,sum=1, prime=0;
    cout<<"Enter any number find out the prime or not ";
    cin>>num;

    while(num>=sum)
    {
        if(num%sum==0)
        {
          prime++;
        }
        sum++;
        
    }
    if(prime==2){
        cout<<"number is prime";
    }
    else{
        cout<<"number is not prime";
    }
    return 0;
}