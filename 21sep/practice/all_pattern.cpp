#include <iostream>
using namespace std;

int main(){
/*  
    A
    AB
    ABC
*/
//first method
for(int i=1; i<=3; i++)
{
    for(int j=1; j<=i; j++)
    {
        cout<<char(j+64);
    }
    cout<<"\n";
}
cout<<"\n";

// second method

for(int i=65; i<=67; i++)
{
    for(int j=65; j<=i; j++)
    {
        cout<<char(j);
    }
    cout<<"\n";
}
cout<<"\n";

/*
A
BC
DEF
*/

//first method
int n=65;
for(int i=1; i<=3; i++)
{
    for(int j=1; j<=i; j++)
    {
        cout<<char(n);
        n++;
    }
   
    cout<<"\n";
}
cout<<"\n";




}