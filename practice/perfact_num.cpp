#include <iostream>
using namespace std;
int main(){
    int n,s=0;
    cout<<"Enter any number";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0){
            s=s+1;
    }
     }
        if(s==n){
            cout<<"perfect number";
        }
        else{
            cout<<"not perfect number";
        }
    return 0;
}