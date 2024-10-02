#include <iostream>
using namespace std;
int main(){
    //65-90:A-Z
    //97-122:a-z
    
    for(int i=1;i<=3; i++)
    {
    for(int j=1; j<=i; j++)
    {
        cout <<char(j+64);   
    }
   
    cout<<"\n";
    }

    cout<<"\n\n";

     int n=65;
    for(int i=1;i<=3; i++)
    {
    for(int j=1; j<=i; j++)
    {
        cout <<char(n); 
        n++ ; 
    }
   
    cout<<"\n";
    }

    
}