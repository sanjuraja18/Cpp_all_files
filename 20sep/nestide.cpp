#include <iostream>
using namespace std;
int main(){
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=i; j++){
            cout<<" * ";
        }
        cout<<"\n";
    }
        cout<<"\n\n";
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=i; j++){
            cout<< i;
        }
        cout<<"\n";
    }

         cout<<"\n\n";
         int n=1;
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=i; j++){
            cout<< n<<" ";
            n++;
        }
        cout<<"\n";
    }

         cout<<"\n\n";
         
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=i; j++){
            cout<< j;
        }
        cout<<"\n";
    }

         cout<<"\n\n";
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=i; j++){
            cout<< j*j;
        }
        cout<<"\n";
    }

         cout<<"\n\n";
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=i; j++){
            cout<< i;
        }
        cout<<"\n";
    }
}