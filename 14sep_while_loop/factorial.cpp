#include <iostream>
using namespace std;
int main(){
    //base or power
    int fact=1;
    int num;
    cout<<"Enter any no to generate table"<<"\n";
    cin>>num;
    while (num!=0)//entry loop
    {
        fact= num*fact;
         num--;
        

    }
    cout<<fact;
    
}