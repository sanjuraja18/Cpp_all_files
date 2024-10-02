#include <iostream>
using namespace std;
int main(){
    for(int r=1; r<=5; r++ )
    {
        for(int s=5; s>r; s--){
            cout <<" ";
        }
        for(int c=1; c<=r; c++)
        {
            cout <<"* ";
        }
        cout<<"\n";
    }
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        for(int k=4; k>=i; k--){
            cout <<"* ";
        }
        cout <<"\n";
    }
    return 0;
}