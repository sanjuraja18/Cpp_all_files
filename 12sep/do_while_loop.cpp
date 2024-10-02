#include <iostream>
using namespace std;
int main(){
    int num;
    int count=1;
    cout<<"Enter any number";
    cin>>num;
    do
    {
       cout<< num*count<<"\t";
        count++;
       
    } while (count<=10); 
    
}