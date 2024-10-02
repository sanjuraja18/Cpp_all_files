#include <iostream>
using namespace std;
int main(){
    for(int r=1; r<=4; r++ )
    {
        
        for(int c=4,d=1; c>=r; c--,d++)
        {
            cout <<d;
        }
        cout<<"\n";
    }
    return 0;
}