#include <iostream>
using namespace std; 
int main(){
    int big[5];
    for(int i=0; i<=4; i++)
    {
        cin>> big[i];
    }
    int sm=big[0];
    for(int i=1; i<=4; i++)
    {
        if(sm<big[i])
        {
            sm=big[i];
        }
        
    }
    cout<<"greater value = "<< sm;
       
    
}