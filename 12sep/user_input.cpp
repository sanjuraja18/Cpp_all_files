
//WAP except two from user and print all even sum 
#include <iostream>
using namespace std;
int main(){
    int first=0,secound=0,sum=0;
    cout<<"Enter a first number"<<"\n";
    cin>>first;

    cout <<"Enter a secound number"<<"\n";
    cin>>secound;
    do
    { 
       if(first%2==0)
         {
           sum = sum +first;
        }
        first++;
    } while (first<=secound);
    cout <<"output"<<"\n";
    cout<<sum;
    
}